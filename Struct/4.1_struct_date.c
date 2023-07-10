#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yyyy;
}d1,d2;
void read()
{
	printf("Enter the first date\n");
	printf("Enter date: ");
	scanf("%d",&d1.dd);
	printf("Enter month: ");
	scanf("%d",&d1.mm);
	printf("Enter year: ");
	scanf("%d",&d1.yyyy);
	printf("Enter the second date\n");
	printf("Enter date: ");
	scanf("%d",&d2.dd);
	printf("Enter month: ");
	scanf("%d",&d2.mm);
	printf("Enter year: ");
	scanf("%d",&d2.yyyy);
}
void disp()
{
	printf("Date 1: %d/%d/%d\n",d1.dd,d1.mm,d1.yyyy);
	printf("Date 2: %d/%d/%d\n",d2.dd,d2.mm,d2.yyyy);
}
void compare()
{
	if(d1.dd==d2.dd&&d1.mm==d2.mm&&d1.yyyy==d2.yyyy)
	{
		printf("Dates are equal");
	}
	else
	{
		printf("Dates are not equal");
	}
}
void main()
{
	read();
	disp();
	compare();
}
