#include<stdio.h>
#include<stdlib.h>
struct book
{
	char book_name[20];
	char author_name[20];
};
void read(struct book *b,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the name of the book: ");
		scanf("%s",(b+i)->book_name);
		printf("Enter the name of the author: ");
		scanf("%s",(b+i)->author_name);
	}
}
void disp(struct book *b,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Book %d\n",i+1);
		printf("Book name: %s\n",(b+i)->book_name);
		printf("Author name: %s\n",(b+i)->author_name);
	}
}
int main()
{
	struct book *b;
	int i,n;
	printf("Enter the number of books: ");
	scanf("%d",&n);
	b=(struct book *)calloc(n,sizeof(struct book));
	read(b,n);
	disp(b,n);
}


