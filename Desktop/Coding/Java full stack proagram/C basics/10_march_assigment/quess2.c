#include<stdio.h>
int main(){
    int i=2;
    while(i<=20){
        if(i%2==0){
            printf("%d  is even \n ",i);
        } 
      /*  else{
            printf("%d  not even ",i);
        }*/
        i++;
    }
   
return 0;
}