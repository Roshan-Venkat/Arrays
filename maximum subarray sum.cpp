#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int sum = 0;
	int presum;
	for(int i = 0; i < n; i++)
	{
		sum = sum + a[i];
		if(sum>presum)
			presum = sum;
		if(sum < 0)
			sum = 0;
	}
	printf("%d",presum);
}
