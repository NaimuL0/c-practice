#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mult=1;
    cin>>n;
    for(int i=2;i<=n;i+=2)
    {
        mult=mult*i;cout<<i<<" ";

    }cout<<endl<<mult;

return 0;
}
