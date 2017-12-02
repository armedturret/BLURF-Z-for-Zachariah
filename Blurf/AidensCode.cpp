#include "AidensCode.h"



AidensCode::AidensCode()
{
}


AidensCode::~AidensCode()
{
}

void AidensCode::run(CustomAdven & adv)
{
	//adv.setupChoice("Action", "Goto?");
	//adv.addPath(LINE, "LBL", "TEXT/STORY")

	adv.setupChoice("go into the store", "store1");
	adv.setupChoice("go into store", "store1");
	adv.setupChoice("go store", "store1");
	adv.setupChoice("go s", "store1");
	adv.setupChoice("store", "store1");
	adv.setupChoice("s", "store1");
	adv.setupChoice("enter store", "store1");

	adv.setupChoice("go into the library", "library1");
	adv.setupChoice("go into library", "library1");
	adv.setupChoice("go library", "library1");
	adv.setupChoice("go l", "library1");
	adv.setupChoice("l", "library1");
	adv.setupChoice("library", "library1");
	adv.setupChoice("enter library", "library1");
	adv.addPath(__LINE__, "start", R"(    You begin heading NORTH waving goodbye to John as you go. After some time you make it all the way around the mounta-in, John has been out of sight for some time now. You have finally dragged the wagon all the way to Odgen town, you're  afraid to look into buildings because you know whats inside. You walk down the streets that are speckled with little    bird corpses. You try not to think about it. You look up and notice some buildings, a store and a Library.)");

	adv.setupChoice("get a fiction book", "exitlibrary1");
	adv.setupChoice("get a fiction", "exitlibrary1");
	adv.setupChoice("get fiction", "exitlibrary1");
	adv.setupChoice("get a f book", "exitlibrary1");
	adv.setupChoice("get a f", "exitlibrary1");
	adv.setupChoice("get f", "exitlibrary1");
	adv.setupChoice("fiction book", "exitlibrary1");
	adv.setupChoice("f book", "exitlibrary1");
	adv.setupChoice("f", "exitlibrary1");

	adv.setupChoice("get a non-fiction book", "exitlibrary1");
	adv.setupChoice("get a non-fiction", "exitlibrary1");
	adv.setupChoice("get non-fiction", "exitlibrary1");
	adv.setupChoice("get a n book", "exitlibrary1");
	adv.setupChoice("get a n", "exitlibrary1");
	adv.setupChoice("get n", "exitlibrary1");
	adv.setupChoice("non-fiction book", "exitlibrary1");
	adv.setupChoice("n book", "exitlibrary1");
	adv.setupChoice("n", "exitlibrary1");

	adv.setupChoice("get a science-fiction", "exitlibrary1");
	adv.setupChoice("get a science-fiction", "exitlibrary1");
	adv.setupChoice("get science-fiction", "exitlibrary1");
	adv.setupChoice("get a s book", "exitlibrary1");
	adv.setupChoice("get a s", "exitlibrary1");
	adv.setupChoice("get s", "exitlibrary1");
	adv.setupChoice("science-fiction book", "exitlibrary1");
	adv.setupChoice("s book", "exitlibrary1");
	adv.setupChoice("s", "exitlibrary1");

	adv.addPath(__LINE__, "library1", R"(	You decide to go to the library and get away from the death for a minute. The walls are lined with shelves of   books, each shelf is labeled "Fiction", "Non-Fiction", "Science-Fiction".)");

	adv.setupChoice("get Drink", "exitstore1");
	adv.setupChoice("take Drink", "exitstore1");

	adv.setupChoice("Get food", "exitstore1");
	adv.setupChoice("take food", "exitstore1");
	adv.addPath(__LINE__, "store1", R"(   You decide to go to the store and get away from the death for a minute. The walls are lined with shelves of food and drinks.)");

	adv.setupChoice("poop", "end");
	adv.addPath(__LINE__, "exitlibrary1", R"(   After you exit the library you are attacked by some bandits, they yell at you for medicine. Give, fight, run.)");

	adv.setupChoice("give", "give1");
	adv.setupChoice("give med", "give1");
	adv.setupChoice("give medicine", "give1");

	adv.setupChoice("attack", "attack1");
	adv.setupChoice("attack them", "attack1");
	adv.setupChoice("attack bandit", "attack1");
	adv.setupChoice("fight", "attack1");
	adv.setupChoice("fight them", "attack1");
	adv.setupChoice("fight bandit", "attack1");

	adv.setupChoice("run", "run1");
	adv.addPath(__LINE__, "exitstore1", R"(   After you exit the store you are attacked by some bandits, they yell at you for medicine. Give, fight, run.)");

	adv.setupChoice("quit", "end");
	adv.addPath(__LINE__, "run1", R"(   You decide to run from them they noticed and started to chase you, you hide in a bush and they lose you, but you fall backward into a ravine. It's bad you broke your back for sure, it really hurts and you can’t move much, now you're without food, water, your book or anything else in the wagon. Type quit to exit.)");

	adv.setupChoice("quit", "end");
	adv.addPath(__LINE__, "attack1", R"(   You decide to attack the bandits, they have an advantage in every way and they kill you and take all your stuff. Type quit to exit.)");

	adv.setupChoice("c", "continue1");
	adv.addPath(__LINE__, "give1", R"(   You decide to give them the medicine, you tell them how you had used most of it all already, they just sighed. They said that they had been camping out here trying to get radiation medicine for a while, they’re all very sick since they don’t have a suit or anything. You tell them you'll come back for them with medicine as soon as you can. So now in the morning, you head further north for the lab John worked in before. Type c to continue.)");

	adv.setupChoice("open door", "continue2");
	adv.setupChoice("open", "continue2");
	adv.setupChoice("use door", "continue2");
	adv.setupChoice("use lever", "continue2");
	adv.addPath(__LINE__, "continue1", R"(  It took quite a while but you finally reached the base of the mountain, at the top, there was a single door with a lever flat against the door.)");

	adv.setupChoice("c", "continue3");
	adv.addPath(__LINE__, "continue2", R"(   You pull the lever to one side and the door comes loose, its big enough to bring the wagon in. Inside is a large room and some tables lining the walls in the back there was another door, behind it is the living quarters on one of the beds there was a rotting corpse, it must have been Edward. that was the best place for him. In here there was a shower, you can finally wash and take the suit off after a month. You sleep here, you’ll get what you need in the morning. Typec to continue.)");

	adv.setupChoice("save", "end");
	adv.setupChoice("suit", "end");
	adv.addPath(__LINE__, "continue3", R"(   In the main room there are green strips like the suit, you could make another suit. There is also radiation medicine you could either save, or suit.)");


}