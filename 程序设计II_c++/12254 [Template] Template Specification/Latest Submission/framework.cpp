#include <iostream>
#include <cstring>
#include "source.h"

using namespace std ;

int main()
{
 int aInt = 1, bInt = 2 ;
 float aFloat = 1.0, bFloat = 2.0 ;
 double aDouble = 3.0, bDouble = 3.0 ;
 char aChars[5] = "haha", bChars[5] ; 
 string aStr = "lala", bStr = "lal" ;
 
 int *aIntPtr = &aInt, *bIntPtr = &bInt ;
 float *aFloatPtr = &aFloat, *bFloatPtr = &bFloat ;
 double *aDoublePtr = &aDouble, *bDoublePtr = &bDouble ;
 string *aStrPtr = &aStr, *bStrPtr = &bStr ;
 
 cout << boolalpha << cmp( aInt, bInt ) << endl ;cout << cmp( aIntPtr, bIntPtr ) << endl ;
 aInt = bInt = 4 ;
 cout << cmp( aInt, bInt ) << endl ;cout << cmp( aIntPtr, bIntPtr ) << endl ;

 cout << cmp( aFloat, bFloat ) << endl  ;cout << cmp( aFloatPtr, bFloatPtr ) << endl ;
 aFloat = bFloat = 3 ;
 cout << cmp( aFloat, bFloat ) << endl  ;cout << cmp( aFloatPtr, bFloatPtr ) << endl ;

 cout << cmp( aDouble, bDouble ) << endl ;cout << cmp( aDoublePtr, bDoublePtr ) << endl ;
 aDouble = bDouble - 1 ;
 cout << cmp( aDouble, bDouble ) << endl ;cout << cmp( aDoublePtr, bDoublePtr ) << endl ;

 cout << cmp( aStr, bStr )  << endl ; cout << cmp( aStrPtr, bStrPtr ) << endl ;
 bStr += "a" ;
 cout << cmp( aStr, bStr ) << endl ;cout << cmp( aStrPtr, bStrPtr ) << endl ;
 
 strcpy( bChars, aChars ) ;cout << cmp( aChars, bChars ) << endl ;
 strcpy( bChars, "hala" ) ;cout << cmp( aChars, bChars ) << endl ;

 return 0 ;
}