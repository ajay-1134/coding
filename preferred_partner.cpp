#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "ABCD";
    for(int i=0; i<4; i++){
        char ch;
        cout<<"Hello "<<str[i]<<"! Enter your preferred partner: ";
        cin>>ch;
        str[i] = ch;
    }
    cout<<endl<<"Possible Pair: ";
    if(str[1] == 'A' && str[0] == 'B'){
        cout<<"AB ";
    }
    if(str[2] == 'A' && str[0] == 'C'){
        cout<<"AC ";
    }
    if(str[3] == 'A' && str[0] == 'D'){
        cout<<"AD ";
    }
    if(str[2] == 'B' && str[1] == 'C'){
        cout<<"BC ";
    }
    if(str[3] == 'B' && str[1] == 'D'){
        cout<<"BD ";
    }
    if(str[3] == 'C' && str[2] == 'D'){
        cout<<"CD ";
    }
    else{
        cout<<"No pairing is possible. Please consult your coach."<<endl;
    }
    return 0;
}
