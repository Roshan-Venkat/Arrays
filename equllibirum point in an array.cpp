#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i = 1; i <= n; i++)
		scanf("%d",&a[i]);
	int sum = 0;
	for(int i = 1; i <= n; i++)
		sum = sum + a[i];
	int leftsum = 0;
	int safe;
	for(int i = 1; i <= n; i++)
	{
		leftsum = leftsum + a[i];
		if(sum == leftsum)
		{
			safe = i;
			break;
		}
		sum = sum - a[i];
		printf("%d %d\n",sum,leftsum);		
	}
	printf("%d",safe);
}
