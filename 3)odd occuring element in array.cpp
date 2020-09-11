#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int ans = 0;
	for(int i = 0; i < n; i++)
		ans = ans ^ a[i];
	printf("%d",ans);
}
