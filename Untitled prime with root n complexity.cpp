#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
    if(n%i==0){
    c++;
    }
    }
    if(c==1 && n!=1 )cout<<"prime";
    else cout<<"not prime";

}
