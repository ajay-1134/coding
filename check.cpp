#include<iostream>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int x=1,y=2;
int a[n];
for(int i=0,j=(n+1)/2;i<(n+1)/2;i++,j++)
{
a[i]=x;
x+=2;
a[j]=y;
y+=2;
}

for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<a[k-1];
}