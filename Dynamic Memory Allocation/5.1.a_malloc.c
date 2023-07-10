#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a;
	int i,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the elements: ",a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	free(a);
}
