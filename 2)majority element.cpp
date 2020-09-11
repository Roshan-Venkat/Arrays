#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	unordered_map<int,int> um;
	for(int x:a)
	{
		um[x]++;
	}
	for(auto x : um)
	{
		if(x.second >= n/2)
			cout<<x.first;
	}
}
