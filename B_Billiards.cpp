#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
double x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
double m;
// float slope1 = y1/(m-x1);
// float slope2 = y2/(x2-m);
m = ((x1*y2)+(x2*y1))/(y1+y2);
cout<<fixed<<setprecision(10)<<m<<endl;
return 0;
}