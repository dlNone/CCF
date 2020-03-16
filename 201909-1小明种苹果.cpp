#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n, m, a, i, sum=0, max=0, maxp=0, t, sumj, j;
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++){
		scanf("%d", &t);
		sum += t;
		sumj = 0;
		for(j = 0; j < m; j++){
			scanf("%d", &a);
			sumj += a;
		}
		sumj = abs(sumj);
		if(sumj > max){
			max = sumj;
			maxp = i;
		}
		sum -= sumj;
	}
	printf("%d %d %d", sum, maxp+1, max);
}
/*
3 3
73 -8 -6 -4
76 -5 -10 -8
80 -6 -15 0

2 2
10 -3 -1
15 -4 0
*/
