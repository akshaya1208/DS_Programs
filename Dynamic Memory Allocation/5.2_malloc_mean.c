#include<stdio.h>
#include<stdlib.h>
int read(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
}
int disp(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int avg(int *a,int n)
{
	int s=0,avg=0,i;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	avg=s/n;
	return avg;
}
int main()
{
	int *a,i,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int));
	read(a,n);
	disp(a,n);
	printf("The average of the elements is %d",avg(a,n));
}
