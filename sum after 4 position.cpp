#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i%4==1) sum=sum+a;

    }
cout<<sum;


}
