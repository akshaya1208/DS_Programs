#include<stdio.h>
#include<stdlib.h>
void rev(char ch[20])
{
	int i;
	printf("Printing the string in the reverse order:\n");
	for(i=strlen(ch);i>=0;i--)
	{
		printf("%c",ch[i]);
	}
}
void reverse(char ch[20])
{
	int i,l=strlen(ch);
	char c;
	for(i=0;i<l/2;i++)
	{
		c=ch[l-1-i];
		ch[l-1-i]=ch[i];
		ch[i]=c;
	}
	printf("\nReversed array:\n");
	printf("%s",ch);
}
int main()
{
	char ch[20];
	printf("Enter the string: \n");
	scanf("%s",ch);
	rev(ch);
	reverse(ch);
}
