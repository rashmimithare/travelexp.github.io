#include<stdio.h>
void create(int[],int);
void display(int[],int);
int insert(int[],int);
int delete(int[],int);
void main()
{
	int a[100],n,choice;
	printf("enter the elements in the array\n");
	scanf("%d",&n);
	create(a,n);
	do
	{
		printf("\n Menu\n");
		printf("1:Insert\n 2:Delete\n 3:Display\n 4:Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:n=insert(a,n);
				break;
			case 2:n=delete(a,n);
				break;
			case 3:display(a,n);
			      break;
		}
	}while(choice<4);
}
void create(int a[],int n)
{
	int i;
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	printf("the contents of an array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int insert(int a[],int n)
{
	int pos,i,ele;
	printf("enter the position\n");
	scanf("%d",&pos);
	printf("enter the elements to insert\n");
	scanf("%d",&ele);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ele;
	n++;
	return n;
}
int delete(int a[],int n)
{
	int pos,i,ele;
	printf("enter the position\n");
	scanf("%d",&pos);
	ele=a[pos];
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("elements deleted is=%d\n",ele);
	n--;
	return n;
}


