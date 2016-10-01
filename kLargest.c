#include<stdio.h>
void swap(int *a,int *b)
{
	int t=0;
	t=*a;
	*a=*b;
	*b=t;
}
int findlargest(int * a,int l,int h,int k)
{
	int p=l,t=h;l++;
	while(l<=h)
	{
		while(a[l]<a[p])
		l++;
		while(a[h]>a[p])
		h--;
		if(l<h)
		swap(&a[l],&a[h]);
	}
	swap(&a[h],&a[p]);
	if(h==k)
	{
		return a[h];
	}
	else if(k<h)
	return findlargest(a,p,h-1,k);
	else
	return findlargest(a,h+1,t,k);
}
int main()
{
	int a[]={5,4,9,8,10,3,0,11,1};
	
	printf("kth largest =%d\n",findlargest(a,0,8,8-3));
	int i=0;
	return 0;
}
