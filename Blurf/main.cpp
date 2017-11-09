#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <map>

#include "CustomAdven.h"

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
			adv.setupChoice("fin", "end");
			adv.addPath(__LINE__, "start", "You go east for a while but there's nothing there. You eventually run out of supplies and die.");
			break;
		}
		
	}
	adv.end();

	//don't need this
	//adv.writeAsBinary("yee");
	adv.runPaths();
	
	return 0;
}