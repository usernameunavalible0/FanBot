/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       reidcraig                                                 */
/*    Created:      Wed Oct 26 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// BumperC              bumper        C               
// BumperF              bumper        F               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int speed = 1;

void bigStink()
{
  speed = speed + 1;
  Brain.Screen.print(speed);
  Brain.Screen.newLine();

  if (speed > 3){
    speed = 1;
  }

  // kinda janky solution to make it spin after you stop it but this works so whatever
  if (speed > 0)
  {
    Motor1.spin(forward);
  }
}

void lolbrohowcouldyouwatchanimeyoursodumbandstupidandastupiddegeneratefurryandidonteverwanttoseeyouagain()
{
  speed = 0;
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  Motor1.spin(forward);

while (true) {
  BumperC.released(bigStink);

  BumperF.released(lolbrohowcouldyouwatchanimeyoursodumbandstupidandastupiddegeneratefurryandidonteverwanttoseeyouagain);

  switch(speed)
  {
    case 0: { Motor1.stop(); break; }
    case 1: { Motor1.setVelocity(67, rpm); break; }
    case 2: {Motor1.setVelocity(134, rpm); break; }
    case 3: {Motor1.setVelocity(200, rpm); break; }
    default: {Motor1.setVelocity(67, rpm); break; }
    }
}

return 0;
}
