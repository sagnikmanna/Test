#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n=0;
	printf("Enter a No:");
	scanf("%d",& n);
	int fact=1;
	int temp=n;
	printf("Factorical Series\n");
	while(n>=1)
{	fact=fact*n;
	printf("%d\n",n);
	n--; 
}
	printf("%d!=%d",temp,fact);
	getch();
}