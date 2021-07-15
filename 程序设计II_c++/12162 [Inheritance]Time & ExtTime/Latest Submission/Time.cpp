#include <iomanip>
#include "ExtTime.h" 
#include "Time.h"
void Time::Set(int hours, int minutes, int seconds){
  hrs = hours;
  mins = minutes;
  secs = seconds;
}
void Time::Increment(){
  if(secs<59){
    secs++;
  }
  else{
    secs = 0;
    if(mins<59)
      mins++;
    else{
      mins = 0;
      hrs++;
    }
    if(hrs>23){
      hrs = 0;
    }
  }
}
void Time::Write() const{
  cout << setw(2) << setfill('0') << hrs << ':';
  cout << setw(2) << setfill('0') << mins << ':';
  cout << setw(2) << setfill('0') << secs;
}
Time::Time(int initHrs, int initMins, int initSecs):hrs(initHrs),mins(initMins),secs(initSecs){} // constructor
Time::Time() {
	hrs = 0;
	mins = 0;
	secs = 0;
}