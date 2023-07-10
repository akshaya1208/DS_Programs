#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	a=(int *)malloc(sizeof(int));
	*a=40;
	printf("%d",*a);
	free(a);
	return 0;
}
