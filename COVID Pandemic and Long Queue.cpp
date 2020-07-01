#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int tc;

    cin>>tc;
    while(tc--){
        int n,z;
        cin>>n;
        int a[n];
        int total = 0;
        
        for(int z=0;z<n;z++)
        {
        cin>>a[z];
        if(a[z] == 1)
        {
        total += 1;
        }
        }
        
        int apnakambnata[total];
        int extra = 0;
        for(int z=0;z<n;z++)
        {
        if(a[z] == 1)
        {
        apnakambnata[extra] = z;
        extra+=1;
        }
        }
        
        int muchneeded = INT_MAX;
        for(int z = 0; z < total-1;z++)
        {
        muchneeded = abs(apnakambnata[z] - apnakambnata[z +1]);
        if(muchneeded < 6)
        {
        break;
        }
        }
        if (muchneeded < 6)
        {
        cout<< "NO" << "\n";
        }
        else{
        cout<< "YES" << "\n";
        }
    }
        
}
