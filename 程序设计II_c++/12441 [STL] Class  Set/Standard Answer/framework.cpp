#include <iostream>
#include <string.h>
#include "source.h"

using namespace std ;

//test operator + and operator - and intersection
void test1()
{
	Set<int> s1( 10 ), s2( 10 ), s_plus, s_minus, s_intersection ;
	
	s1.insert( 1 ) ;
	s1.insert( 2 ) ;
	s1.insert( 2 ) ;
	s1.insert( 4 ) ;
	cout << "Items in s1 are : " ;
	s1.print() ;
	
	s2.insert( 3 ) ;
	s2.insert( 3 ) ;
	s2.insert( 1 ) ;
	s2.insert( 2 ) ;
	cout << "Items in s2 are: " ;
	s2.print() ;
	
	s_plus = s1 + s2 ;
	cout << "Items in s_plus are: " ;
	s_plus.print() ;
	
	s_minus = s1 - s2 ;
	cout << "Items in s_minus are: " ;
	s_minus.print() ;
	
	s_intersection = s1 - ( s1 - s2 ) ;
	cout << "Items in s_intersection are: " ;
	s_intersection.print() ;
}

void test2()
{
	Set<double> s1( 100 ), s2( 100 ), s_plus, s_minus, s_intersection ;
	
	
	for ( int i = 0; i < s1.getMaxSize(); i++ )
	{
		s1.insert( i % 17 ) ;
	}
	cout << "Items in s1 are : " ;
	s1.print() ;
	for ( int i = 0; i < s2.getMaxSize(); i++ )
	{
		s2.insert( i % 15 ) ;
	}
	cout << "Items in s2 are: " ;
	s2.print() ;
	
	s_plus = s1 + s2 ;
	cout << "Items in s_plus are: " ;
	s_plus.print() ;
	
	s_minus = s1 - s2 ;
	cout << "Items in s_minus are: " ;
	s_minus.print() ;
	
	s_intersection = s1 - ( s1 - s2 ) ;
	cout << "Items in s_intersection are: " ;
	s_intersection.print() ;
}

void test3()
{
	Set<char> s1( 1000 ), s2( 1000 ), s_plus, s_minus, s_intersection ;
	const char str1[] = "adsfasdfasdfasdfdshfhasdfashjglcnvyerwqjtoiruetwertbnsdfosiftgwertiu324u54owert" ;
	const char str2[] = "adsfhahdfuqwernfqwjerfqwhtfihvagiutewrfbnsduasdfqwerqwgb ahb.,p[phvbfgiopsudfgsdafjfas" ;
	
	for ( int i = 0; i < strlen( str1 ); i++ )
	{
		s1.insert( str1[i] ) ;
	}
	cout << "Items in s1 are : " ;
	s1.print() ;
	for ( int i = 0; i < strlen( str2 ); i++ )
	{
		s2.insert( str2[i] ) ;
	}
	cout << "Items in s2 are: " ;
	s2.print() ;
	
		s_plus = s1 + s2 ;
	cout << "Items in s_plus are: " ;
	s_plus.print() ;
	
	s_minus = s1 - s2 ;
	cout << "Items in s_minus are: " ;
	s_minus.print() ;
	
	s_intersection = s1 - ( s1 - s2 ) ;
	cout << "Items in s_intersection are: " ;
	s_intersection.print() ;
}

int main()
{
	test1() ;
	test2() ;
	test3() ;
	return 0 ;
}