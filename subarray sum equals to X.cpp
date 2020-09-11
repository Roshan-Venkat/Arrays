#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,target;
	scanf("%d %d",&n,&target);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int sum = 0;
	int flag = 0;
	for(int i = 0; i < n; i++)
	{
		sum = 0;
		for(int j = i; j < n; j++)
		{
			sum = sum + a[j];
			//printf("%d\n",sum);
			if(sum == target)
			{
				printf("YES in range %d and %d",i,j);
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0)
		printf("NO");
}
