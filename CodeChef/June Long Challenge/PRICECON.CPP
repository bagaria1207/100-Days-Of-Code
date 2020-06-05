#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int price[n];
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            price[i]=a;
        }
        int origPrice = 0;
        int ceilPrice = 0;
        for(int i=0;i<n;i++){
            if(price[i]<=k){
                origPrice+=price[i];
                ceilPrice+=price[i];
            }
            else{
                origPrice+=price[i];
                ceilPrice+=k;
            }
        }
        int diff = origPrice-ceilPrice;
        cout<<diff<<"\n";
    }
    return 0;
}

