#include "andrews_class.h"
#include "CustomAdven.h"

//To whom it may concern,

//Just to clear up things a bit, guess who's computer's charger doesn't work? So this is a Surface. 1. That can't download things and only has IE. 
//And so, I edit directly on GitHub.
//You think that's bad?
//IT CAN'T USE GIT
//So...
//Help.

//Sincerely, 2017 Me
void andrews_class::run(CustomAdven & adv)
{

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
	adv.addPath(__LINE__, "pewpew", "You grab the gun from your cart and shoot him in the chest. \"You shot me!\", he screams. But they\'re his last words. He dies of his injuries within seconds. You attempt to survive on your own for a long time, but you aren\'t strong or smart enough to make it more than a few years. You die of starvation just 3 years later.\nPRESS ENTER TO FINISH");

	adv.setupChoice("go outside", "outside");
	adv.setupChoice("make breakfast", "breakfast");
	adv.setupChoice("go back to sleep", "sleep");
	adv.setupChoice("go to sleep", "sleep");
	adv.setupChoice("sleep", "sleep");
	adv.addPath(__LINE__, "talky", "You approach him. \"I couldn\'t do it.\" He looks at you, disappointed. \"I didn\'t think you would.\" You head back into the house together, pondering what you will do. The next morning, you get up early, trying to decide whether to make breakfast, go back to sleep, or go outside.");

	adv.setupChoice("", "breakfast");
	adv.addPath(__LINE__, "outside", "You walk outside, looking to clear your head. Birds circle overhead, and a butterfly soars past. The valley is so peaceful, you could almost forget about the deadness outside. You walk back inside.\nPRESS ENTER TO CONTINUE");

	adv.setupChoice("", "nomnom");
	adv.addPath(__LINE__, "breakfast", "You decide to make some breakfast. A special treat this morning, perhaps. You dig up some old pancake batter and go to work.\nPRESS ENTER TO CONTINUE");

	adv.setupChoice("", "nomnom");
	adv.addPath(__LINE__, "sleep", "You fall asleep. When you wake up, you smell pancakes! You run downstairs.\nPRESS ENTER TO CONTINUE");

	adv.setupChoice("no", "nogo");
	adv.setupChoice("yes", "yesgo");
	adv.addPath(__LINE__, "nomnom", "You eat the pancakes at the table, talking to him about nothing at all, trying to avoid conversation about what happened. Finally John asks you, \"We need to get supplies. Can you get to Ogdentown?\"");

	adv.setupChoice("", "end");
	adv.addPath(__LINE__, "nogo", "\"You won\'t go? Fine. Then we just starve. I can\'t go. I\'m too lazy.\"\nYou survive for many weeks, begging him to go. But you run out of supplies and die just a few months later.\nPRESS ENTER TO FINISH");

	adv.setupChoice("yes", "goinmorning");
	adv.setupChoice("no", "nogo");
	adv.addPath(__LINE__, "yesgo", "\"Then it\'s decided. You\'ll head out tomorrow morning, pick up anything you can, and head back. A simple, routine mission. Ok?\"");
					
	
}

andrews_class::andrews_class()
{
}


andrews_class::~andrews_class()
{
}
