#include<stdio.h>

int main(){
	int n, i, j, a[101][101] =  {0}, x1, y1, x2, y2, c=0;
	scanf("%d", &n);
	while(n--){
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for(i = x1; i < x2; i++)
			for(j = y1; j < y2; j++)
				a[i][j] = 1;
	}
	for(i = 0; i < 101; i++)
		for(j = 0; j < 101; j++)
			if(a[i][j] == 1)
				c++;	
	printf("%d", c);	
} 
