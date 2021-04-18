#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios-base::sync_with_stdio(false);
long long int n;
cin>>n;
cout<<n<<" ";
while(n!=1){
      {
        if(n&1){
            n=(n*3)+1;
        }else{
        n=n/2;
        }
        cout<<n<<" ";

       }

    }
