# [Inheritance]Time & ExtTime

## description
```
需要实现的是一下两个类，time作为父类，ExtTime作为子类，以下是两个类的声明，你需要做的是，实现这两个类
class  Time {						
public :
			 Time ( ) ; 	   //  default constructor
       Time ( int  initHrs, int  initMins,  int  initSecs ) ;  // constructor 
      
       void  Set ( int  hours , int  minutes , int  seconds ) ;
       void  Increment ( ) ;
			 
       void  Write ( )  const ;
       

private :				
       int hrs ;           
       int mins ;          
       int	 secs ;
} 
class  ExtTime  :  public  Time {	// Time is the base class
public :
        ExtTime ( int  initHrs ,  int  initMins ,  int  initSecs ,  ZoneType    initZone ) ;      // constructor
        ExtTime ( ) ; 			             // default constructor
        void Set ( int  hours,  int  minutes,  int   seconds ,  ZoneType   timeZone ) ;	
				
        void Write ( )  const ;
        
private :				
	ZoneType  zone ; 	//  added data member
} ;

```
```
输出格式为：
time1: 05:30:00 CDT
time2: 00:00:00 EST
New time2: 23:59:55 PST
Incrementing time2:
23:59:55 PST
23:59:56 PST
23:59:57 PST
23:59:58 PST
23:59:59 PST
00:00:00 PST
00:00:01 PST
00:00:02 PST
00:00:03 PST
00:00:04 PST
time3: 01:02:03

03:04:05

```