#include<bits/stdc++.h>
using namespace std;

//14 19 143

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
    long long a,b,x,y,g,c;
    cin>>a>>b>>c;
    bool ans = linear_diophantine(a,b,c,x,y,g);
    if(!ans){
        cout<<"NO";
    }
    else if(x<0){
        while (x < 0) {
            x += b/g;
			y -= a/g;
		}
		if (y < 0) {
            cout << "No" << '\n';
		}
		else
            cout << "Yes" << '\n';
	}
	else if (y < 0) {
		while (y < 0) {
			x -= b/g;
			y += a/g;
		}
		if (x < 0) {
			cout << "No" << '\n';
		}
		else
            cout << "Yes" << '\n';
	}
	else
        cout << "Yes" << '\n';
    return 0;
}
