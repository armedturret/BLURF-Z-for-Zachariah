#include "CustomAdven.h"
#include <iostream>
#include <Windows.h>
\\Test Comment/Commit
void CustomAdven::begin()
{
	m_writing = true;
	std::cout << "-------------------------Adventure Generation Begin-------------------------\n" << std::endl;
}

void CustomAdven::end()
{
	m_writing = false;
	std::cout << "-------------------------Adeventure Generation Finish-------------------------\n" << std::endl;
}

void CustomAdven::setupChoice(std::string option, std::string destination)
{
	if (!m_writing) {
		printRedWarning("Error: ");
		std::cout << "Must run begin() before running setupChoice()" << std::endl;
		std::string a;
		std::getline(std::cin, a);
		return;
	}
	m_choiceBuf.emplace_back(option, destination);
}

void CustomAdven::addPath(const int lineNum, std::string name, std::string text, std::function<std::string(std::string input, path currentPath)> customBehavior)
{

#ifdef  _DEBUG
	if (!m_writing) {
		printRedWarning("Error: ");
		std::cout << "Must run begin() before running addPath()" << std::endl;
		std::string a;
		std::getline(std::cin, a);
		return;
	}
	std::cout << "Attempt to create path at line " << lineNum << std::endl;

	if (m_choiceBuf.size() <= 0) {
		printRedWarning("	Error: ");
		std::cout << "Could not create path from null choice list at line " << lineNum << std::endl;
		m_error = true;
		return;
	}
	if ((m_choiceMap.find(name)) != m_choiceMap.end()) {
		printRedWarning("	Error: ");
		std::cout << "Path " << name << " already created at line " << lineNum << std::endl;
		m_error = true;
	}

	if (text != "")
		std::cout << "	Text: " << text << std::endl;
	else {
		std::cout << "	Text: " << std::endl;
		printRedWarning("	Warning: ");
		std::cout << "Text is blank are you sure about that?" << std::endl;
	}
	if (m_choiceBuf[0].destinationChoice == "end")
		std::cout << "	Path is ending" << std::endl;
#endif
	path pathBuf;

	pathBuf.text = text;
	pathBuf.customBehavior = customBehavior;
	for (auto &it : m_choiceBuf) {
#ifdef _DEBUG
		std::cout << "	Making choice " << it.option << ", " << it.destinationChoice << std::endl;
#endif
		toCaps(it.option);
		pathBuf.choices.insert(make_pair(it.option, it.destinationChoice));
	}

	pathBuf.lineNum = lineNum;

	m_choiceMap.insert(make_pair(name, pathBuf));

	m_choiceBuf.clear();
}

void CustomAdven::writeAsBinary(std::string file)
{
#ifndef  _DEBUG
	printRedWarning("Error:");
	std::cout << " writeAsBinary cannot be called in Release mode." << std::endl;
#else
	bool binError = false;
	if (m_writing) {
		printRedWarning("Error: ");
		std::cout << "Must run end() before running writeAsBinary()" << std::endl;
		std::string a;
		std::getline(std::cin, a);
		return;
	}

	std::cout << "-------------------------Binary Write Start-------------------------\n" << std::endl;
	std::cout << "Checking adventure tree for binary errors before writing. (Note: safecheck() will NOT be run during this function, please use runPaths() in debug to test your adventure for path completion.)" << std::endl;
	std::cout << "Binary errors will not interfere with your playability, they only prevent data being serialized into binary." << std::endl;
	for (auto it = m_choiceMap.begin(); it != m_choiceMap.end(); it++) {
		if (it->first.length() >= binPath::TITLE_SIZE) {
			printRedWarning("Binary Write Error: ");
			std::cout << "path "<<it->first<<" defined at line "<<it->second.lineNum<<" has too long of a title. Consider shortening it or increasing TITLE_SIZE (Currently is "<<binPath::TITLE_SIZE<<") in binPath." << std::endl;
			binError = true;
		}
		if (it->second.text.length() >= binPath::TEXT_SIZE) {
			printRedWarning("Binary Write Error: ");
			std::cout << "path " << it->first << " defined at line " << it->second.lineNum << " has too long of a text. Consider shortening it or increasing TEXT_SIZE (Currently is " << binPath::TEXT_SIZE << ") in binPath." << std::endl;
			binError = true;
		}
	}
	if (binError) {
		std::cout << "Can not serialize map until all errors are fixed." << std::endl;
		std::string a;
		std::getline(std::cin, a);
		return;
	}
	std::cout << "Writing map to " << file << ".adven ..." << std::endl;
	std::cout << "Adventure written to " << file << ".adven\nPress Enter to continue";
	std::string a;
	std::getline(std::cin, a);
	std::cout << "-------------------------Binary Write Finish-------------------------\n" << std::endl;
	return;
#endif
}

void CustomAdven::runPaths()
{
#ifdef _DEBUG

	if (!m_error)
		m_error = safecheck();

	if (m_error) {
		std::cout << "Fix all errors to run. Press enter to continue." << std::endl;
		std::string a;
		std::getline(std::cin, a);
		return;
	}

	std::cout << "All seems good! Press enter to continue!" << std::endl;
	std::string a;
	std::getline(std::cin, a);
	clearScreen();
#endif
	std::string nextPathID = "start";
	std::string input = "start";
	path currentPath;
	while (true) {
		currentPath = m_choiceMap.find(nextPathID)->second;
		print(currentPath.text);
		input = getValidInput(currentPath);
		nextPathID = currentPath.customBehavior(input, currentPath);
		if (nextPathID == "end")
			break;
		clearScreen();
	}
}

bool CustomAdven::safecheck()
{
	if (m_writing) {
		printRedWarning("Error: ");
		std::cout << "Must run end() before running runPaths()" << std::endl;
		std::string a;
		std::getline(std::cin, a);
		return true;
	}
	std::cout << "-------------------------Safe Check Begin-------------------------\n" << std::endl;
	//TODO: Check for multiple starts
	for (auto it = m_choiceMap.begin(); it != m_choiceMap.end(); it++)
	{
		std::cout << "Double checking path " << it->first << " at line " << it->second.lineNum << " for choice existence." << std::endl;
		for (auto choiceIt = it->second.choices.begin(); choiceIt != it->second.choices.end(); choiceIt++)
		{
			std::cout << "	Checking " << choiceIt->first << " with path " << choiceIt->second << std::endl;
			if ((m_choiceMap.find(choiceIt->second)) == m_choiceMap.end() && choiceIt->second != "end") {
				printRedWarning("	Error: ");
				std::cout << "Path " << choiceIt->second << " does not exist." << std::endl;
				return true;
			}
		}
	}
	std::cout << "-------------------------Safe Check Finish-------------------------\n" << std::endl;
	return false;
}

void CustomAdven::print(std::string text)
{
	std::cout << text << std::endl;
}

void CustomAdven::toCaps(std::string str)
{
	for (auto& x : str)
		x = toupper(x);
}

std::string CustomAdven::getValidInput(path origin)
{
	while (true) {
		
		std::string choice;
		std::getline(std::cin, choice);
		toCaps(choice);
		if (origin.choices.find(choice) != origin.choices.end())
			return choice;
		clearScreen();
		print(origin.text);
	}
}

void CustomAdven::clearScreen()
{
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X *csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR) ' ',
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}

void CustomAdven::printRedWarning(std::string text)
{
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD   index = 0;

	// Remember how things were when we started
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hstdout, &csbi);

	SetConsoleTextAttribute(hstdout, 0xc);
	std::cout << text;
	// Keep users happy
	SetConsoleTextAttribute(hstdout, csbi.wAttributes);
}
