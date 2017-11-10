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
	
	adv.setupChoice("go south", "centerofvalley");
	adv.setupChoice("go north", "nope");
	adv.addPath(__LINE__, "start", "You step back into the valley, feeling embarrased. Why did you ever think you could leave? To the south is the main road back into the center of the valley. To the north lies the unknown wilderness.");
	
	adv.setupChoice("talk to him", "talky");
	adv.setupChoice("shoot him", "pewpew");
	adv.addPath(__LINE__, "centerofvalley", "There\'s nothing for it. You head back into the valley. When you enter, Mr. Loomis looks puzzled at your arrival.\n\"What are you doing here? Go!\", he yells. You wonder if he can even survive on his own. Maybe it\'s better that you\'ve come back. You decide to talk to him.");
	
	adv.setupChoice("talk to him", "talky");
	adv.setupChoice("shoot him", "pewpew");
	adv.addPath(__LINE__, "nope", "You just can't bring youself to do it. You trudge solemnly back into the valley. When you enter, Mr. Loomis looks puzzled at your arrival.\n\"What are you doing here? Go!\", he yells. You wonder if he can even survive on his own. Maybe it\'s better that you\'ve come back. You decide to talk to him.");
	
	adv.setupChoice("", "end");
	adv.addPath(__LINE__, "pewpew", "You grab the gun from your cart and shoot him in the chest. \"You shot me!\", he screams. But they\'re his last words. He dies of his injuries within seconds. You attempt to survive on your own for a long time, but you aren\'t strong or smart enough to make it more than a few years. You die of starvation just 3 years later.");
	
	adv.setupChoice("go outside", "outside");
	adv.setupChoice("make breakfast", "breakfast");
	adv.setupChoice("go back to sleep", "sleep");
	adv.setupChoice("go to sleep", "sleep");
	adv.setupChoice("sleep", "sleep");
	adv.addPath(__LINE__, "talky", "You approach him. \"I couldn\'t do it.\" He looks at you, disappointed. \"I didn\'t think you would.\" You head back into the house together, pondering what you will do. The next morning, you get up early, trying to decide whether to make breakfast, go back to sleep, or go outside.");

	//adv.setupChoice("input", "goto");
	//adv.addPath(__LINE__, "id", "text");

	adv.setupChoice("", "breakfast");
	adv.addPath(__LINE__, "outside", "You walk outside, looking to clear your head. Birds circle overhead, and a butterfly soars past. The valley is so peaceful, you could almost forget about the deadness outside. You walk back inside.");

	adv.setupChoice("", "nomnom");
	adv.addPath(__LINE__, "breakfast", "You decide to make some breakfast. A special treat this morning, perhaps. You dig up some old pancake batter and go to work.");

	adv.setupChoice("", "nomnom");
	adv.addPath(__LINE__, "sleep", "You fall asleep. When you wake up, you smell pancakes! You run downstairs.");

	adv.setupChoice("", "end");
	adv.addPath(__LINE__, "nomnom", "You eat the pancakes at the table, talking to him about nothing at all, trying to avoid conversation about what happened.");
}

void robertosCode(CustomAdven& adv) {

}

int main() {
	//stuff to appear on start up
	std::string startUpText = "You prepare to set out on your journey. The world outside is frightening, but you know you can do it. The only question is, which compass direction should you go?";

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
			system("cls");
			//Go north is where loomis came from (apocalyptic setting)
			aidensCode(adv);
			break;
		}
		else if (b == "GO SOUTH") {
			//Back to the valley
			system("cls");
			andrewsCode(adv);
			break;
		}
		else if (b == "GO WEST") {
			//Follow the 'birds'
			system("cls");
			robertosCode(adv);
			break;
		}
		else if (b == "GO EAST") {
			//Starvation
			system("cls");
			adv.setupChoice("", "end");
			adv.addPath(__LINE__, "start", "You go east for a while but there's only a vast, empty wilderness. You eventually run out of supplies and die.");
			break;
		}
		
	}
	adv.end();

	//don't need this
	//adv.writeAsBinary("yee");
	adv.runPaths();
	
	return 0;
}
