#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch=='q'||ch=='w'||ch=='e'||ch=='r'||ch=='t'||ch=='y'||ch=='u'||ch=='i'||ch=='o'||ch=='p'){
        printf("the entered chacter is upper line");
    }
    else{
        printf("the entered chacter is lower line");
    }
    return 0;
}