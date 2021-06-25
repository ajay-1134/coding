#include<stdio.h>


int mat[20][20];
int vis[20][20];
int res[20][20];
int h, d, k;

int n;
int min(int a, int b){
    if(a <= b){
        return a;
    }
    return b;
}

int solve(int x, int y, int cnt, int as){
    if(x < 0 || y < 0 || x >= n || y >= n || cnt >= k){
        return 0;
    }
    
    if(x == d && y == d){
        res[x][y] = as;
        return as;
    }
    if(vis[x][y] == 1){
        return res[x][y];
    }
    vis[x][y] = 1;
    as = as + mat[x][y];
    printf("%d-%d\n", x, y);
    int ans1 = solve(x, y+1, cnt+1, as);
    int ans2 = solve(x, y-1, cnt+1, as);
    int ans3 = solve(x+1, y, cnt+1, as);
    int ans4 = solve(x-1, y+1, cnt+1, as);


    return res[x][y] = min(ans1, min(ans2, min(ans3, ans4)));

}
int main(){
    // int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j=1; j <= n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    // int h, d, k;
    scanf("%d%d%d", &h, &d, &k);
    // printf("%d%d%d", h, d, k);
    int x = h, y = h;
    int cnt = 0;
    int as = 0;
    int ans = solve(h, h, cnt, as);
    printf("%d", ans);
}