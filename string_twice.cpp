#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, cnt = 0;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        if((n%3 != 0) && (n%7 != 0)) continue;
        ++cnt;
    }
    printf("%d", cnt);
}