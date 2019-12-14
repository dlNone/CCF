#include<stdio.h>
int main(){
	int r, g, y, n, k, t, sum=0;
	scanf("%d %d %d %d", &r, &g, &y, &n);
	while(n--){
		scanf("%d %d", &k, &t);
		if(k == 0 || k == 1)
			sum += t;
		else if(k == 2){
			sum += t;
			sum += r;
		}
	}
	printf("%d", sum);
}
