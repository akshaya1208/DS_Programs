#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[3][10],name[10];
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("Enter name %d: ",i+1);
		scanf("%s",a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("Name %d: %s\n",i+1,a[i]);
	}
	for(i=0;i<3-1;i++)
	{
		for(j=0;j<3-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			
			{
				strcpy(name,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],name);
			}
		}
	}
	printf("\nSorted array is: \n");
	for(i=0;i<3;i++)
	{
		printf("Name %d: %s\n",i+1,a[i]);
	}
}
