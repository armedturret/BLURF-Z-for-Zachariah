#include "RobertosCode.h"

#include <functional>

RobertosCode::RobertosCode()
{
}


RobertosCode::~RobertosCode()
{
}

void RobertosCode::run(CustomAdven & adv)
{	
	adv.setupChoice("go west", "forest2");
	adv.setupChoice("keep walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.setupChoice("search the forest", "forest1search");
	adv.setupChoice("search the area", "forest1search");
	adv.setupChoice("search around", "forest1search");
	adv.addPath(__LINE__, "start", "After walking for some time trailing the wagon behind you, you find your self in a desolate forest. The leaves on the trees have fallen off long ago. You see bricks on the ground. Perhaps there are supplies left somewhere around here.");
	
	adv.setupChoice("go west", "forest2");
	adv.setupChoice("keep walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.setupChoice("enter the shack", "shackInternalWithAxe");
	adv.setupChoice("go inside", "shackInternalWithAxe");
	adv.addPath(__LINE__, "forest1search", "You look about for some time leaving the cart behind and are able to locate a shack in the area. The roof has partially collapsed but is still standing.");

	
	adv.setupChoice("go outside","returnToCart");
	adv.setupChoice("pick it up", "shackWithOutAxe");
	adv.setupChoice("pick up the pickaxe", "shackWithOutAxe");
	adv.addPath(__LINE__, "shackInternalWithAxe", "You enter the shack. Around you are empty shelves cleaned out long ago. However, there is a climbing axe on the floor.");
	
	adv.setupChoice("go west", "forest2");
	adv.setupChoice("keep walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.addPath(__LINE__, "returnToCart", "Leave the shack and return to the cart. You are ready to resume your journey westward.");

	adv.setupChoice("look around", "caveLook");
	adv.setupChoice("climb out", "climbOut");
	adv.addPath(__LINE__, "shackWithOutAxe","You pick up the climbing axe and you hear a slight crumbling sound in the shack. You jump thinking that someone is following you. Could John possibly have left the valley? Before you have the chance to turn around, the ground cracks open and you fall in. You are now in a pit that's about 30 ft deep.");

	adv.setupChoice("use the climbing axe", /*"forestEscaped1"*/"end");
	adv.setupChoice("look around", "caveLook");
	adv.addPath(__LINE__, "climbOut", "The walls are too smooth and too steep to climb. Perhaps you can use some kind of tool.");

	adv.setupChoice("climb out", "climbOut");
	adv.setupChoice("enter darkness", "cave1");
	adv.addPath(__LINE__, "caveLook", "You look around the pit. The only light is from the hole above. Ahead of you is a dark opening. The light above you is slowly diminishing as it's getting late.");

	adv.setupChoice("crawl on hands and knees", "contWalkingSafe");
	adv.setupChoice("get on all fours", "contWalkingSafe");
	adv.setupChoice("crawl on all fours", "contWalkingSafe");
	adv.setupChoice("get on hands and knees", "contWalkingSafe");
	adv.setupChoice("continue walking", "contWalking");
	adv.addPath(__LINE__, "cave1", "You enter the darkness. You begin walking but very quickly all light dissapears.");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__, "contWalking", "You continue walking in the darkness. After a while, your steps begin to echo around the walls. You even start to hear running water. That's when your next step felt air. The next thing you knew, you were falling throught the darkness when you felt a something hard hit your head and it was all over.\nTIP: Try finding a safer way to walk through darkness\nType r to restart or q to quit");

	adv.setupChoice("filler", "end");
	adv.addPath(__LINE__, "contWalkingSafe", "filler");

	adv.setupChoice("go to highway", "end");
	adv.setupChoice("get closer", "end");
	adv.setupChoice("sneak around", "end");
	adv.addPath(__LINE__, "forest2", "After walking west for more time, you see a splotch of gray in the distance. You bring the cart closer with you to see what it is. You a highway with some still intact cars up and down the road.");
}
