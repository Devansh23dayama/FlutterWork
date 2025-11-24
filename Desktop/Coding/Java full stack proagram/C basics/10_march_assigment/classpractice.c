#include<stdio.h>
int main (){

    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    

    int k;
    printf("enter rotation->  ");
    scanf("%d",&k);
    int tempN = n;
    int count =0;

    

    //count
    while(tempN > 0){
        count++;
        tempN = tempN/10;
    }

    k= k % count;

    if(k<0){
        k= k+count;
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