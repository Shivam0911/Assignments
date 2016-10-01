#include<stdio.h>
void search(int a[4][4],int i ,int j,int n,int d)
{
	if(i<0||j>(n-1))
	{
		printf("Element not found\n");
		return;
	}
	if(a[i][j]==d)
	{
		printf("Element found at %d row and %d column \n",i,j);
		return;
	}
	if(a[i][j]<d)
	search(a,i,j+1,n,d);
	else if(a[i][j]>d)
	search(a,i-1,j,n,d);
	
}
int main()
{
	int a[4][4]={{10,20,30,40},{15,25,35,45},{27,29,39,49},{100,200,300,400}};
	int i,j,n=4,d;
	
/*	printf("Enter element in array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	*/
	printf("matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter element to search\n");
	scanf("%d",&d);
	search(a,n-1,0,n,d);
	return 0;
}
