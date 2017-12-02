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

	adv.setupChoice("", "finale");
	adv.addPath(__LINE__, "pewpew", "You grab the gun from your cart and shoot him in the chest. \"You shot me!\", he screams. But they\'re his last words. He dies of his injuries within seconds. You attempt to survive on your own for a long time, but you aren\'t strong or smart enough to make it more than a few years. You die of starvation just 3 years later.\nPRESS ENTER TO FINISH");

	adv.setupChoice("go outside", "outside");
	adv.setupChoice("make breakfast", "breakfast");
	adv.setupChoice("go back to sleep", "sleep");
	adv.setupChoice("go to sleep", "sleep");
	adv.setupChoice("sleep", "sleep");
	adv.addPath(__LINE__, "talky", "You approach him. \"I couldn\'t do it.\" He looks at you, disappointed. \"I didn\'t think you would.\" You head back into the house together, pondering what you will do. The next morning, you get up early, trying to decide whether to make breakfast, go back to sleep, or go outside.");

	adv.setupChoice("", "breakfast");
	adv.addPath(__LINE__, "outside", "You walk outside, looking to clear your head. Birds circle overhead, and a butterfly soars past. The valley is so peaceful, you could almost forget about the deadness outside. You walk back inside.\nPRESS ENTER TO CONTINUE");

	adv.setupChoice("ok", "nomnom");
	adv.setupChoice("yay", "nomnom");
	adv.setupChoice("", "nomnom");
	adv.addPath(__LINE__, "breakfast", "You decide to make some breakfast. A special treat this morning, perhaps. You dig up some old pancake batter. Let's make pancakes!");

	adv.setupChoice("", "nomnom");
	adv.setupChoice("ok", "nomnom");
	adv.setupChoice("yay", "nomnom");
	adv.addPath(__LINE__, "sleep", "You fall asleep. When you wake up, you smell pancakes! You run downstairs. Yay!");

	adv.setupChoice("no", "nogo");
	adv.setupChoice("yes", "yesgo");
	adv.addPath(__LINE__, "nomnom", "You eat the pancakes at the table, talking to him about nothing at all, trying to avoid conversation about what happened. Finally John asks you, \"We need to get supplies. Can you get to Ogdentown?\"");

	adv.setupChoice("", "finale");
	adv.addPath(__LINE__, "nogo", "\"You won\'t go? Fine. Then we just starve. I can\'t go. I\'m too lazy.\"\nYou survive for many weeks, begging him to go. But you run out of supplies and die just a few months later.\nPRESS ENTER TO FINISH");

	adv.setupChoice("yes", "goinmorning");
	adv.setupChoice("no", "nogo");
	adv.addPath(__LINE__, "yesgo", "\"Then it\'s decided. You\'ll head out tomorrow morning, pick up anything you can, and head back. A simple, routine mission. Ok?\"");
	
	adv.setupChoice("", "ogden");
	adv.addPath(__LINE__, "goinmorning", "In the morning, you creep out the door, get the wagon and suit, and leave the valley. You head north, to Ogdentown.\n--PRESS ENTER TO CONTINUE--");
	
	adv.setupChoice("", "ogdentown");
	adv.addPath(__LINE__, "ogden", "* - OGDENTOWN - *");
		    
	adv.setupChoice("north", "square");
	adv.setupChoice("east", "grave");
	adv.addPath(__LINE__, "ogdentown", "You enter quietly. The gate creaks as you open it. Everything is still. To the north is the town square. East is the churchyard.");

	adv.setupChoice("north", "church");
	adv.setupChoice("west", "ogdentown");
	adv.addPath(__LINE__, "grave", "These were the lucky ones. They didn't have to go through what the others did. They never even knew this would happen. West is the entrance. North is the church.");

	adv.setupChoice("south","grave");
	adv.addPath(__LINE__, "church", "The church. You pause a moment to remember those who died here, before and after the war. South is the churchyard.");

	adv.setupChoice("enter shops", "shops");
	adv.setupChoice("go to shops", "shops");
	adv.setupChoice("shops", "shops");
	adv.setupChoice("look at fountain", "fountain");
	adv.setupChoice("examine fountain", "fountain");
	adv.setupChoice("fountain", "fountain");
	adv.addPath(__LINE__, "square", "You head north to the town square. Many shops line the walls. In the center is a large fountain.");
	
	adv.setupChoice("enter shops", "shops");
	adv.setupChoice("go to shops", "shops");
	adv.setupChoice("shops", "shops");
	adv.setupChoice("pull plug", "simend");
	adv.addPath(__LINE__, "fountain", "The fountain, which is an elaborately carved statue of an ancient Greek god, stands still. Must have been electric. At the bottom are some coins, and a plug.");

	adv.setupChoice("end", "finale");
	adv.addPath(__LINE__, "simend", "You pull the plug. The world around you flickers, and then dies. You find yourself standing an a massive grid. In the center, a few feet from you, a door appears. As you step through, a voice says, \"Congratulations for completing this test. your results have been recorded, and you will now be released.\" All that's left to do now is say \"The-\"");

	adv.setupChoice("leave", "leaving");
	adv.addPath(__LINE__, "shops", "You walk into one of the shops. Inside are all the supplies you need. You grab them, and make ready to leave.");
	
	adv.setupChoice("build fire", "fire");
	adv.setupChoice("build a fire", "fire");
	adv.setupChoice("fire", "fire");
	adv.setupChoice("sleep", "sleep");
	adv.setupChoice("continue", "walkonplz");
	adv.addPath(__LINE__, "leaving", "You head out of the town. Outside, you begin heading south. However, as you walk, you realize it's been too long. You should have been home by now... the sun is setting. You walk on until you reach a cave in a mountainside. Settling down, you decide what to do. Build a fire, sleep, or continue on?");
	
	adv.setupChoice("end","finale");
	adv.addPath(__LINE__, "walkonplz", "You decide to continue on. You head west, thinking you might be able to correct your mistake. however, as you keep going, you find yourself hopelessly lost. You keep going, and find- yes! The entrance to the valley! You enter, relieved... but something's different. This isn't your valley at all! A fw people come out, wary. \"Who are you?\", they ask. you tell them.\n\nWithing a few days, you have gotten to know these people well. This must be the valley with the birds! You settle down, hoping John is safe. This is, your home. All that's left to do now is say \"The-\" 
	
	adv.setupChoice("east", "homeagain");
	adv.addPath(__LINE__, "fire", "You make a small fire with som of the supplies, then fall asleep. Upon waking up, light shows you your mistake. Last night, you must have turned to avoid the thicker forest, and not gotten back on track. To reach the alley, all you have to do is go east a few miles, and you're home!");
	
	adv.setupChoice("end", "finale");
	adv.addPath(__LINE__, "homeagain", "You enter the valley with the supplies. John greets you. With the supplies, you can start again. The valley will be humanity's ark. All that's left to do now is say \"The-\"");	    
		    
	adv.setupChoice("", "end");
	adv.addPath(__LINE__, "finale", "* - THE END - *\n\nThis has been SOUTH, written by Andrew Winters. Feel free to play again if you wish.");
}

andrews_class::andrews_class()
{
}


andrews_class::~andrews_class()
{
}
