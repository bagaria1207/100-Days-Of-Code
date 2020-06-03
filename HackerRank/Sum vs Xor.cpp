#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

// Complete the sumXor function below.
//n+i=n^i => n&i==0
ll sumXor(ll n) {
    ll count = 0;
    while(n){
        if((n&1)==0){
            count++;
        }
        n = n>>1;
    }
    return (1LL<<count);
}

int main()
{
    ll n;
    cin>>n;
    cout <<sumXor(n)<< "\n";
    return 0;
}

