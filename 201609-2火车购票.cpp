#include<stdio.h>
int main(){
	int seats[20][5]={0}, i, j, n, buy, row, k, flag, start;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &buy);
		flag = 0;
		for(i = 0; i < 20; i++){				
			for(j = 0; j < 5; j++){
				if(seats[i][j] == 0){
					row = 0;
					start = j;
					for(k = j; k < 5; k++)
						if(seats[i][k] == 0)
							row++;
					if(row >= buy){
						flag = 1;
						for(k = start+1; k <= start+buy; k++){
							printf("%d ", 5*i+k);
							seats[i][k-1] = 1;
						}
						break;
					}
				}	
			}
			if(flag)
				break;
		}
		printf("\n");
	}
}
