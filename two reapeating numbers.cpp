#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n ; i++)
		scanf("%d",&a[i]);
	map<int,int> mp;
	for(int x : a)
	{
		mp[x]++;
	}
	for(auto p : mp)
	{
		if(p.second == 2)
			printf("%d",p.first);
	}
}
