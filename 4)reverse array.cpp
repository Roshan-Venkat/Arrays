#include<stdio.h>
int main()
{
	int n;
	int start = 0;
	scanf("%d",&n);
	int end = n-1;
	int a[n];
	for(int i = 0; i < n ; i++)
		scanf("%d",&a[i]);
	int temp;
	printf("\n");
	while(start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	for(int i = 0; i < n; i++)
		printf("%d ",a[i]);
}
