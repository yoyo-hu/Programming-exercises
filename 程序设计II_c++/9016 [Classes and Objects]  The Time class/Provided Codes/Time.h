#ifndef TIME_H_
#define TIME_H_

class Time{
    int Hour, Minute, Second;
    public:
        Time();
        Time(int totalSeconds);
        int getHour() const;
        int getMinute()const;
        int getSecond()const; 
    };
#endif