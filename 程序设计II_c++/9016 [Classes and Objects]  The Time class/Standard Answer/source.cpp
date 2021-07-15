#include <iostream>
#include "Time.h"
using namespace std;
Time::Time(){
        Hour = 0;
        Minute = 0;
        Second = 0;
    }
Time::Time(int totalSeconds){
        Hour = totalSeconds / 3600;
        totalSeconds = totalSeconds % 3600;
        Minute = totalSeconds / 60;
        Second = totalSeconds % 60;  
    }
int Time::getHour() const{
        return Hour;
    }
int Time::getMinute() const{
        return Minute;
    }
int Time::getSecond() const{
        return Second;
    }                                 
