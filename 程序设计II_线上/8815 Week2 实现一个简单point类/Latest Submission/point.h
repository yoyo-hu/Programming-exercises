#include <iostream>
using namespace std;
class point{
	public:
		double x, y;
		static int count;
		point(){
			x = 0,y = 0;
			count++;
		}
		point(double i,double j){
			x = i, y = j;
			count++;
		}
		void print(){
			cout << '(' << x << ',' << y << ')'<<endl;
		}
		~point(){
			count--;
		}
		bool judge(point&p1,point&p2){
			if(p1.x == x&&p2.x== x)
				return true;
			else if(p1.x != x&&p2.x!= x){
				double k1 = (p1.y - y) / (p1.x - x);
				double k2 = (p2.y - y) / (p2.x - x);
				if(k1==k2)
					return true;
			}
			return false;
		}
};
int point::count = 0;