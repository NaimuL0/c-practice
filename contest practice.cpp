#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long int a,b,n,l,mn;
    cin>>n;
    mn=a;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        for(int j=1;j<=b;j++){
            if(j%10==0){
                l=j/10;
                if(n*l>mn)cout<<n*l;
            }
        }
    }

}
