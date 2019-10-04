#include<stdio.h>
#include <iostream>
using namespace std;
int a[1001][1001]; 
int main(){
	int m, n, i, j; 
	scanf("%d %d", &m, &n);
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for(j = n-1; j >= 0; j--){
		for(i = 0; i < m; i++)
			printf("%d ", a[i][j]);
		printf("\n");
	}		
	return 0;
} 
