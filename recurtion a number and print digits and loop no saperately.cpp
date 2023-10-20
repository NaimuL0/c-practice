#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,LOOP=0;
    cin>>n;
    for(;n;){
        m=n%10;
        n=n/10;
        cout<<m<<" ";
        LOOP++;

    }
    cout<<"\n"<<LOOP<<" ";
}
