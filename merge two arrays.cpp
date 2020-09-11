#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int b[m];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for(int i = 0; i < m; i++)
		scanf("%d",&b[i]);
	int c[n+m];
	for(int i = 0; i < n; i++)
		c[i] = a[i];
	for(int i = 0; i < m; i++)
		c[i+n] = b[i];
	for(int i = 0; i < n+m; i++)
		printf("%d ",c[i]);
}
