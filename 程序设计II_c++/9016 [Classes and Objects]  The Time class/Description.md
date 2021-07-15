# [Classes and Objects]  The Time class

# Description
Design a class name Time. The class contains:

Data field hour, minute, and second that represent a time.

A no-arg constructor that creates a Time object for the current time. (The data fields value will represent the current time.)

A constructor that constructs a Time object with a specified elapsetime since the middle of night, Jan 1, 1970 in seconds. (The data fields value will represent the current time.)

Three get functions from the data fields hour, minute, and second, respectively.

class Time

{

  public:
   
    Time();
       
    Time(int totalSeconds);
       
    int getHour() const;
       
    int getMinute() const;
       
    int getSecond() const;
       
};
# Hint
只提交Time类实现，不要提交main()函数。
