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

	adv.setupChoice("Get food", "exitstore1");
	adv.addPath(__LINE__, "store1", R"(   You decide to go to the store and get away from the death for a minute. The walls are lined with shelves of food and drinks.)");

	adv.setupChoice("poop", "end");
	adv.addPath(__LINE__, "exitlibrary1", R"(Poop)");

	adv.setupChoice("poop", "end");
	adv.addPath(__LINE__, "exitstore1", R"(Poop)");
}