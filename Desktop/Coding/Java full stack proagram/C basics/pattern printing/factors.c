#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    
    for(int i =2;n>1 ;){
       
        if(n%i==0){
        n=n/i;
        printf("%d ",i);
        }
        else i++;
    }

return 0;
}