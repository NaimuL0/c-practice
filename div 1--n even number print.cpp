#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,div=4;
    cin>>n;
    for(int i=2;i<=n;i+=2)
    {
        div=div/i;cout<<i<<" ";

    }cout<<endl<< div;

return 0;
}
