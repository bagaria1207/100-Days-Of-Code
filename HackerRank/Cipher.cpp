#include<bits/stdc++.h>
using namespace std;
/*
Done with the help of editorial
Ascii of 0->48 1->48
%48 ->  to get the value in int as
        directly we get as ascii value
        from string
*/

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string b="";
    b+=s[0];
    if(n<=k){
        for(int i=1;i<n;i++){
            int a = s[i-1]%48^s[i]%48;
            b+=(a+48);
        }
    }
    else{
        int i;
        for(i=1;i<k;i++){
            int a = s[i-1]%48^s[i]%48;
            b+=(a+48);
        }
        for(int j=0;b.size()<n;j++,i++){
            int a = s[i-1]%48^s[i]%48^b[j]%48;
            b+=(a+48);
        }
    }
    cout<<b<<"\n";
}
