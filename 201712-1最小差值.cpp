#include<iostream>
#include<math.h>
#include<stdio.h>
int main(){
	int n, num[1001], i, min=10001, j;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for(i = 0; i < n; i++)
		for(j = i+1; j < n; j++)
			if(abs(num[i] - num[j]) < min)
				min = abs(num[i] - num[j]);
	printf("%d", min);
}
