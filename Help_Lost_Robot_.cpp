#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if( a-c !=0 && b-d !=0){
        cout<<"sad"<<endl;
    }
     
        else if(a==c && b<d){
            cout<<"up"<<endl;
        }
        else if(a==c && b>d){
            cout<<"down"<<endl;
        }
        else if(b==d && a>c){
            cout<<"left"<<endl;
        }
        else if(b==d && a<c){
            cout<<"right"<<endl;
        }
    
}
    return 0;





