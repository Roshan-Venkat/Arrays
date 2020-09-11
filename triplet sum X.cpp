#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,target;
	scanf("%d %d",&n,&target);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int sum;
	for(int i = 0; i < n-2; i++){
		sum = target - a[i];
		unordered_set<int> s1;
		for(int j = i + 1; j < n; j++)
		{
			if(s1.find(sum - a[j]) != s1.end()){
				printf("%d %d %d\n",a[i],a[j],target - a[i] - a[j]);
				break;
			}
			else
				s1.insert(a[j]);
		}
	}	
}
