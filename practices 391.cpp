#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,a,s;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>k;
        s=0;
        for(int j=1;j<=k;j++)
        {cin>>a;
        s=s+a;
        }
        cout<<abs(s)<<endl;
    }

return 0;
}
