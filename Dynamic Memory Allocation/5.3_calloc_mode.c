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
int mode(int *a,int n)
{
	int max=0,c=0,result=0,i,j;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
			if(c>max)
			{
				max=c;
				result=a[i];
			}
		}
	}
	return result;
}
int main()
{
	int *a,i,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	read(a,n);
	disp(a,n);
	printf("The mode of the elements is: %d",mode(a,n));
	free(a);
}
