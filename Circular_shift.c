#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,d,t,i;
    scanf("%d",&n);
    scanf("%d",&d);
    int *a = malloc(sizeof(int) * n);
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);
   if((n-d)>d)
    {
        while(d>0)
        {
            t=a[0];
            for( i=0;i<n-1;i++)
                a[i]=a[i+1];
            a[n-1]=t;
            d--;
        }
   }
    else
    {
    	d=(n-d);
        while(d>0)
        {
            t=a[n-1];
            for( i=n-2;i>=0;i--)
                a[i+1]=a[i];
            a[0]=t;
            d--;   
        }    
    }
    for( i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

