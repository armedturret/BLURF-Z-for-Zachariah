#include "RobertosCode.h"



RobertosCode::RobertosCode()
{
}


RobertosCode::~RobertosCode()
{
}

void RobertosCode::run(CustomAdven & adv)
{
	adv.setupChoice("search", "forest1search");
	adv.setupChoice("search the forest", "forest1search");
	adv.setupChoice("search the area", "forest1search");
	adv.setupChoice("search around", "forest1search");
	adv.addPath(__LINE__, "start", "After walking for some time, you find your self in a desolate forest. The leaves on the trees have fallen off long ago.");

	adv.setupChoice("go inside", "shackInternalWithAxe");
	adv.addPath(__LINE__, "forest1search", "You look about for some time and are able to locate a shack in the area. The roof has partially collapsed but is still standing");

}
