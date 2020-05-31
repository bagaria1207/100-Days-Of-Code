#include<bits/stdc++.h>
using namespace std;

long long extended_euclidean_gcd(long long a, long long b, long long &x, long long &y){
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    long long x1, y1;
    long long ans = extended_euclidean_gcd(b%a, a, x1, y1);
    x = y1 - (b/a)*x1;
    y = x1;
    return ans;
}

bool linear_diophantine(long long a, long long b, long long c, long long &x, long long &y, long long &g){
    g = extended_euclidean_gcd(a, b, x, y);
    if(c%g){
        return false;
    }
    x = x * (c/g);
    y = y * (c/g);
    if(a<0){
        x = -x;
    }
    if(b<0){
        y = -y;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    int i=1;
    while(t--){
        long long a,b,x,y,g,c;
        cin>>a>>b>>c;
        bool ans = linear_diophantine(a,b,c,x,y,g);
        if(!ans){
            cout<<"Case "<<i<<":"<<" No"<<"\n";
        }
        else{
            cout<<"Case "<<i<<":"<<" Yes"<<"\n";

        }
        i++;
    }
    return 0;
}

/*else if(x<0){
            while (x < 0) {
                x += b/g;
                y -= a/g;
            }
            if (y < 0) {
                cout<<"Case "<<i<<":"<<" No"<<"\n";
            }
            else
                cout<<"Case "<<i<<":"<<" Yes"<<"\n";
        }
        else if (y < 0) {
            while (y < 0) {
                x -= b/g;
                y += a/g;
            }
            if (x < 0) {
                cout<<"Case "<<i<<":"<<" No"<<"\n";
            }
            else
                cout<<"Case "<<i<<":"<<" Yes"<<"\n";
        }
        else
            cout<<"Case "<<i<<":"<<" Yes"<<"\n";*/

