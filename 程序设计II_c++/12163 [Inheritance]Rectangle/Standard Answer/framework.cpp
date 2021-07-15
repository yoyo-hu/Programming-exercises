#include <iostream>
#include "source.h"
using namespace std;

int main()
{ 
	int n;
	double x,y,length,width,xmove,ymove;
	cin>>n;
	for (int i = 0;i<n;i++)
	{   
		cin>>x>>y;
		cin>>length>>width;
		Rectangle R(x,y,length,width);
		cin>>xmove>>ymove;
		R.Move(xmove,ymove);
		cout <<R.Getx()<<" "<<R.Gety()<<" "
			 <<R.Getlength()<<" "<<R.Getwidth()
		 	 <<" "<<R.Getarea()<<endl;
	}
	return 0;
}