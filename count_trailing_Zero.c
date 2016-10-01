#include<stdio.h>
#include<conio.h>
#include<math.h>
int trailingZeorsInFact(int n)
{
int c=5,t=0;
while(c<=n)
{
t+= n/c;
c*=5;
}
return t;
}


int main()
{
	int k;
	while(1)
	{
		scanf("%d",&k);
		int n=trailingZeorsInFact(k);
		printf("%d\n",n);
	}
return 0;
}





