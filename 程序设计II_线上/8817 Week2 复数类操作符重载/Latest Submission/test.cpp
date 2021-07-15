#include <vector>
#include <numeric>
#include <iostream>
#include<cstdlib>
#include "COMPLEX.h"
using namespace std;

int main()
{
    COMPLEX c1(1, 2); 
    COMPLEX c2(2);    
    COMPLEX c3(c1);   

    c3.print();        
    c1 = c1 + c2 + c3; 
    c2 = -c3;          
    c3 = c2 - c1;      
    c3.print();        

    COMPLEX temp= c3++;
    temp.print();
    c3.print();

    temp=c3--;
    temp.print();
    c3.print();

    temp=--c3;
    temp.print();
    c3.print();

    temp=++c3;
    temp.print();
    c3.print();   
   


    return 0;
}

