#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n; i++)
		scanf("%d",&a[i]);
	int frnd2 = 0;
	for(int frnd1 = 0; frnd1 < n; frnd1++)
	{
		int temp;
		if(a[frnd1] == 0 && a[frnd2] == 1)
		{
			temp = a[frnd2];
			a[frnd2] = a[frnd1];
			a[frnd1] = temp;
			frnd2++;
		}
	}
	for(int i = 0; i < n; i++)
		printf("%d ",a[i]);
}

