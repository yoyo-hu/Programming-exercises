
class Date
{
public:
  Date(int y=0, int m=1, int d=1):year(y), month(m), day(d){}  
  static bool leapyear(int year){
    if(year%400==0) return 1;
    if(year%100==0) return 0;
    if(year%4==0) return 1;
    return 0;
  }
  int getYear() const { return year; }
  int getMonth() const { return month; }
  int getDay() const { return day; }
  int year, month, day;
  // add any member you need here  
};
int operator==( const Date& date1, const Date& date2)
{
  if(date1.year!=date2.year)
    return 0;
  if(date1.month!=date2.month)
    return 0;
  if(date1.day!=date2.day)
    return 0;
  return 1;
}
int operator!=( const Date& date1, const Date& date2)
{
  if(date1==date2.year)
    return 0;
  return 1;
}
int operator<( const Date& date1, const Date& date2)
{
  if(date1.year<date2.year)
    return 1;
  else if(date1.year>date2.year)
    return 0;
  if(date1.month<date2.month)
    return 1;
  else if(date1.month>date2.month)
    return 0;
  if(date1.day<date2.day)
    return 1;
  else 
    return 0;
}
int operator<=( const Date& date1, const Date& date2)
{
  if(date1<date2||date1==date2)
    return 1;
  return 0;
}
int operator>( const Date& date1, const Date& date2){
  if(date1<=date2)
    return 0;
  return 1;
}
int operator>=( const Date& date1, const Date& date2){
  if(date1<date2)
    return 0;
  return 1;
}