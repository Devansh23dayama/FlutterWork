#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    float d;
    float e;
    int f;
    int g;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    printf("enter c");
    scanf("%f",&c);
    printf("enter d");
    scanf("%f",&d);
    printf("enter e");
    scanf("%f",&e);
    printf("enter f");
    scanf("%d",&f);
    printf("enter g");
    scanf("%d",&g);
    printf("answer is =%f",a*b-(c-d)+e-f+g);
    return 0;
}