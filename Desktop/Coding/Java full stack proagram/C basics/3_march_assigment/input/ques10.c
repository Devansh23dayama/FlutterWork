#include<stdio.h>
int main(){
    float a;
    float b;
    int c;
    int d;
    float e;
    float f;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    printf("enter c");
    scanf("%d",&c);
    printf("enter d");
    scanf("%d",&d);
    printf("enter e");
    scanf("%f",&e);
    printf("enter f");
    scanf("%f",&f);
    printf("answer is=%f",a*b-(c/d)-e+f);
    return 0;
}