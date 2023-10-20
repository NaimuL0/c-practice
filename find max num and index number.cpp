#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,mx=INT_MIN,pos=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>mx){mx=a;}
        pos=i;
    }
    cout<<mx<<" "<<pos<<endl;
return 0;
}
