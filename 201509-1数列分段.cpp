#include<stdio.h>
int main(){
	int n, i, c=0, a, t;
	scanf("%d", &n);
	scanf("%d", &t);
	c++;
	for(i = 0; i < n-1; i++){
		scanf("%d", &a);
		if(a!=t){
			c++;
			t=a;
		}
	}
	printf("%d", c);
} 
