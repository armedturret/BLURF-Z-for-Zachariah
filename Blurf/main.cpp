#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <map>
#include "aidensclass.h"
//TESTY MCTEST
#include "CustomAdven.h"

void toCaps(std::string& str)
{
	for (auto& x : str)
		x = toupper(x);
}

void aidensCode(CustomAdven& adv) {
	aidensCode code;
	code.run(adv);
	adv.setupChoice("Pickup Food", "foodpickup1");
	adv.setupChoice("Pickup", "foodpickup1");
	adv.setupChoice("yes", "foodpickup1");
	adv.setupChoice("y", "foodpickup1");

	adv.setupChoice("Don't pickup", "nfoodpickup1");
	adv.setupChoice("Don't", "nfoodpickup1");
	adv.setupChoice("no", "nfoodpickup1");
	adv.setupChoice("n", "nfoodpickup1");
	adv.addPath(__LINE__, "start", R"(	You begin your journy to the north, you wave good-bye to John as you go on.)");

	adv.setupChoice("Continue", "end");
	adv.addPath(__LINE__, "foodpickup1", "Gained +1 food!");

	adv.setupChoice("Continue", "end");
	adv.addPath(__LINE__, "nfoodpickup1", "You decide not to pick up the radiated can of food");
}

void andrewsCode(CustomAdven& adv) {
adv.setupChoice("go south", "centerofvalley");
adv.setupChoice("go north", "nope");
adv.addPath(__LINE__, "start", "You step back into the valley, feeling embarrased. Why did you ever think you could leave? To the south is the main road back into the center of the valley. To the north lies the unknown wilderness.");

//adv.setupChoice("talk to him", "talky");
adv.setupChoice("shoot him", "pewpew");
adv.addPath(__LINE__, "centerofvalley", "There\'s nothing for it. You head back into the valley. When you enter, Mr. Loomis looks puzzled at your arrival.\n\"What are you doing here? Go!\", he yells. You wonder if he can even survive on his own. Maybe it\'s better that you\'ve come back. You decide to talk to him.");

//adv.setupChoice("talk to him", "talky");
adv.setupChoice("shoot him", "pewpew");
adv.addPath(__LINE__, "nope", "You just can't bring youself to do it. You trudge solemnly back into the valley.");

adv.setupChoice("", "end");
adv.addPath(__LINE__, "pewpew", "You grab the gun from you cart and shoot him in the chest. \"You shot me!\", he screams. But they\'re his last words. He dies of his injuries within seconds.");
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
			//Go north is where loomis came from (apocolyptic setting)
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
