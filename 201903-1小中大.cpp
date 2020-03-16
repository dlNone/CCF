#include<stdio.h>
int main(){
	int n, i, max, min, t, a[100001];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	max = a[0] > a[n-1] ? a[0] : a[n-1];
	min = a[0] < a[n-1] ? a[0] : a[n-1];
	if(n % 2 == 0){
		t = a[n / 2 - 1] + a[n / 2];
		if(t % 2 == 0)
			printf("%d %d %d", max, t / 2, min);
		else
			printf("%d %.1f %d", max, t / 2.0, min);
	}else
		printf("%d %d %d", max, a[n / 2], min);
}
