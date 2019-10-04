#include<stdio.h>

int main(){
	int N, i, j, c=0, a[1001];
	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < N; i++)
		for(j = i+1; j < N; j++)
			if(a[i] - a[j] == 1 || a[i] - a[j] == -1)
				c++;
	printf("%d", c);
} 
