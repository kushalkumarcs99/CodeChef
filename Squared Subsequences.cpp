#include<bits/stdc++.h>
using namespace std;


int main(){
    long int testcase;

    cin>>testcase;
    while(testcase--){
        long int n,z;
        long int bavacounter;
        long int dayacounter;
        long int bava;
        long int daya;
        cin>>n;
        long int allabout = (n*(n+1)/2);
        long int apna_name[100001];
        for(z=0;z<n;z++) cin>>apna_name[z];
        long int total = 0;
        for(z=0;z<n;z++){
            if(apna_name[z]%2 == 0 && apna_name[z]%4 != 0){
                bavacounter = 0;
                dayacounter = 0;
                bava = z-1;
                daya = z+1;
                while(bava >= 0){
                    if(apna_name[bava]%2 == 0) break;
                    bavacounter+=1;
                    bava-=1;
                }
                while(daya < n){
                    if(apna_name[daya]%2 == 0) break;
                    dayacounter+=1;
                    daya+=1;
                }
                
                
                total += ((bavacounter+1)*(dayacounter+1));
            }
        }
        cout<<allabout-total<<"\n";
    }
}
