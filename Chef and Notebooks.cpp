#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int x,y,n,k;
		cin>>x>>y>>n>>k;
		bool flag = false;
		
		while(n--)
		{
			int p,c;
			cin>>p>>c;
			
			if(p >= x-y && c <= k)
			{
				flag = true;
				break;
			}
		}
		
		if(flag == true)
		cout<<"LuckyChef"<<endl;
		else
		cout<<"UnluckyChef"<<endl;
	}
}
