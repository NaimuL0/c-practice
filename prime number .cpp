#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ct=0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) ct++;
    }
    if(ct==2)cout<<"YES";
    else cout<<"NO";

return 0;
}
