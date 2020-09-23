#include<bits/stdc++.h>
using namespace std;
int main() 
{
    // cout<<"may i help you"<<endl;
    //while(1<100)
    //{
        // cout<<"enter first number"<<endl;
        int a;
        cin>>a;
        // cout<<"enter second number"<<endl;
        int b;
        cin>>b;
        // cout<<"enter operator"<<endl;
        char op;
        cin>>op;
        if(op=='+')
        {
            cout<<a+b<<endl;
        }
        else if(op=='-'){
            cout<<a-b<<endl;
        }
        else if(op=='*')
        {
            cout<<a*b<<endl;
        }
        else if(op=='/')
        {
            cout<<a/b<<endl;
        }
        else if(op=='%')
        {
            cout<<a%b<<endl;
        }
        
    //}


    return 0;
}
