#include<stdio.h>
struct Node
{
   int data;
   int next;
}arr[100];
void insert(int index,int d,int *head)
{
	if(index>99)
	{
		printf("Array index out of bound\n");
		return;
	}	
	else if(index==0)
	{
		arr[index].data=d;
		arr[index].next=-1;
		*head=index;
	}
	else
	{
		if(d<arr[*head].data)
		{
			arr[index].data=d;
			arr[index].next=*head;
			*head=index;
		}
		else
		{
			int i=*head,p,j=*head;
			while(arr[i].next!=-1&&arr[arr[i].next].data<d)
				i=arr[i].next;
			p=arr[i].next;	
			arr[i].next=index;
			arr[index].data=d;
			arr[index].next=p;
		}	
	}
}
void print(int head)
{
	int i=0;
	while(head!=-1)
	{
		printf("%d\t\t\n",arr[head].data);	
		head=arr[head].next;
	}
}
int main()
{
	int n,head=-1;
	insert(0,10,&head);
	insert(1,3,&head);
	insert(2,8,&head);
	insert(8,1,&head);
	print(head);
}
