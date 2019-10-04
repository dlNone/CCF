#include<stdio.h>
int main(){
	int N, bottles = 0;
	scanf("%d", &N);
	bottles += (N / 50) * 7;
	N %= 50;
	bottles += (N / 30) * 4;
	N %= 30;
	bottles += N / 10;
	printf("%d", bottles); 
}
