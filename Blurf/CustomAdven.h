#pragma once
#include <string>
#include <map>
#include <functional>
#include <vector>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32)
#include <Windows.h>
#else
#include <unistd.h>
#include <term.h>
#endif

struct choice {
	choice() : option(""), destinationChoice("") {}
	choice(std::string option, std::string destinationChoice) : option(option), destinationChoice(destinationChoice) {}
	std::string option;
	std::string destinationChoice;
};

struct path {
	path() : text("") {}
	path(std::string text, std::map<std::string, std::string> choices) : text(text), choices(choices) {}
	std::string text;
	int lineNum;
	std::map<std::string, std::string> choices;
	std::function<std::string(std::string input, path currentPath)> customBehavior;
};

struct binPath {
	static const int TITLE_SIZE = 20;
	static const int TEXT_SIZE = 300;
	binPath(const path& p) {

	}
	char title[TITLE_SIZE];
	char text[TEXT_SIZE];
};

struct binChoice {
	static const int OPTION_SIZE = 50;
	static const int DESTINATION_SIZE = 20;
};


inline std::string defaultBehavior(std::string input, path currentPath) {
	if (input.substr(0, 1) != "+")
		return currentPath.choices.find(input)->second;
	else
		return input.substr(1, input.length() - 1);
}

inline void defaultEnd() {
	//do nothing
}

class CustomAdven
{
public:
	void begin();

	void end();

	void setupChoice(std::string option, std::string destination);

	void addPath(const int lineNum, std::string name, std::string text, std::function<std::string(std::string input, path currentPath)> customBehavior = defaultBehavior);

	void generateCheatSheet(std::string file);

	void writeAsBinary(std::string file);

	void runPaths(std::function<void()> endFunction = defaultEnd);

	void clearScreen();
private:
	bool safecheck();

	void print(std::string text);

	void toCaps(std::string& str);

	std::string getValidInput(std::string id, path origin);

	//Console functions
	void printRedWarning(std::string text);

	bool m_error = false;
	bool m_writing = false;

	std::map<std::string, std::string> m_globalVariables;
	std::vector<choice> m_choiceBuf;
	std::map<std::string, path> m_choiceMap;
};

