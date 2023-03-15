#include<stdio.h>
int main(){
	FILE* fp;
	fp = fopen("my.txt", "r");
	fscanf(fp, "%d %d", &a, &b);
	fclose(fp);
	printf ("%d\n", a + b);
}