#include <iostream>
#include <math.h>
using namespace std;

// Reading
//! #include "st_task_duration.h" not included here but inside read_st_duration.h
#include "read_number_positive_int.h"

// Calculations
#include "read_st_task_duration.h"

// Printing 
#include "print_number_int_with_double_msg.h"
#include "print_stars.h"
#include "print_result.h"

/*
    * Read Times Duration in Seconds  
            * seconds  ==> days , hours, minutes, seconds 
            * ex: 193,535
            *  output ==> 2:5:45:35
    
    /*     secondsInDay   =60*60*24
            secondsToDays =  floor(secondsFromUser /  secondsInDay) //? floor to use number without fractions 
            reminder = secondsFromUser % secondsInDay  //? mode to use it in secondsToHours                                                                        
*/

int main(){
    // Reading 
    int totalSeconds = ReadNumberPositiveInt("Enter Total Seconds: ");
    stTaskDuration duration =  ReadStTaskDuration(totalSeconds);
    
    // Days
    PrintNumberIntWithDoubleMsg("Days = ", duration.numberOfDays, ".");
    
    // Hours 
    PrintNumberIntWithDoubleMsg("Hours = ", duration.numberOfHours, ".");

   // Minutes
    PrintNumberIntWithDoubleMsg("Minutes = ", duration.numberOfMinutes, ".");
   
   // Seconds
    PrintNumberIntWithDoubleMsg("Seconds = ", duration.numberOfSeconds, ".");

    // Decoration 
    PrintStars("Write a stars.");

    // Print Result 
    PrintResult(duration.numberOfDays, duration.numberOfHours, duration.numberOfMinutes, duration.numberOfSeconds);
    

    return 0;
}