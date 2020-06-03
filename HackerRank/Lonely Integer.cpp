#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res = 0;
    while(n--){
        int k;
        cin>>k;
        res = res ^ k;
    }
    cout<<res;
}
