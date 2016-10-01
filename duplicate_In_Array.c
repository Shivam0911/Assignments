#include <stdio.h>
#include <stdlib.h>
 
void duplicate(int *a, int l)
{
  int i;
  printf("The duplicate elements are: \n");
  for (i = 0; i < l; i++)
  {
    if (a[abs(a[i])] >= 0)
      a[abs(a[i])] = -a[abs(a[i])];
    else
      printf(" %d ", abs(a[i]));
  }
}
 
int main()
{
  int a[] = {1, 2, 6, 6};
  int l = sizeof(a)/sizeof(a[0]);
  duplicate(a, l);
  return 0;
}
