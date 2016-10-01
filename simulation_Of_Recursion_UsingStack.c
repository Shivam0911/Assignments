#include<stdio.h>
int stack[20];
int top=-1;
void push(int a)
{
	if(top!=19)
	{
		top++;
		stack[top]=a;
	}
	else
	printf("Full\n");
	
	
}
int pop()
{
	if(top==-1)
	{
	printf("empty\n");
	return 0;
	}
	else
	{
		int a=stack[top];
		top=top-1;
		return a;
	}
}
int sum (int n)
{
	int i,add=0;
	if(n==0)
	return 0;
	if(n>20)
	{
		printf("above the range\n");
		return -1;
	}
	for(i=n;i>0;i--)
	{
		push(i);
	}
	for(i=0;i<n;i++)
	{
		add=add+pop(i);
	}
	return add;
	
}
int main()
{
	int s;
	s=sum(3);
	printf("sum = %d",s);
	return 0;
}
