#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,m;
    cin>>n;
    for(;n;){
        m=n%10;
        n=n/10;
        cout<<m<<" ";
    }
return 0;
}
