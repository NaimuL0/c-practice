#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,ans=0;
    cin>>n;
    for(;n;){
        rem=n%10;
        n=n/10;
        ans=ans*10+rem;

    }
    cout<<ans;
}
