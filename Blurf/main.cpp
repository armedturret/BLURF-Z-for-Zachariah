#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <map>
#include <fstream>
#include <functional>

#include "CustomAdven.h"

#include "andrews_class.h"
#include "AidensCode.h"
#include "RobertosCode.h"

std::string getFileContents(std::ifstream& File)
{
	std::string Lines = "";        //All lines

	if (File)                      //Check if everything is good
	{
		while (File.good())
		{
			std::string TempLine;                  //Temp line
			std::getline(File, TempLine);        //Get temp line
			TempLine += "\n";                      //Add newline character

			Lines += TempLine;                     //Add newline
		}
		return Lines;
	}
	else                           //Return error
	{
		return "ERROR File does not exist.";
	}
}

void toCaps(std::string& str)
{
	for (auto& x : str)
		x = toupper(x);
}

void aidensCode(CustomAdven& adv) {
	AidensCode code;
	code.run(adv);
	adv.end();

//only call in debug
#ifdef _DEBUG
	adv.generateCheatSheet("North Cheat Sheet.txt");
#endif	
}

void andrewsCode(CustomAdven& adv) {
	andrews_class code;
	code.run(adv);
	adv.end();

//only call in debug
#ifdef _DEBUG
	adv.generateCheatSheet("South Cheat Sheet.txt");
#endif	
}

void robertosCode(CustomAdven& adv) {
	RobertosCode code;
	code.run(adv);
	adv.end();

//only call in debug
#ifdef _DEBUG
	adv.generateCheatSheet("West Cheat Sheet.txt");
#endif
}

std::function<void()> endFunction = [](){
	std::ifstream Reader("Credits.txt");
	std::cout << getFileContents(Reader)<<std::endl;
	std::string a;
	std::getline(std::cin, a);
};

int main() {
	//stuff to appear on start up
	std::string startUpText = "You are playing as Anne Burden from the Robert C. O'Briens\' novel Z for Zacharia. You have just left the valley and are a safe distance away from the insane John Loomis. Now, you must choose which direction to go in. He is yelling that to the west he saw birds. Now you simply need to choose a direction to go in.";

	CustomAdven adv;
	adv.begin();

	/*example code
	adv.setupChoice("go north", "parttwo");
	adv.addPath(__LINE__, "start", "You find yourself in the middle of a forest that you don't recognize, what do you do?");
	
	adv.setupChoice("push it", "end");
	adv.setupChoice("push the button", "end");
	adv.addPath(__LINE__, "parttwo", "You find a cave with a button that says \"push me\".");
	*/
	
	//simple getline statement to prevent name confliction\

	std::string b;
	while (true) {
		adv.clearScreen();
		std::cout << startUpText << std::endl;
		std::getline(std::cin, b);

		toCaps(b);
		if (b == "GO NORTH") {
			adv.clearScreen();
			//Go north is where loomis came from (apocolyptic setting)
			aidensCode(adv);
			break;
		}
		else if (b == "GO SOUTH") {
			//Back to the valley
			adv.clearScreen();
			andrewsCode(adv);
			break;
		}
		else if (b == "GO WEST") {
			//Follow the 'birds'
			adv.clearScreen();
			robertosCode(adv);
			break;
		}
		else if (b == "GO EAST") {
			//Starvation
			adv.clearScreen();
			adv.setupChoice("q", "end");
			adv.addPath(__LINE__, "start", "You go east for a while but there's nothing there. You eventually run out of supplies and die.\nType q to quit.");
			adv.end();
			break;
		}
		else if (b == "CRIPPLETRON") {
			adv.clearScreen();
			std::ifstream Reader("Surprise.txt");

			adv.setupChoice("q", "end");
			adv.addPath(__LINE__, "start", getFileContents(Reader)+"\nType q to quit.");
			adv.end();
			break;
		}
		
	}
	

	adv.runPaths(endFunction);
	
	return 0;
}
