#include<stdio.h>
int main(){
	int n, a[1001], i, c=0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 1; i < n-1; i++)\
		if((a[i-1] < a[i] && a[i+1] < a[i]) |(a[i-1] > a[i] && a[i+1] > a[i]))
			c++;
	printf("%d", c); 
}
