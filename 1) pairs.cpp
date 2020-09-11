#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,X;
	scanf("%d %d",&n,&X);
	int a[n];
	for(int i = 0; i < n ; i++)
		scanf("%d",&a[i]);
	unordered_set<int> us;
	for(int x : a)
	{
		if(us.find(x) != us.end())
		{
			cout<<x<<" "<<X-x<<"\n";
		}
		else
		{
			us.insert(X-x);
		}
	}
}
