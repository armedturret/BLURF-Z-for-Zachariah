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

	adv.setupChoice("go into the library", "library1");
	adv.setupChoice("go into library", "library1");
	adv.setupChoice("go library", "library1");
	adv.setupChoice("go l", "library1");
	adv.setupChoice("l", "library1");
	adv.setupChoice("library", "library1");
	adv.addPath(__LINE__, "start", R"(    You begin heading NORTH waving goodbye to John as you go. After some time you make it all the way around the mounta-in, John has been out of sight for some time now. You have finally dragged the wagon all the way to Odgen town, you're  afraid to look into buildings because you know whats inside. You walk down the streets that are speckled with little    bird corpses. You try not to think about it. You look up and notice some buildings, a store and a Library.)");

	//adv.setupChoice("Action", "Goto?");
	//adv.setupChoice("Action", "Goto?");

	adv.setupChoice("poop", "end");
	adv.addPath(__LINE__, "library1", R"(	poop)");

	adv.setupChoice("poop", "end");
	adv.addPath(__LINE__, "store1", R"(	poop)");
}
