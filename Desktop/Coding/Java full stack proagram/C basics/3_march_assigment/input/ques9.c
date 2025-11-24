#include<stdio.h>
int main(){
    float a;
    int b;
    int c;
    float d;
    float e;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    printf("enter d");
    scanf("%f",&d);
    printf("enter e");
    scanf("%f",&e);
    printf("answer is=%f",a*(b-c)/c+d-e);
    return 0;
}