#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if((a+b) == c)cout<<"YES"<<endl;
        else if((a+c) == b)cout<<"YES"<<endl;
        else if((b+c) == a)cout<<"YES"<<endl;
        else
        cout<<"NO";
    }


return 0;
}
