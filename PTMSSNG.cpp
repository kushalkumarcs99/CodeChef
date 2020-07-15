#include <bits/stdc++.h>

#define LL long long
using namespace std;

int main(){
    
    LL T;
    cin >> T;

    while (T--){
        LL N;
        cin>>N;
        LL div = 4*N -1 ;
        LL first_[div], second_[div];

       for(LL x=0; x<div; x++){
           cin>>first_[x]>>second_[x];
       }
        LL top = first_[0];
        LL bootom  = second_[0];
       for(LL x=1; x<div; x++){
           top = top^ first_[x];
           bootom = bootom ^ second_[x];

       }

       cout <<top<<" "<<bootom <<"\n";
        }
}
