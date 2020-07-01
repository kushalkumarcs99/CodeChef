#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n,m,k;
        cin>>n>>m>>k;
        bool extra_var = 1;
        int total = 1;
        for(int _=0;_<n;_++){
            int list_, someextra = -1;

            for(int __=0;__<k;__++){
                cin>>list_;
                if(extra_var ) 
                someextra  = max(someextra ,list_);
                else 
                someextra  = min(someextra ,list_);
                extra_var  = !extra_var ;
            }
            if(total == m+1) 
            total = 1;
            cout<<total<<" ";
            total+1;
        }
        cout<<"\n";
    }
}
