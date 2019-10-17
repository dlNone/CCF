#include<stdio.h>
#include<math.h>
int main(){
	int i, j, n, a[510][510], ii, jj, nn;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	i = 0; j = 0; nn = n * n / 2 + 1;
	while(nn--){
		if(i == 0 && j == 0){
			printf("%d ", a[i][j]);
			j++;
		}else if((i == 0 && j != 0) || (j == n-1)){
			for(ii = i, jj = j; jj >= 0; ii++, jj--){
				if((jj >= 0 && jj <= n-1) && (ii >= 0 && ii <= n-1))
					printf("%d ", a[ii][jj]);
				else
					break;
			}
			ii--; jj++;
			if(ii == n-1){
				i = ii; j = jj+1;
			}else{
				i = ii+1; j = jj;	
			}	
		}else if((i != 0 && j == 0) || (i == n-1)){
			for(ii = i, jj = j; ii >= 0; ii--, jj++){
				if((jj >= 0 && jj <= n-1) && (ii >= 0 && ii <= n-1))
					printf("%d ", a[ii][jj]);
				else
					break;
			}
			ii++; jj--;
			if(jj == n-1){
				i = ii+1; j = jj;
			}		
			else{
				i = ii; j = jj+1;
			}
		}
	}
}
