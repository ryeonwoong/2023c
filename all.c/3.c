#include<stdio.h>
int main(){
	int val[2];
	puts("Enter:");
	scanf("%d %d", &val[0], &val[1]);
	printf("%d\n", val[0] + val[1]);
}