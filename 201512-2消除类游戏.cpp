#include<stdio.h>
int a[31][31], b[31][31];
int main(){
	int n, m, i, j, k, num;
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j];
		}
	
	for(i = 0; i < n; i++){
		num = 1;
		for(j = 1; j < m; j++){
			if(a[i][j] == a[i][j-1])
				num++;
			if(j == m-1 || a[i][j] != a[i][j-1]){
				if(num >= 3 && a[i][j] != a[i][j-1])
					for(k = 0; k < num; k++)
						b[i][j-k-1] = 0;
				if(num >= 3 && a[i][j] == a[i][j-1])
					for(k = 0; k < num; k++)
						b[i][j-k] = 0;
				num = 1;
			}
		}
	}
	for(j = 0; j < m; j++){
		num = 1;
		for(i = 1; i < n; i++){
			if(a[i][j] == a[i-1][j])
				num++;
			if(i == n-1 || a[i][j] != a[i-1][j]){
				if(num >= 3 && a[i][j] == a[i-1][j])
					for(k = 0; k < num; k++)
						b[i-k][j] = 0;
				if(num >= 3 && a[i][j] != a[i-1][j])
					for(k = 0; k < num; k++)
						b[i-k-1][j] = 0;
			num = 1;
			}
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++)
			printf("%d ", b[i][j]); 
		printf("\n");
	}
}
		
