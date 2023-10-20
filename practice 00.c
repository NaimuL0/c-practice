#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,mx=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>mx) mx=a;

    }
    cout<<mx;
return 0;
}
