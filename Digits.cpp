#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int nod = 0;
if (n==0)
{
    nod=1;
}
while(n){
    nod++;
    n = n/10;
}
cout<<nod<<endl;
    return 0;
}