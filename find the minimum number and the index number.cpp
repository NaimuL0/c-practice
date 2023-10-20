#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,men=INT_MAX,pos=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a<men){men=a;}
        pos=i;
    }
    cout<<men<<" "<<pos<<endl;
return 04;
}
