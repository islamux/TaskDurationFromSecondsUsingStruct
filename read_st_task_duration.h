#include <iostream>

using namespace std;

// Calling Struct
#include "st_task_duration.h"

stTaskDuration ReadStTaskDuration(int secondsFromFunc){

    // instance from stTaskDuration
      stTaskDuration duration;
       int reminder = 0; 
       
      const int secondsPerDay = 60 * 60 * 24;
      const int secondsPerHour = 60 * 60;
      const int secondsPerMinut = 60;


      // Number of Days
     duration.numberOfDays = floor(secondsFromFunc / secondsPerDay); // Number of day without fractions
     reminder = secondsFromFunc % secondsPerDay;

    // Number of Hours 
    duration.numberOfHours = floor(reminder / secondsPerHour);
    reminder = reminder % secondsPerHour;

    // Number of Minutes
    duration.numberOfMinutes = floor(reminder / secondsPerMinut);
    reminder = reminder % secondsPerMinut;

    // Number of Seconds 
    duration.numberOfSeconds = reminder;

     return duration;
}
 