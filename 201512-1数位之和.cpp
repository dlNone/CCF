#include<stdio.h>

int main(){
	int n, i, j, a[1001], b[1001], k=0, s, h;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n; i++){
		s = 0; h = 0;
		for(j = 0; j < n; j++){
			if(a[j] > a[i])
				h++;
			else if(a[j] < a[i])
				s++;
		}
		if(h == s){
			printf("%d", a[i]);
			return 0;
		}			
	}
	printf("-1");
}
