#include "aidensclass.h"



aidensclass::aidensclass()
{
}


aidensclass::~aidensclass()
{
}

void aidensclass::run(CustomAdven & adv)
{
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
