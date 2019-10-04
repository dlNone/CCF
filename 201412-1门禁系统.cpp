#include<stdio.h>
int main(){
	int N, i, j, c=0, a[1001], b[1001];
	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for(i = N-1; i >=0; i--){
		for(j = i; j>= 0; j--)
			if(a[i] == a[j])
				c++;
		b[i] = c;
		c = 0;
	}
	for(i = 0; i < N; i++)
		printf("%d ", b[i]);	
}
