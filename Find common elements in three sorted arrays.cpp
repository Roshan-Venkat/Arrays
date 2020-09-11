#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	int a[n1];
	int b[n2];
	int c[n3];
	for(int i = 0; i < n1; i++)
		scanf("%d",&a[i]);
	for(int i = 0; i < n2; i++)
		scanf("%d",&b[i]);
	for(int i = 0; i < n3; i++)
		scanf("%d",&c[i]);
	int index1 = 0,index2 = 0, index3 = 0; 
	while(index1 < n1 && index2 < n2 && index3 < n3)
	{
		if(a[index1] == b[index2] || b[index2] == c[index3])
			printf("%d ",a[index1]),index1++,index2++,index3++;
		if(a[index1] < b[index2])
			index1++;
		else if(b[index2] < a[index1])
			index2++;
		else
			index3++;
	}
}
