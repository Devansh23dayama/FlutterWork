#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    int d;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    printf("enter c");
    scanf("%f",&c);
    printf("enter d");
    scanf("%d",&d);
    float e=a*b-c/d;
    printf("answer is =%f",e);
    return 0;
}