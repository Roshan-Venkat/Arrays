#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int res = 1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] <= res)
			res = res + a[i];
		else
			break;
	}
	printf("%d",res);
}
