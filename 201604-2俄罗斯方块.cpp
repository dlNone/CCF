#include<stdio.h>
int main(){
	int a[16][10], b[5][4], i, j, n, min;
	for(i = 0; i < 15; i++)
		for(j = 0; j < 10; j++)
			scanf("%d", &a[i][j]);
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
			scanf("%d", &b[i][j]);
	scanf("%d", &n); 
	for(j = n-1; j < 4+n-1; j++)
		a[15][j] = 16;
	for(j = n-1; j < 4+n-1; j++)
		for(i = 0; i < 15; i++)
			if(a[i][j] == 1){
				a[15][j] = i+1;
				break;
			}
	for(j = 0; j < 4; j++)
		b[4][j] = 1;
	for(j = 0; j < 4; j++)
		for(i = 3; i >= 0; i--){
			if(b[i][j] == 1){
				b[4][j] = i+1;
				break;
			}
		}
	min = 30;
	for(i = 0; i < 4; i++){
		if(a[15][i+n-1] + 4 - b[4][i] < min)
			min = a[15][i+n-1] + 4 - b[4][i];
	}
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++){
			if(a[i+min-5][j+n-1] == 0 && b[i][j] == 1)
				a[i+min-5][j+n-1] = b[i][j];
		}
	for(i = 0; i < 15; i++){
		for(j = 0; j < 10; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
} 
