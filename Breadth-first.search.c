#include <stdio.h>

#define N 6

int a[N+1][N+1]={
    {0,0,0,0,0,0,0},
    {0,0,1,0,1,1,0},
    {0,1,0,1,0,1,0},
    {0,0,1,0,0,1,0},
    {0,1,0,0,0,1,1},
    {0,1,1,1,1,0,1},
    {0,0,0,0,1,1,0}
};

int v[N+1];

int queue[100]; /* キュー */
int head = 0; /* 先頭データのインデックス */
int tail = 0; /* 終端データのインデックス */

int main(){
  int i, j;

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

  queue[tail++] = 1;
  v[1] = 1;
  
  printf("\nOutput Graph:\n");
  do{
    i = queue[head++]; /* キューから取り出す */
    for(j = 1; j <= N; j++){
      if( a[i][j] == 1 && v[j] == 0 ){
	printf("%d->%d ", i, j);
	queue[tail++] = j; /* キューに入れる */
	v[j] = 1;
      }
    }
  }while(head != tail);

  printf("\n");
  
  return 0;
}

/*
C:\Users\mune0\Documents\GitHub\Introduction_to_Informatics>a.exe
Adjacency Matrix:
0 1 0 1 1 0
1 0 1 0 1 0
0 1 0 0 1 0
1 0 0 0 1 1
1 1 1 1 0 1
0 0 0 1 1 0

Output Graph:
1->2 1->4 1->5 2->3 4->6

*/