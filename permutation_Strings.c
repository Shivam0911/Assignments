#include <stdio.h>
void permutation(char a[],int l,int n);
void swap(char *x, char *y);
int main() 
{
      char a[10];
      printf("Enter string\n");
	  gets(a);    
	  printf("\n"); 	  
	  permutation(a,0,strlen(a)-1);
	  return 0;
	  
}
void permutation(char *a,int l,int n)
{
	if(l==n)
	{
		puts(a);
	}
	else
	{
		int i;
		for(i=l;i<=n;i++)
		{
			swap((a+l),(a+i));
			permutation(a,l+1,n);
			swap((a+l),(a+i));
		}	
	}		
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
