#include<stdio.h>
int main (){

    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    

    int k;
    printf("enter rotation->  ");
    scanf("%d",&k);
    int tempCountN = n;
    int count =0;

    //count
    while(tempCountN > 0){
        count++;
        tempCountN = tempCountN/10;
    }
    //power
    int power=1;
    while(count-1 > 0){
    power = power *10;
    count--;
    }

    //formula


while(k>0){
    n= (n%10)*power+n/10;
    k--;

}
printf("%d",n);
    return 0;
}