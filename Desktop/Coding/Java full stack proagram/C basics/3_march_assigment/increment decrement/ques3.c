#include<stdio.h>
int main(){
    int a=1,b=2;
  int m=--b - ++a + ++b - --a;
    printf("%d\n",m);
    return 0;
}