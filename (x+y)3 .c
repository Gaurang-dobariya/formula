#include<stdio.h>

main()
{
	int x,y,formula;
	printf("enter the value of x :");
	scanf("%d",&x);
	
	printf("enter the value of Y :");
	scanf("%d",&y);
	
	formula=(x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
    printf("(x+y)3 = %d",formula);
	
}