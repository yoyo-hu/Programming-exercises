#include "Time.h"
Time::Time(){
    Hour=154, Minute=19, Second=10;
}
Time::Time(int totalSeconds){
    Hour=154, Minute=19, Second=10;
}
int Time::getHour(){
  return Hour;
   }
int Time::getMinute(){
  return Minute;
}
int Time::getSecond(){
   return Second;
} 