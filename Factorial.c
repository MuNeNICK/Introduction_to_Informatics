#include <stdio.h>

long kaijo(int);

int main(void){
    int n;
    n=4;
    printf("%d!=%ld\n",n,kaijo(n));

    return 0;
}

long kaijo(int n){
    if(n==0)
        return 1L;
    else
        return n*kaijo(n-1);
}

/*
PS C:\Users\mune0\Documents\GitHub\Introduction_to_Informatics> .\Factorial.exe
4!=24
*/