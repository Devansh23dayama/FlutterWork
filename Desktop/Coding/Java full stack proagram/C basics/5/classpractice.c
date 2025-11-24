#include<stdio.h>
int main(){
    char ch ;
    printf("Enter a character: ");
    scanf("%c",&ch );
    
    if(ch=='m' || ch=='f')
    {
        int age ;
    printf("enter age ");
    scanf("%d",&age);
        if(ch=='m'){
           
            if(age>=21){
                printf("he can marry");

            } 
            else{
                printf("na balik");
            }
        }
            if (ch=='f'){
               
                if(age>18){
                    printf("she can marry");
                }
                else{
                    printf("na balik");
                }
            }
           
        }
        else{
            printf("invalid input");
        }
           
        return 0;        
}

