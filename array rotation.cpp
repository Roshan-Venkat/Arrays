#include<stdio.h>
int a[10000];
void reverse(int start,int end)
{
	int temp;
	while(start<end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;  
	}
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int act = k % n;
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	reverse(0,n-1);
	reverse(0,n-k-1);
	reverse(n-k,n-1);
	for(int i = 0 ; i < n ; i++)
		printf("%d ",a[i]);
}
