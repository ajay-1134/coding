#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    // Method - 1
    /*
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"A"<<endl;
    }
    else
    {
        cout<<"a"<<endl;
    }
    */

   // Method - 2;
   /*
   if(ch < 97){
       cout<<"A"<<endl;
   }    
   else
   {
       cout<<"a"<<endl;
   }
    */
   // Method - 3

    /*
   if(ch - 'a' >= 0){
       cout<<"a"<<endl;
   }
   else
   {
       cout<<"A"<<endl;
   }
   */
    // Method - 4
   if(ch >= 'a'){
       cout<<"a"<<endl;
   }
   else
   {
       cout<<"A"<<endl;
   }
   
}