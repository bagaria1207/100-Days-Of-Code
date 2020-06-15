#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t,i,j,n,k,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        k=n;
        x=0;
        while(n%2==0){
            n=n/2;
            x++;
        }
        x++;
        i=pow(2,x);
        y=k/i;
        cout<<y<<endl;
    }
    return 0;
}
