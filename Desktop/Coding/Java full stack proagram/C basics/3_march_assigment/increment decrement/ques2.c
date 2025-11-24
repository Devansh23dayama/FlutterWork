#include<stdio.h>
int main(){
    int i= 1, j=2 , k=3;
   int m=i-- - j--  - k--;
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",k);
    printf("%d\n",m);
    return 0;
}