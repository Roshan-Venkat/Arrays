#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	sort(a,a+n);
	int temp;
	for(int i = 0; i < n; i = i + 2)
	{
		temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
	}
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
