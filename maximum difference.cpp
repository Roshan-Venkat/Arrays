#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n ; i++)
		scanf("%d",&a[i]);
	int min = INT_MIN;
	int diff;
	for(int i = 0; i < n; i++)
		for(int j = i+1; j < n; j++)
			if(a[i] < a[j]){
				diff = a[j] - a[i];
				if(diff > min)
					min = diff;
			}
	printf("%d",min);
}
