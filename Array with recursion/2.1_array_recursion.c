#include<stdio.h>
void printarray(int i,int n,int a[])
{
	if(i>n)
	{
		return;
	}
	printf("%d\t",a[i]);
	printArray(a,i+1,n);
}
int main()
{
	int i,n,a[n];
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are: ");
	printArray(a,0,n);
}
