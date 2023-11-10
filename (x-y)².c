#include<stdio.h>

main()
{
	int x,y,formula;
	printf("enter the value of x :");
	scanf("%d",&x);
	
	printf("enter the value of Y :");
	scanf("%d",&y);
	
	formula=(x*x) - (2*x*y) + (y*y);
    printf("(x-y)²= %d",formula);
	
}