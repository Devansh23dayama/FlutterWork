#include<stdio.h>
int main() {
	int n;
	printf("enter the no");
	scanf("%d",&n);
	int counter=0;
	for(int i=1; i<=n; i++) {
		if(n%i==0) {
			counter++;
		}
	}
	if(counter==2) {
		printf(" prime");
	}
	else {
		printf("is not prime no");
	}


	return 0;
}