#include<stdio.h>
void nonRepeating(int *,int);
int main()
{
	int a[]={5,4,5,9,9,0,8,0,8};
	nonRepeating(a,9);
	return 0;
}
void nonRepeating(int *a,int n)
{
	int i=0,x=0;
	for(i=0;i<n;i++)
		x^=a[i];
	printf("%d",x);
}
