#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:      squirrel
//  action 1:  hibernates
squirrel.hibernate();
//  action 2:  gathers nuts
squirrel.gatherNuts();
//  action 3:  runs away
squirrel.runsAway();

//  2)
//  Noun:      cup
//  action 1:  abides
cup.abide();
//  action 2:  shatters
cup.shatter();
//  action 3:  conveys liquid
cup.conveyLiquid();

//  3)
//  Noun:      krill
//  action 1:  drifts
krill.drift();
//  action 2:  provides nutrients
krill.provideNutrients();
//  action 3:  swim
krill.swim();

//  4)
//  Noun:      mosquito
//  action 1:  fly
mosquito.fly();
//  action 2:  bite
mosquito.bite();
//  action 3:  spawn
mosquito.spawn();

//  5)
//  Noun:      SpiderMan
//  action 1:  swing
spiderMan.swing();
//  action 2:  quip
spiderMan.quip();
//  action 3:  punch a thug
spiderMan.punchThug();

//  6)
//  Noun:      Seth Rollins
//  action 1:  Shooting Star Press
rollins.shootingStarPress();
//  action 2:  Curb Stomp
rollins.curbStomp();
//  action 3:  Pedigree
rollins.pedigree();

//  7)
//  Noun:      Dean Ambrose
//  action 1:  Dirty Deeds
ambrose.dirtyDeeds();
//  action 2:  throw 12-20 chairs
ambrose.rainChairs();
//  action 3:  Thesz press
ambrose.theszPress();

//  8)
//  Noun:      Roman Reigns
//  action 1:  superman punch
reigns.supermanPunch();
//  action 2:  triple powerbomb
reigns.triplePoweromb();
//  action 3:  headbutt
reigns.heabutt();

//  9)
//  Noun:      CM Punk
//  action 1:  Go to Sleep
punk.goToSleep();
//  action 2:  Anaconda Vice
punk.anacondaVice();
//  action 3:  sit
punk.sit();

//  10)
//  Noun:      Bray Wyatt
//  action 1:  Sister Abigail
wyatt.sisterAbigail();
//  action 2:  creepy dance
wyatt.creepyDance();
//  action 3:  side slam
wyatt.sideSlam();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
