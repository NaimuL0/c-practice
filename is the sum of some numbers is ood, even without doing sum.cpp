#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,sum=0,count=0,c=0;
    cin>>n;
    if (n%2!=0){
         count++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if ( a%2!=0){
           c++;
        }
    }
    if(count%2!=0 ||  c%2!=0){
        cout<<"sum is odd"<<" "<<endl;
    }
    else cout<<"sum is even";

return 0;
}
