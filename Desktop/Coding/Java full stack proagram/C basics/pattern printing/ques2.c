#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
        int t=1;
for(int j=n;j>=1;j--){

            if(j<=i) {
            printf("%d ",t);
    }

    else printf("  ");
   
}
printf("\n");
    }
    return 0;
}
