#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <map>
#include <fstream>
//TESTY MCTEST
#include "CustomAdven.h"

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

}

void andrewsCode(CustomAdven& adv) {

}

void robertosCode(CustomAdven& adv) {
	adv.setupChoice("search", "forest1search");
	adv.setupChoice("search the forest","forest1search");
	adv.setupChoice("search the area","forest1search");
	adv.addPath(__LINE__, "start", "After walking for some time, you find your self in a desolate forest. The leaves on the trees have fallen off long ago.");


	adv.addPath(__LINE__, "forest1search", "After walking for some time, you find your self in a desolate forest. The leaves on the trees have fallen off long ago.");
}

int main() {
	//stuff to appear on start up
	std::string startUpText = "Filler";

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
			break;
		}
		else if (b == "CRIPPLETRON") {
			std::ifstream Reader("Surprise.txt");

			adv.setupChoice("q", "end");
			adv.addPath(__LINE__, "start", getFileContents(Reader)+"\nType q to quit.");
			
			break;
		}
		
	}
	adv.end();

	//don't need this
	//adv.writeAsBinary("yee");
	adv.runPaths();
	
	return 0;
}
