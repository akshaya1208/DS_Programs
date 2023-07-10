#include<stdio.h>
#define N 10
struct employee
{
	int eno;
	char ename[20];
	int esal;
	int dno;
};
void read (struct employee emp[N],int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Employee number %d\n",i+1);
		printf("Enter the employee number: ");
		scanf("%d",&emp[i].eno);
		printf("Enter the employee name: ");
		scanf("%s",emp[i].ename);
		printf("Enter the employee's salary: ");
		scanf("%d",&emp[i].esal);
		printf("Enter the number of employee: ");
		scanf("%d",&emp[i].dno);
		printf("\n");
	}
}
void disp(struct employee emp[N],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Emp no: %d\n",emp[i].eno);
		printf("Emp name: %s\n",emp[i].ename);
		printf("Emp salary: %d\n",&emp[i].esal);
		printf("Dno: %d\n",emp[i].dno);
		printf("\n");
	}
}
void search(struct employee emp[N],int n)
{
	int i,num,flag=-1;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(emp[i].eno==num)
		{
			flag=i;
		}
		else
		{
			flag=-1;
		}
	}
	if(flag!=-1)
	{
		printf("Details\n");
		printf("Emp no: %d\n",emp[flag].eno);
		printf("Emp name: %s\n",emp[flag].ename);
		printf("Emp salary: %d\n",emp[flag].esal);
		printf("Dno: %d\n",emp[flag].dno);
	}
	else
	{
		printf("Employee not found");
	}
}
void sortsal(struct employee emp[N],int n)
{
	int i,j;
	struct employee temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(emp[j].esal>emp[j+1].esal)
			{
				temp=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp;
			}
		}
	}
}
void sortname(struct employee emp[N],int n)
{
	int i,j;
	struct employee temp;
	char name[N];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(emp[j].ename,emp[j+1].ename)>0)
			{
				temp=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp;
			}
		}
	}
}
void del(struct employee emp[N],int n)
{
	int num,i,flag=-1;
	printf("Enter a num: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(emp[i].eno==num)
		{
			flag=i;
			break;
		}
		else
		{
			flag=-1;
			break;
		}
	}
	if(flag!=-1)
	{
		printf("Employee Found\n");
	}
	else
	{
		printf("Not found\n");
	}
}
int main()
{
	int n;
	struct employee emp[N];
	printf("Enter the number of employees: ");
	scanf("%d",&n);
	read(emp,n);
	disp(emp,n);
	search(emp,n);
	sortsal(emp,n);
	disp(emp,n);
	sortname(emp,n);
	disp(emp,n);
	del(emp,n);
	return 0;
}
