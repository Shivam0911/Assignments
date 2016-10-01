#include<stdio.h>
int f=-1;
int r=-1;
void insert(int *a,int data,int n)
{
	if((r+1)%n==f)
	{
		printf("queue overflow");
		return ;
	}
	if(f==-1)
	{
		f++;;
		r++;
		a[f]=data;
	}
	else
	{
		r=(r+1)%n;
		a[r]=data;
	}	
}

void remove1(int *a,int n)
{
	if(f==-1)
	{
		printf("Empty queue");
		return;
	}
	if(f%n==r)
	{
		f=r=-1;
	}
	else
	{
		f=(f+1)%n;
	}
}


void printQueue(int *a,int n)
{
	int fp=f;
	while((fp%n)!=r)
	{
		printf("\t%d",a[fp]);
		fp=(fp+1)%n;;
	}
	printf("\t%d\n\n",a[fp]);
}
int main()
{
	int a[10];
	insert(a,1,10);
	insert(a,2,10);
	printQueue(a,10);
	printf("\n");
	remove1(a,10);
	printQueue(a,10);
	insert(a,5,10);
	insert(a,6,10);
	insert(a,5,10);
	printQueue(a,10);
	return 0;
}
