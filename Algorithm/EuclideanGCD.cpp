#include<bits/stdc++.h>
// #define int long long int
using namespace std;

int euclidean_gcd(int a, int b){
    if(a==0){
        return b;
    }
    return euclidean_gcd(b%a, a);
}

int extended_euclidean_gcd(int a, int b, int &x, int &y){
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    int x1, y1;
    int ans = extended_euclidean_gcd(b%a, a, x1, y1);
    x = y1 - (b/a)*x1;
    y = x1;
    return ans;
}

bool linear_diophantine(int a, int b, int c, int &x, int &y, int &g){
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
    int a,b,x,y,g,c;
    bool ans = linear_diophantine(14,19,143,x,y,g);
    if(!ans){
        cout<<"NO";
    }
    else if(x<0){
        while (x < 0) {
            x += b/g;
			y -= a/g;
		}
		if (y < 0) {
            cout <<" X :: "<<x<<" Y :: "<<y<<" No " << '\n';
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
			cout <<" X :: "<<x<<" Y :: "<<y<<" No " << '\n';
		}
		else
            cout << "Yes" << '\n';
	}
	else
        cout << "Yes" << '\n';
    return 0;
}
