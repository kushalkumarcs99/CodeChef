#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int evenOrOdd = 0;
        int numberOfDays = n/2;
        if(n%2 == 0){
            evenOrOdd = 1;

        }
        if(n == 1) {
            cout<<1<<"\n"<<"1 1\n";
        }
        else{

        cout<<numberOfDays<<"\n";
        int i = 2;
        int days = 2*numberOfDays;
        while(i<days){
            cout<<2 << " ";
            cout<<i-1 << " " << i <<"\n";
            i+=2;

        }

        evenOrOdd == 1 ? cout<<2 << " "<<i-1<<" "<<i<<"\n" 
             : cout<< 3 << " "<< i-1 << " " << i << " " << i+1 <<"\n";
        }
     
    }
}
