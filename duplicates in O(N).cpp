#include<stdio.h>
int abs(int n)
{
	if(n<0)
		return -1 * n;
	else
	 return n; 
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for(int i = 0; i < n ; i++)
	{
		if(a[abs(a[i])] >= 0)
			a[abs(a[i])] = -a[abs(a[i])];
		else
			printf("%d ",abs(a[i]));
	}
}
