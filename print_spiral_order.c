/*Given a two dim array of order n*n. For example, given below is the 2-dim array of order 5*5:


Write a function that prints the elements of this matrix in alternate spiral orders. The first spiral order is clockwise, then anti-clockwise and so on. The above array elements should be printed as following:

Output: 1, 2, 3, 4, 5, 10, 15, 20, 25, 24, 23, 22, 21, 16, 11, 6, 9, 8, 7, 12, 17, 18, 19, 14, 13

*/	
	void printSpiralOrder(int a[5][5],int n)
	{
	int i,j,m;
	for ( i=0;i<n;i++)
	{
	if(i%2==0)
	{
	for (j=i;j<n-i;j++)
	{
	m=i;
	printf("%d,",a[m][j]);
	}
	
	for (j=i+1;j<=n-1-i;j++)
	{
	m=n-i-1;
	printf("%d,",a[j][m]);
	}
	
	for ( j=n-i-2;j>=i;j--)
	{
	m=n-i-1;
	printf("%d,",a[m][j]);
	}
	
	for ( j=n-2-i;j>i;j--)
	{
	m=i; 
	printf("%d,",a[j][m]);
	}
	}
	else
	{
	for (j=n-1-i;j>=i;j--)
	{
	m=i;
	printf("%d,",a[m][j]);
	}
	
	for (j=i+1;j<n-i;j++)
	{
	m=i;
	printf("%d,",a[j][m]);
	}
	
	for ( j=i+1;j<n-i;j++)
	{
	m=n-i-1;
	printf("%d,",a[m][j]);
	}
	
	for ( j=n-2-i;j>i;j--)
	{
	m=n-i-1; 
	printf("%d,",a[j][m]);
	} 
	}
	}
	}
