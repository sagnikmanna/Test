#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int f,c;
	printf("Enter the temperature value in fahrenhait:");
	scanf("%d", & c);
	f=(1.8*c)+32;
	printf("convert celcious value: %d",f);
	getch();
	}