#include<stdio.h>
int main() {
	int n,extract;
	printf("enter the no");
	scanf("%d",&n);
     int count =0;
     while(n!=0){
extract=n%10;
count++;
n=n/10;
}

printf("%d",count);

}