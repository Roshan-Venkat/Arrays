#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int newnum = 0,rem;
	int count = 0;
	while(n)
	{
		count++;
		rem = n % 10;
		newnum = newnum * 10 + rem;
		n /= 10;
	}
	int a[count];
	int i = 0;
	while(newnum)
	{
		a[i] = newnum % 10;
		newnum /= 10;
		i++;
	}
	for(i = count - 1; i > 0; i--)
		if(a[i] > a[i-1])
			break;
	if(i == 0)
		cout<<"Not possible";
	else
	{
		int x = a[i-1] ;
		int smallest = i;
		int safe = 0;
		for(int k = i+1; k < count; k++)
		{
			if(a[k] > x && a[k] < a[smallest])
				smallest = k;
		}
		x = a[i-1];
		a[i-1] = a[smallest];
		a[smallest] = x;
		sort(a + i,a + count);
		for(int i = 0; i < count; i++)
		printf("%d",a[i]);
	}
}
