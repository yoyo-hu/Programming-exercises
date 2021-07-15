#include <cstdio>
#include <iostream>

using namespace std;
const int maxn = 10500;

int gcd(int a, int b){return b ? gcd(b, a % b) : a;}

int tcs;

int main()
{
    for(scanf("%d", &tcs); tcs--;)
    {
        int a, b, c, d;
        if(scanf("%d%d%d%d", &a, &b, &c, &d) == EOF) return 0;
        int e = a * d + b * c;
        int f = b * d;
        int g = gcd(e, f);
        e /= g; f /= g;
        printf("%d %d\n", e, f);
    }
    
    
    return 0;
}