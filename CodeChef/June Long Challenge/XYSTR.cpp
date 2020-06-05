#include<bits/stdc++.h>
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt = 0;
        if(s.length()<=1){
            cout<<cnt<<"\n";
        }
        else{
            char aux = s[0];
            int i = 0;
            while(i!=s.length()-1){
                if(s[i+1]==(aux)){
                    aux = s[i+1];
                    i++;
                }
                else{
                    cnt++;
                    i=i+2;
                    if(i<s.length()){
                        aux = s[i];
                    }
                    else{
                        break;
                    }
                }
            }
            cout<<cnt<<"\n";
        }
    }
    return 0;
}
