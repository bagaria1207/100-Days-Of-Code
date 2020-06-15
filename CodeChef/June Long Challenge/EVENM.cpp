#include <iostream>
using namespace std;
int main() {
    long long int t,i,j,n,x,y,k;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a[n][n];
        x=1;
        for(i=0;i<n;i++){
            if(i%2==0){
                for(j=0;j<n;j++){
                    a[i][j]=x;
                    x++;
                }
            }
            else{
                for(j=n-1;j>=0;j--){
                    a[i][j]=x;
                    x++;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
