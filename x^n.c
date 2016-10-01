#include <stdio.h>
unsigned int power(double x, unsigned int n);
int main(){
    int n;
    double x;
    unsigned int p;
    printf("Enter x\n");
   	scanf("%lf",&x);  
	printf("Enter n\n");
   	scanf("%d",&n);         
	p=power(x,n);
	printf("power =  %d \n",p);       
    return 0;
}
unsigned int power(double x, unsigned int n)
{
    static unsigned int res;
    res=1;
    while(n>0)
    {
    	if(n&1)
    	res*=x;
   		n=n>>1;
    	x=x*x;
    }
    return res;
}
