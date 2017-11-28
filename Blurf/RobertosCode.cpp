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
	adv.setupChoice("continue walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.setupChoice("keep going", "forest2");
	adv.setupChoice("search the forest", "forest1search");
	adv.setupChoice("search around here", "forest1search");
	adv.setupChoice("search the area", "forest1search");
	adv.setupChoice("search around", "forest1search");
	adv.setupChoice("look around", "forest1search");
	adv.setupChoice("search bricks", "brickLook1");
	adv.setupChoice("search the bricks", "brickLook1");
	adv.setupChoice("look at the bricks", "brickLook1");
	adv.setupChoice("look at bricks", "brickLook1");
	adv.setupChoice("examine the bricks", "brickLook1");
	adv.setupChoice("examine bricks", "brickLook1");
	adv.setupChoice("eat a brick to gain its powers", "brickWizard");
	adv.addPath(__LINE__, "start", "You decide to follow the highway west. You remember from the map of the county that there may be a valley there. After walking for some time trailing the wagon behind you, the road ends abruptly. The road turns left but you need to continue forwards. You don't remember this on the map but then again you haven't seen it in years. You enter the desolate forest ahead of you. The leaves on the trees have fallen off long ago. After walking for some time, you see bricks on the ground. Perhaps you could find supplies somewhere around here or continue walking.");
	
	adv.setupChoice("eat a brick to gain its powers", "brickWizard");
	adv.setupChoice("go west", "forest2");
	adv.setupChoice("keep walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.setupChoice("keep going", "forest2");
	adv.setupChoice("search the forest", "forest1search");
	adv.setupChoice("search around here", "forest1search");
	adv.setupChoice("search the area", "forest1search");
	adv.setupChoice("search around", "forest1search");
	adv.setupChoice("look around", "forest1search");
	adv.addPath(__LINE__,"brickLook1","You look a the bricks and realize, they are just bricks. Perhaps you should LOOK AROUND or KEEP GOING.");

	adv.setupChoice("r", "start");
	adv.setupChoice("q", "end");
	adv.addPath(__LINE__, "brickWizard", "You start screeching \"Yimbo Yenkins\" and have become Ian. You now have brick powers. You summon bricks now and decide to build a brick fortress. You build the empire of brickmania where you rule with a brick fist. You also eat brickfast here and brinch. You send bricks to conquer every corner of the dead world and are now the ruler of all. Your national motto is \"Shut up and take my money\".\nType r to restart or q to quit");

	adv.setupChoice("go west", "forest2");
	adv.setupChoice("keep walking", "forest2");
	adv.setupChoice("continue west", "forest2");
	adv.setupChoice("go in", "shackInternalWithAxe");
	adv.setupChoice("go in shack", "shackInternalWithAxe");
	adv.setupChoice("enter shack", "shackInternalWithAxe");
	adv.setupChoice("go in the shack", "shackInternalWithAxe");
	adv.setupChoice("enter the shack", "shackInternalWithAxe");
	adv.setupChoice("go inside", "shackInternalWithAxe");
	adv.addPath(__LINE__, "forest1search", "You look about for some time leaving the cart behind and are able to locate a shack in the area. The roof has partially collapsed but is still standing.");

	
	adv.setupChoice("leave the shack", "returnToCart");
	adv.setupChoice("go outside","returnToCart");
	adv.setupChoice("take climbing axes", "shackWithOutAxe");
	adv.setupChoice("pick up climbing axes", "shackWithOutAxe");
	adv.setupChoice("pick climbing axes up", "shackWithOutAxe");
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

	adv.setupChoice("climb out using climbing axes", "forestEscaped1");
	adv.setupChoice("climb out using the climbing axes", "forestEscaped1");
	adv.setupChoice("climb out", "climbOut");
	adv.setupChoice("climb up walls", "climbOut");
	adv.setupChoice("climb up wall", "climbOut");
	adv.setupChoice("climb up the walls", "climbOut");
	adv.setupChoice("climb up the wall", "climbOut");
	adv.setupChoice("climb up from the pit", "climbOut");
	adv.setupChoice("climb out of pit", "climbOut");
	adv.setupChoice("climb out of the pit", "climbOut");
	adv.setupChoice("go into dark opening", "cave1");
	adv.setupChoice("go into darkness", "cave1");
	adv.setupChoice("enter the dark opening", "cave1");
	adv.setupChoice("enter the darkness", "cave1");
	adv.setupChoice("enter dark opening", "cave1");
	adv.setupChoice("enter darkness", "cave1");
	adv.addPath(__LINE__, "shackWithOutAxe","You pick up the climbing axes and you hear a slight crumbling sound in the shack. You jump thinking that someone is following you. Could John possibly have left the valley? Before you have the chance to turn around, the ground cracks open and you fall in. You are now in a pit that's about 30 ft deep. You look around the pit. The only light is from the hole above. Ahead of you is a dark opening in the pit wall.");

	adv.setupChoice("use climbing axes", "forestEscaped1");
	adv.setupChoice("use the climbing axes", "forestEscaped1");
	adv.setupChoice("cancel", "caveLook");
	adv.addPath(__LINE__, "climbOut", "The walls are too smooth and too steep to climb. Perhaps you can use some kind of tool.");

	adv.setupChoice("climb out using climbing axes", "forestEscaped1");
	adv.setupChoice("climb out using the climbing axes", "forestEscaped1");
	adv.setupChoice("climb out", "climbOut");
	adv.setupChoice("climb up walls", "climbOut");
	adv.setupChoice("climb up wall", "climbOut");
	adv.setupChoice("climb up the walls", "climbOut");
	adv.setupChoice("climb up the wall", "climbOut");
	adv.setupChoice("climb up from the pit", "climbOut");
	adv.setupChoice("climb out of pit", "climbOut");
	adv.setupChoice("climb out of the pit", "climbOut");
	adv.setupChoice("go into dark opening", "cave1");
	adv.setupChoice("go into darkness", "cave1");
	adv.setupChoice("enter the dark opening", "cave1");
	adv.setupChoice("enter the darkness", "cave1");
	adv.setupChoice("enter dark opening", "cave1");
	adv.setupChoice("enter darkness", "cave1");
	adv.addPath(__LINE__, "forestEscaped1", "You hit the wall with climbing axes and it digs in. You repeat the process until you reach the top. You are about to exit the pit when your next hit with climbing axe slips and you fall back into the pit. Ahead of you is a dark opening in the pit wall.");

	adv.setupChoice("climb out using climbing axes", "forestEscaped1");
	adv.setupChoice("climb out using the climbing axes", "forestEscaped1");
	adv.setupChoice("climb out", "climbOut");
	adv.setupChoice("climb up walls", "climbOut");
	adv.setupChoice("climb up wall", "climbOut");
	adv.setupChoice("climb up the walls", "climbOut");
	adv.setupChoice("climb up the wall", "climbOut");
	adv.setupChoice("climb up from the pit", "climbOut");
	adv.setupChoice("climb out of pit", "climbOut");
	adv.setupChoice("climb out of the pit", "climbOut");
	adv.setupChoice("go into dark opening", "cave1");
	adv.setupChoice("go into darkness", "cave1");
	adv.setupChoice("enter the dark opening", "cave1");
	adv.setupChoice("enter the darkness", "cave1");
	adv.setupChoice("enter dark opening", "cave1");
	adv.setupChoice("enter darkness", "cave1");
	adv.addPath(__LINE__, "caveLook", "You look around the pit. The only light is from the hole above. Ahead of you is a dark opening. The light above you is slowly diminishing as it's getting late.");
	
	adv.setupChoice("start crawling", "contWalkingSafe");
	adv.setupChoice("crawl", "contWalkingSafe");
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
	adv.addPath(__LINE__, "contWalking", "You continue walking in the darkness. After a while, your steps begin to echo around the walls. You even start to hear running water. That's when your next step feels empty air. The next thing you know, you are falling through the darkness when you feel something hard hit your head and it is all over.\nTIP: Try finding a safer way to walk through darkness\nType r to restart or q to quit");

	adv.setupChoice("enter the opening on the left", "leftGoWalkyDo");
	adv.setupChoice("enter left opening", "leftGoWalkyDo");
	adv.setupChoice("enter the left opening", "leftGoWalkyDo");
	adv.setupChoice("go left", "leftGoWalkyDo");
	adv.setupChoice("go right", "falseHope");
	adv.setupChoice("enter the opening on the right", "falseHope");
	adv.setupChoice("enter right opening", "falseHope");
	adv.setupChoice("enter the right opening", "falseHope");
	adv.setupChoice("use climbing axe", "climbDownSafe");
	adv.setupChoice("climb down using climbing axe", "climbDownSafe");
	adv.setupChoice("climb down", "fallDeath2");
	adv.addPath(__LINE__, "contWalkingSafe", "You get on your hands and knees not knowing what\'s ahead. You start crawling in a slow manner while holding the climbing axes in each hand. This process continues for what feels like forever when you start hearing a stream. Suddenly, one hand feels air and you quikly retract it. There must be a stream below you in some chasm. You feel around and find an opening to your left as well as your right.");
	
	adv.setupChoice("cancel", "ledgePlace");
	adv.setupChoice("return to ledge", "ledgePlace");
	adv.setupChoice("go back to ledge", "ledgePlace");
	adv.setupChoice("go back", "ledgePlace");
	adv.addPath(__LINE__, "leftGoWalkyDo", "You start crawling to your left when your hand bumps into a wall. It is clear that this is a dead end. You feel like there are grooves etched into the walls. They spell \"Budget Cuts\".");

	adv.setupChoice("go left", "leftGoWalkyDo");
	adv.setupChoice("go right", "falseHope");
	adv.setupChoice("use climbing axe", "climbDownSafe");
	adv.setupChoice("climb down using climbing axe", "climbDownSafe");
	adv.setupChoice("climb down", "fallDeath2");
	adv.addPath(__LINE__, "ledgePlace", "You are once again at the chasm.");


	adv.setupChoice("let go of the climbing axe", "waterDrop");
	adv.setupChoice("let go of climbing axe", "waterDrop");
	adv.addPath(__LINE__, "climbDownSafe", "You swing the climbing axe into the ledge below you. It takes a grip and you slowly slide your body over the ledge. You swing the other axe and it pierces the ledge. Slowly but surely, you make it to the bottom of the chasm. The rushing water progressively gets louder as you make your way down. You proceed to put your foot down another step when it hits water. You have reached the bottom of the chasm and feel the water moving. The depth of the water is unknown. You are still holding onto a climbing axe.");

	adv.setupChoice("stand up", "bedFail");
	adv.setupChoice("get up", "bedFail");
	adv.setupChoice("get out of bed", "bedFail");
	adv.setupChoice("talk to her", "talk");
	adv.setupChoice("talk to woman", "talk");
	adv.addPath(__LINE__, "waterDrop", "You let go of the climbing axe and to your surprise land on your feet. The water turns out to only be a couple of inches deep. You proceed to take a step when suddenly your foot slips and you fall into the water. The water starts carrying you away with a strong current. Any attempt to get back up ends in failure. Suddenly, your head knocks into something hard to and you are knocked out. You begin to hear a ringing noise and blinding light hits your eyes. Wait, light? You begin to adjust to light levels and find yourself on a bed in a room. The radiation suit is gone. To your right is a woman sitting in a chair looking at you.");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__, "talk", "You look at the person sitting in the chair next to you and ask \"Where am I?\" The person looks at you and replies with \"You\'re in the valley of course. This place survived the fallout when the bombs hit and a large group of us were lucky enough to be here. We have a farm and everything we need to survive here. It\'s a miracle that you survived out there. That must be one special suit you had.\" You then ask how you got there. \"We found you unconscious floating in the radioactive river. Some of the guys pulled you out using some long sticks and now here you are.\" You look around the room and notice a window. Outside is the green of trees. Your journey is over.\nType r to restart or q to quit");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__, "bedFail", "You attempt to get out of bed but you can't get your arms to support yourself. The person sitting next to you notices this. \"You all right?\" they say. You look at them and nod. \"We found you floating in the radioactive river right near the wall. We used a long stick to pull you out and took off that suit from you. It's a miracle you survived out there. Don't worry your safe here now.\" You lie back down and then notice the window and you can't believe your eyes when you see the green of trees from plants. Your journey is over.\nType r to restart or q to quit");

	adv.setupChoice("break the wall with climbing axe", "breakWall");
	adv.setupChoice("break the wall with a climbing axe", "breakWall");
	adv.setupChoice("break the wall with the climbing axes", "breakWall");
	adv.setupChoice("break the wall with climbing axes", "breakWall");
	adv.setupChoice("break the wall", "attemptBreak");
	adv.addPath(__LINE__, "falseHope","You decide to go right along the ledge. You crawl on your hands and knees until you find a tunnel entrance and the rushing water sound starts fading behind you. You reach a turn when you believe you see something shining up ahead. You shake with joy as you see the light ahead. You get up and starting running down the tunnel as your vision becomes clearer. Your eyes didn't deceive you as there is a rock wall with cracks of light coming through.");

	adv.setupChoice("cancel", "cancelBreak");
	adv.setupChoice("use climbing axe", "breakWall");
	adv.addPath(__LINE__, "attemptBreak", "You attempt to kick the wall to break through but is too solid to break through with your foot.");

	adv.setupChoice("break the wall with climbing axe", "breakWall");
	adv.setupChoice("break the wall with a climbing axe", "breakWall");
	adv.setupChoice("break the wall with the climbing axes", "breakWall");
	adv.setupChoice("break the wall with climbing axes", "breakWall");
	adv.setupChoice("break the wall", "attemptBreak");
	adv.addPath(__LINE__, "cancelBreak", "You are standing in front of wall with cracks of light seeping through it.");
	
	adv.setupChoice("exit cave", "backToTheStart");
	adv.setupChoice("exit hole", "backToTheStart");
	adv.setupChoice("climb through", "backToTheStart");
	adv.setupChoice("climb through hole", "backToTheStart");
	adv.setupChoice("exit through hole", "backToTheStart");
	adv.setupChoice("enter hole", "backToTheStart");
	adv.setupChoice("go through hole", "backToTheStart");
	adv.addPath(__LINE__, "breakWall", "You smash the climbing axe through the wall and make a hole the size of a baseball. You continue the process until there is a large enough hole to crawl through with the suit.");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__, "backToTheStart", "You climb through the hole but luckily don't have to squint at the sun thanks to the filters on the suit. You look around you and see that you are at the entrance of a small cave. You take a couple steps out of it and stroll down a slope. You see behind some trees a house and upon your investigation realize where you are with horror. You have somehow made your way back to your home valley. You turn to run away when you feel a sharp pain in your right knee and fall down. You try to get up but you can't as there is a bullet in your knee. John comes out the front door of the house and smiles as he picks you up and takes you inside.\nTIP: Search for another path through the caves.\nType r to restart or q to quit");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__,"fallDeath2","You put your feet over the ledge and hang on to it as you drop your body down. You reach out in the darkness to find another handhold when you slip and realize that this may not have been such a bright idea. You lose your grip and fall into the blackness below.\nTIP: Is there some equipment you can use to safely go down?\nType r to restart or q to quit");

	adv.setupChoice("go west", "valleyThing");
	adv.setupChoice("keep walking", "valleyThing");
	adv.setupChoice("continue walking", "valleyThing");
	adv.setupChoice("continue west", "valleyThing");
	adv.setupChoice("keep going", "valleyThing");
	adv.setupChoice("continue walking", "valleyThing");
	adv.setupChoice("go to bunker", "bunker");
	adv.setupChoice("walk to bunker", "bunker");
	adv.setupChoice("go bunker", "bunker");
	adv.setupChoice("walk bunker", "bunker");
	adv.addPath(__LINE__, "forest2", "After walking west for more time, you see a splotch of gray in the distance. You bring the cart closer with you to see what it is. You find out you have reached the highway. In the distance you see a bunker on the side of the road and an long stretch of highway.");

	adv.setupChoice("go west", "valleyThing");
	adv.setupChoice("keep walking", "valleyThing");
	adv.setupChoice("continue walking", "valleyThing");
	adv.setupChoice("continue west", "valleyThing");
	adv.setupChoice("keep going", "valleyThing");
	adv.setupChoice("continue walking", "valleyThing");
	adv.addPath(__LINE__,"bunker","You walk to the bunker. At the door you almost scream when you see the corpses lying in the doorway. The door is open and you walk around the mound and enter. Inside you see what used to be gaurds sitting in chairs facing the door. The guns lying next to them tell the entire story. You quickly leave the place not wanting to be reminded of the horrors that occured there.");

	adv.setupChoice("q", "end");
	adv.setupChoice("r", "start");
	adv.addPath(__LINE__, "valleyThing", "You continue west along the highway avoiding looking at whatever cars you pass fearing to see the corpses inside. After about an hour or so, you see green. At first, you believe its a trick of the eye but as you get closer you realize it is really there; Green trees on the edge of a valley. You pull the cart behind you excitedly as you arrive filled with hope to the valley. You climb over the edge to see a town with live people walking about. You have finally found a safe place to live.\nType r to restart or q to quit");
}