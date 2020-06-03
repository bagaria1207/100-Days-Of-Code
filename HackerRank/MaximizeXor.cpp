#include<bits/stdc++.h>
using namespace std;
int maximize_xor(int l, int r){
    int res = 0;
    int aux = 0;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
            aux = i^j;
            if(aux>res){
                res=aux;
            }
        }
    }
    return res;
}
int main(){
    int l,r;
    cin>>l>>r;
    cout<<maximize_xor(l,r);
    return 0;
}
