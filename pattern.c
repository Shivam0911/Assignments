/* 
given a 2d array={{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12},
				{13,14,15,16}
				}
Pattern=1
		5  2  
		9   6  3
		13  10 7  4
		14	11	8
		15	12
		16	
*/


#include<stdio.h>
#include<conio.h>
int min(int a,int b)
{
	return (a<b)?a:b;
}
int mint(int a,int b,int c)
{
	return (a<b)?((a<c)?a:c):((b<c)?b:c);
}

int max(int a,int b)
{
	return (a>b)?a:b;
}

int main()
{
	int a[4][4]={{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12},
				{13,14,15,16}
				};
	int i,j;
	
	
	
	  for (i=1; i<8; i++)
    {

        int k =  max(0, i-4);
 
         int count = mint(i, (4-k), 4);

        for (j=0; j<count; j++)
            printf("%5d ", a[min(4, i)-j-1][k+j]);
 
      
        printf("\n");
    }
	return 0;
}
