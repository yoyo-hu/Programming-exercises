#include<iostream>
#include<string>
#include <fstream>
using namespace std;
#include "source.h"
int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		string name,job,dep,major,prof;
    	int age;
		cin>>name>>age>>job>>dep>>major>>prof;
		chairman man;
		man.setname(name);
		man.setage(age);
		man.setjob(job);
		man.setdep(dep);
		man.setmajor(major);
		man.setprof(prof);
		
		cout<<"name: "<<man.getname()<<" age: "<<man.getage()<<" dep: "<<man.getdep()
			<<" job: "<<man.getjob()<<endl;
		cout<<"prof: "<<man.getprof()<<" major: "<<man.getmajor()<<endl;
	}
	return 0;
}