#include<stdio.h>
#include<conio.h>
#include<math.h>
	float f(float x)
	{
	return(exp(x)-3*x);
	}

	float df(float x)
	{
	return(exp(x)-3);
	}

void main()
{
	clrscr();
	float x0,e,x1;
	printf("Enter The Value Of x0:");
	scanf("%f",&x0);
	printf("Enter The Value of e:");
	scanf("%f",&e);
	while(fabs(f(x0))>e)
	{
		x1=x0-(f(x0)/df(x0));
		x0=x1;
	}
	printf("The Approxmate Root is %f",x1);
getch();
}