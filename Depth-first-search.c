#include <stdio.h>
#include <stdlib.h>

#define N 6

int a[N+1][N+1]={
    {0,0,0,0,0,0,0},
    {0,0,1,0,1,1,0},
    {0,1,0,1,0,0,0},
    {0,0,1,0,0,0,0},
    {0,1,0,0,0,1,1},
    {0,1,0,0,1,0,1},
    {0,0,0,0,1,1,0}
};

int v[N+1];

void dfs(int i){
    int j;

    v[i]=1;
    for(j=1;j<=N;j++){
        if(a[i][j]==1&&v[j]==0){
            printf("%d->%d ",i,j);
            dfs(j);
        }
    }
}

int main(){
    int i;

    dfs(1);
    printf("\n");
    return 0;
}

/*
PS C:\Users\mune0\Documents\GitHub\Introduction_to_Informatics> .\Depth-first-search.exe

1->2 2->3 1->4 4->5 5->6 
*/