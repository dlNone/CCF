#include<stdio.h>
int main(){
	int N, M, a[12][12], i, j, x, y, k, l, flag;
	scanf("%d %d", &N, &M);
	for(i = 0; i < N; i++){
		for(j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
		a[i][4] = i+1;
	}
		
	for(k = 0; k < M; k++){
		scanf("%d %d", &x, &y);
		flag = 1; 
		for(i=N-1; i >= 0; i--){
			if(x >= a[i][0] && x <= a[i][2] && y >= a[i][1] && y <= a[i][3]){
				printf("%d\n", a[i][4]);
				a[N][0] = a[i][0]; a[N][1] = a[i][1]; a[N][2] = a[i][2]; a[N][3] = a[i][3]; a[N][4] = a[i][4];
				for(j = i; j <= N; j++)
					for(l = 0; l <= 4; l++)
						a[j][l] = a[j+1][l];
				flag=0;			
				break;
			}
		}
		if(flag)
			printf("IGNORED\n");	
	}
}
