#include "main.h"
void redSmallZone7()
{   
    arm.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    runIntake(115);
    moveBasePID(500,500,1100);
    moveBase(380,70);
    delay(1300);
    moveBasePID(-250,-250,900);
    turnBase(-245,75);
    delay(700);
    moveBasePID(-1000,-1000,1200);
    turnBase(255,75);
    delay(700);
    moveBase(1100,85);
    delay(2500);
    moveBasePID(-800,-800,1300);
    turnBase(450,75);
    delay(1300);
    runIntake(0);
    moveBasePID(320,320,750);
    pidTray(2800);
    moveBasePID(-500,-500,1000);

    //moveBase(600,90);
    /*delay(2600);
    runLeftBase(50);
    runRightBase(130);
    delay(500);
    runLeftBase(-50);
    runRightBase(-130);
    delay(550);
    moveBasePID(750,750,1000);
    moveBasePID(-1000,-1000,1200);
    turnBase(515,75);
    delay(1500);
    moveBasePID(650,650,1100);
    runIntake(0);
    pidTray(2800);
    delay(480);
    moveBasePID(700,700,900);
    moveBasePID(-1100,-1100,1100);
    turnBase(465,80);
    delay(1400);
    moveBasePID(620,620,450);
    runIntake(0);
    pidTray(2700);
    moveBasePID(-500,-500,1000);
    */
}