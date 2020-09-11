#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	unordered_map <int,int> m;
	m[0] = -1;
	int largest = 0 , sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum = sum + a[i];
		if(m.find(sum) == m.end())
			m[sum] = i;
		else
			largest = max(largest,i-m[sum]);
		for(auto x : m)
		{
			cout<<x.first<<" "<<x.second<<"\n";
		}
		cout<<"--------------------------------------"<<largest<<"\n";
	}
	cout<<largest;
}
