#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int total;
	scanf("%d",&total);
	int dollars,quarters,dimes,nickels,pennies;
	int tmp = total % 10 + 10*((total/10)%10);
	dollars = total / 100;
	quarters = tmp/25;
	dimes = (tmp - quarters*25)/10;
	nickels = (tmp - quarters*25 - dimes*10)/5;
	pennies = tmp - quarters*25 - dimes*10 - nickels*5;
	printf("Your amount %d consists of\n%d dollars\n%d quarters\n%d dimes\n%d nickels\n%d pennies",total,dollars,quarters,dimes,nickels,pennies);
	return 0;
}
