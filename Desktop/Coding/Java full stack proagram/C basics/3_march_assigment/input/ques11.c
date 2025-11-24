#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    printf("enter d");
    scanf("%d",&d);
    printf("enter e");
    scanf("%d",&e);

    printf("answer is =%d",a*b+(c-d)/b+e);
    return 0;
}