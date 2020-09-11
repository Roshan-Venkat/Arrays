#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int max = INT_MAX;
	for(int i = 0; i < n ; i++)
		scanf("%d",&a[i]);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[j] > a[i])
			{
				int diff = j - i;
				if(diff>max)
					max = diff;
			}
		}
	}
	printf("%d",max);
	
}
