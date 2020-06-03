#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        if(n%2==0){
            cout<<0<<"\n";
        }
        else{
            int ans = 0;
            for(int i=0;i<n;i+=2){
                ans = ans ^ ar[i];
            }
            cout<<ans<<"\n";
        }
    }
}
