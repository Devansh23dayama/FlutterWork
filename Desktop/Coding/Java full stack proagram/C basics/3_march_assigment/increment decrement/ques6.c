#include<stdio.h>
int main(){
    int m=0,n=0;
    int p= --m *--n *n-- * m--;
    printf("%d",p);
    return 0;
}