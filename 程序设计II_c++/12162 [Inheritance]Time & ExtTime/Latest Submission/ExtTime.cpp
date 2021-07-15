#include <iomanip>
#include "ExtTime.h"
#include "Time.h"
std::string s[10] = {"EST", "CST", "MST", "PST", "EDT", "CDT", "MDT", "PDT"};
ExtTime::ExtTime ( int  initHrs ,  int  initMins ,  int  initSecs ,ZoneType  initZone ): Time(initHrs,initMins,initSecs),zone(initZone){}      // constructor
ExtTime::ExtTime ( ) {
	zone=EST;
} 			             // default constructor
void ExtTime::Set ( int  hours,  int  minutes,  int   seconds ,ZoneType   timeZone ){
  Time::Set(hours, minutes, seconds);
  zone = timeZone;
}
void ExtTime::Write ( )  const {
  Time::Write();
  cout <<' '<<s[zone];
};