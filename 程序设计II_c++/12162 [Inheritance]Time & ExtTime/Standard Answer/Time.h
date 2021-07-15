#ifndef Time_H
#define Time_H
#include <iostream>
using namespace std;

class Time {
public:
      Time();                                        //  default constructor
      Time(int initHrs, int initMins, int initSecs); // constructor

      void Set(int hours, int minutes, int seconds);
      void Increment();
      
      void Write() const;
      
      

private:
      int hrs;
      int mins;
      int secs;
};

#endif
