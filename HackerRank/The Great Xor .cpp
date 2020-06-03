#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        ll x;
        cin>>x;
        int bitCnt = 0;
        ll ansCnt = 0;
        while(x>0){
            if((x&1)==0){
                ansCnt += pow(2, bitCnt);
            }
            bitCnt+=1;
            x=x>>1;
        }
        cout<<ansCnt<<"\n";
    }
    return 0;
}
