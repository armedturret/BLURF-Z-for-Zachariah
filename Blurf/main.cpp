#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <map>

#include "CustomAdven.h"

int main() {
	
	CustomAdven adv;
	adv.begin();

	adv.setupChoice("go north", "parttwo");
	adv.addPath(__LINE__, "start", "You find yourself in the middle of a forest that you don't recognize, what do you do?");
	
	adv.setupChoice("push it", "end");
	adv.setupChoice("push the button", "end");
	adv.addPath(__LINE__, "parttwo", "You find a cave with a button that says \"push me\".");
	
	adv.end();

	adv.writeAsBinary("yee");
	adv.runPaths();
	
	return 0;
}