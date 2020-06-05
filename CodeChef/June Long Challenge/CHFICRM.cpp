#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int perQ[n];
        for(int i=0;i<n;i++){
            int aux;
            cin>>aux;
            perQ[i]=aux;
        }
        /*
        0 -> 5
        1 -> 10
        2 -> 15
        */
        int chefMoney[2] = {0,0};
        if(perQ[0]>5){
            cout<<"NO"<<"\n";
        }
        else{
            chefMoney[0]++;
            int flag = 1;
            for(int i=1;i<n;i++){
                if(perQ[i]>5){
                    int diff = perQ[i]-5;
                    if(diff == 5 && chefMoney[0]>0){
                        chefMoney[0]--;
                        chefMoney[1]++;
                        flag++;
                    }
                    else if(diff == 10 && chefMoney[1]>0){
                        chefMoney[1]--;
                        flag++;
                    }
                    else if(diff == 10 && chefMoney[0]>=2){
                        chefMoney[0]-=2;
                        flag++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    chefMoney[0]++;
                    flag++;
                }
            }
            if(flag==n){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}


