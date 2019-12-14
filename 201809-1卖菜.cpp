#include<stdio.h>
int main(){
	int n, i, j, a[1001];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d ",(a[0] + a[1])/2);
	for(i = 1; i < n-1; i++)
		printf("%d ", (a[i-1] + a[i] + a[i+1])/3);
	printf("%d", (a[i-1] + a[i])/2);
} 
