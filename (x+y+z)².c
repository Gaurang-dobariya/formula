#include<stdio.h>

main()
{
	int x,y,z,formula;
	printf("enter the value of x :");
	scanf("%d",&x);
	
	printf("enter the value of Y :");
	scanf("%d",&y);
	
	printf("enter the value of Z :");
	scanf("%d",&z);
	
	formula=(x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
    printf("(x+y+z)² = %d",formula);
	
}