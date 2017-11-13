#include "RobertosCode.h"

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
	adv.setupChoice("keep going", "forest2");
	adv.setupChoice("search the forest", "forest1search");
	adv.setupChoice("search around here", "forest1search");
	adv.setupChoice("search the area", "forest1search");
	adv.setupChoice("search around", "forest1search");
	adv.setupChoice("look around", "forest1search");
	adv.setupChoice("eat a brick to gain its powers", "brickWizard");
	adv.addPath(__LINE__, "start", "After walking for some time trailing the wagon behind you, you find your self in a desolate forest. The leaves on the trees have fallen off long ago. You see bricks on the ground. Perhaps you could find supplies somewhere around here.");
	
	adv.setupChoice("r", "start");
	adv.setupChoice("q", "end");
	adv.addPath(__LINE__, "brickWizard", "You start screeching \"Yimbo Yenkins\" and have become Ian. You now have brick powers. You summon bricks now and decide to build a brick fortress. You build the empire of brickmania where you rule with a brick fist. You also eat brickfast here and brinch. You send bricks to conquer every corner of the dead world and are now the ruler of all. Your national motto is \"Shut up and take my money\".\nType r to restart or q to quit");

	adv.setupChoice("go west", "forest2");
	adv.setupChoice("keep walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.setupChoice("go in", "shackInternalWithAxe");
	adv.setupChoice("go in the shack", "shackInternalWithAxe");
	adv.setupChoice("enter the shack", "shackInternalWithAxe");
	adv.setupChoice("go inside", "shackInternalWithAxe");
	adv.addPath(__LINE__, "forest1search", "You look about for some time leaving the cart behind and are able to locate a shack in the area. The roof has partially collapsed but is still standing.");

	
	adv.setupChoice("leave the shack", "returnToCart");
	adv.setupChoice("go outside","returnToCart");
	adv.setupChoice("take the climbing axes", "shackWithOutAxe");
	adv.setupChoice("take them", "shackWithOutAxe");
	adv.setupChoice("pick up the climbing axes", "shackWithOutAxe");
	adv.setupChoice("pick them up", "shackWithOutAxe");
	adv.setupChoice("pick the climbing axes up", "shackWithOutAxe");
	adv.addPath(__LINE__, "shackInternalWithAxe", "You enter the shack. Around you are empty shelves cleaned out long ago. However, there is a set of climbing axes on the floor.");
	
	adv.setupChoice("go west", "forest2");
	adv.setupChoice("keep walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.addPath(__LINE__, "returnToCart", "You leave the shack and return to the cart. You are ready to resume your journey westward.");

	adv.setupChoice("climb out", "climbOut");
	adv.setupChoice("go into dark opening", "cave1");
	adv.setupChoice("go into darkness", "cave1");
	adv.setupChoice("enter the dark opening", "cave1");
	adv.setupChoice("enter the darkness", "cave1");
	adv.setupChoice("enter dark opening", "cave1");
	adv.setupChoice("enter darkness", "cave1");
	adv.addPath(__LINE__, "shackWithOutAxe","You pick up the climbing axes and you hear a slight crumbling sound in the shack. You jump thinking that someone is following you. Could John possibly have left the valley? Before you have the chance to turn around, the ground cracks open and you fall in. You are now in a pit that's about 30 ft deep. You look around the pit. The only light is from the hole above. Ahead of you is a dark opening. The light above you is slowly diminishing as it's getting late.");

	adv.setupChoice("use climbing axes", /*"forestEscaped1"*/"end");
	adv.setupChoice("use the climbing axes", /*"forestEscaped1"*/"end");
	adv.setupChoice("cancel", "caveLook");
	adv.addPath(__LINE__, "climbOut", "The walls are too smooth and too steep to climb. Perhaps you can use some kind of tool.");

	adv.setupChoice("go into dark opening", "cave1");
	adv.setupChoice("go into darkness", "cave1");
	adv.setupChoice("enter the dark opening", "cave1");
	adv.setupChoice("enter the darkness", "cave1");
	adv.setupChoice("enter the opening", "cave1");
	adv.setupChoice("enter opening", "cave1");
	adv.setupChoice("enter dark opening", "cave1");
	adv.setupChoice("enter darkness", "cave1");
	adv.setupChoice("climb out", "climbOut");
	adv.addPath(__LINE__, "caveLook", "You look around the pit. The only light is from the hole above. Ahead of you is a dark opening. The light above you is slowly diminishing as it's getting late.");
	
	adv.setupChoice("crawl on hands and knees", "contWalkingSafe");
	adv.setupChoice("get on all fours", "contWalkingSafe");
	adv.setupChoice("crawl on all fours", "contWalkingSafe");
	adv.setupChoice("get on hands and knees", "contWalkingSafe");
	adv.setupChoice("keep walking", "contWalking");
	adv.setupChoice("continue walking", "contWalking");
	adv.setupChoice("keep going", "contWalking");
	adv.setupChoice("continue going", "contWalking");
	adv.setupChoice("go on", "contWalking");
	adv.setupChoice("go forwards", "contWalking");
	adv.setupChoice("go forward", "contWalking");
	adv.setupChoice("walk forwards", "contWalking");
	adv.setupChoice("walk forward", "contWalking");
	adv.addPath(__LINE__, "cave1", "You enter the darkness. You begin walking but very quickly all light dissapears.");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__, "contWalking", "You continue walking in the darkness. After a while, your steps begin to echo around the walls. You even start to hear running water. That's when your next step feels air. The next thing you know, you are falling through the darkness when you feel something hard hit your head and it is all over.\nTIP: Try finding a safer way to walk through darkness\nType r to restart or q to quit");

	adv.setupChoice("go left", "end");
	adv.setupChoice("go right", "falseHope");
	adv.setupChoice("use climbing axe", /*"climbDownSafe"*/"end");
	adv.setupChoice("climb down using climbing axe", /*"climbDownSafe"*/"end");
	adv.setupChoice("climb down", "fallDeath2");
	adv.addPath(__LINE__, "contWalkingSafe", "You get on your hands and knees not knowing what's ahead. You start crawling in a slow manner while holding the climbing axes in each hand. This process continues for what feels like forever when you start hearing a stream. Suddenly, one hand feels air and you quikly retract it. There must be a stream below you in some chasm. You feel around and find an opening to youre left as well as your right.");

	adv.setupChoice("break the wall with climbing axe", "breakWall");
	adv.setupChoice("break the wall with a climbing axe", "breakWall");
	adv.setupChoice("break the wall with the climbing axes", "breakWall");
	adv.setupChoice("break the wall with climbing axes", "breakWall");
	adv.setupChoice("break the wall", "attemptBreak""end");
	adv.addPath(__LINE__, "falseHope","You decide to go right along the ledge. You crawl on your hands and knees until you find a tunnel entrance and the rushing water sound starts fading behind you. You reach a turn when you beleive you see something shining up ahead. You shake with joy as you see the light ahead. You get up and starting running down the tunnel as your vision becomes clearer. Your eyes didn't deceive you as there is a rock wall with cracks of light coming through.");

	adv.setupChoice("cancel", "cancelBreak");
	adv.setupChoice("use climbing axe", "breakWall");
	adv.addPath(__LINE__, "attemptBreak", "You attempt to kick the wall to break through but is too solid to break through with your foot.");

	adv.setupChoice("break the wall with climbing axe", "breakWall");
	adv.setupChoice("break the wall with a climbing axe", "breakWall");
	adv.setupChoice("break the wall with the climbing axes", "breakWall");
	adv.setupChoice("break the wall with climbing axes", "breakWall");
	adv.setupChoice("break the wall", "attemptBreak""end");
	adv.addPath(__LINE__, "cancelBreak", "You are standing in front of wall with cracks of light seeping through it.");
	
	adv.setupChoice("exit cave", "backToTheStart");
	adv.setupChoice("exit hole", "backToTheStart");
	adv.setupChoice("exit through hole", "backToTheStart");
	adv.setupChoice("enter hole", "backToTheStart");
	adv.setupChoice("go through hole", "backToTheStart");
	adv.addPath(__LINE__, "breakWall", "You smash the climbing axe through the wall and make a hole the size of a baseball. You continue the process until there is a large enough hole to crawl through with the suit.");

	adv.setupChoice("filler", "end");
	adv.addPath(__LINE__, "backToTheStart", "Filler Text");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__,"fallDeath2","You put your feet over the ledge and hang on to it as you drop your body down. You reach out in the darkness to find another handhold when you slip and realize that this may not have been such a bright idea. You loose your grip and fall into the blackness below.\nTIP: Is there some equipment you can use to safely go down?");

	adv.setupChoice("search the cars", "end");
	adv.addPath(__LINE__, "forest2", "After walking west for more time, you see a splotch of gray in the distance. You bring the cart closer with you to see what it is. You a highway with some still intact cars up and down the road.");
}
