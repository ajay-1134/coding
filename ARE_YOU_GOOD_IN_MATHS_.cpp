#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double H, A;
        cin>>H>>A;

        if(H*H < 4*A){
            cout<<-1<<endl;
        }
        else
        {
            double a = sqrt((H*H + sqrt(H*H*H*H - 16*A*A))/2);
            // double a2 = (H*H + sqrt(H*H*H*H - 16*A*A))/2;
            // double a = min(a1, a2);
            double b = (2*A)/a;
            if(a > b){
                swap(a,b);
            }
             cout<<fixed<<std::setprecision(6)<<a<<" "<<b<<" "<<H<<endl;
            
        }
        
    }
    return 0;
    
}