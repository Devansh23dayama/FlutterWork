#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    int d;
    float e;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    printf("enter c");
    scanf("%f",&c);
    printf("enter d");
    scanf("%d",&d);
    printf("enter e");
    scanf("%f",&e);
    printf("answer is=%f",a+b*(c-b)/d+e);
    return 0;
}