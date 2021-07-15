#include "compare.h"
int compare(const int a, const int b, const int c, const int d){
    if(a*0.1/b<c*0.1/d)
        return -1;
        else if(a*0.1/b==c*0.1/d)
            return 0;
            else
                return 1;
}
