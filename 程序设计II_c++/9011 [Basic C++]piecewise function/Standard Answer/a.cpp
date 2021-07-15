#include <cstdio>
#include <cmath>

int main()
{
    double num; scanf("%lf", &num);
    
    double ans;
    if(num < -1) ans = num + 1;
    else if(num >= 1) ans = log(num) / log(10);
    else ans = fabs(num);
    
    printf("%.2lf\n", ans);
    return 0;
}
