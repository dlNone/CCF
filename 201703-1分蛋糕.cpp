#include<stdio.h>

int main(){
	int n, k, cake, each=0, friends=0;
	scanf("%d %d", &n, &k);
	while(n--){
		scanf("%d", &cake);
		each += cake;
		if(each >= k){
			friends++;
			each = 0;
		}
	}
	if(each > 0)
		friends++;
	printf("%d", friends);
}
