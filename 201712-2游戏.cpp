#include<stdio.h>
int main(){
	int n, k, n_child[1002] = {0}, num, i = 1, count=0;
	scanf("%d %d", &n, &k);
	num = n;
	while(num-1){
		if(k == 1){
			printf("%d", n);
			return 0;
		} 
		if(n_child[i] == 0){
			count++;
			if(count % 10 == k || count % k == 0){
				n_child[i] = 1;
				num--;
			}
		}
		i++;
		if (i == n+1)
			i = 1;
	}
	for(int i = 1; i < n; i++)
		if(!n_child[i])
			printf("%d\n", i);
} 
