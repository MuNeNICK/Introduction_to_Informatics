#include <stdio.h>

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

int main(int argc, char *argv[]){
  int i, j;

  /* 隣接行列を出力する */
  printf("Adjacency Matrix:\n");
  for(i = 1; i <= N; i++){
    for(j = 1; j <=N; j++){
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  for(i = 1; i <= N; i++){
    v[i] = 0;
  }

  printf("\nOutput Graph:\n");
  dfs(1);
  printf("\n");
  
  return 0;
}

/*
C:\Users\mune0\Documents\GitHub\Introduction_to_Informatics>a.exe
Adjacency Matrix:
0 1 0 1 1 0
1 0 1 0 0 0
0 1 0 0 0 0
1 0 0 0 1 1
1 0 0 1 0 1
0 0 0 1 1 0

Output Graph:
1->2 2->3 1->4 4->5 5->6
*/