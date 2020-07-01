#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int sum=0;
		
		int a[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+= a[i];
		}
		
		int sum1=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=k)
			{
				sum1+= a[i];
			}
			else
			{
				sum1+= k;
			}
			
		}
		
		cout<<abs(sum-sum1)<<endl;
	}
	return 0;
}
