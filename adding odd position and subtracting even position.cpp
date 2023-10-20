#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(i%2==1){
            sum=sum+a;
        }
        else{sum=sum-a;}

    }
cout<<sum;
}
