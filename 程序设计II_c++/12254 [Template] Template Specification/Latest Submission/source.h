#include <string.h>
using namespace std ;
template<class T>
bool cmp(T a, T b)
{
	return (a==b);
}
template<class U>
bool cmp(U * a, U *b){   
	return *a==*b;
}
template<>
bool cmp<char>(char * a, char *b)
{
	if(strcmp(a, b)==0)
        return 1;
    return 0;
}