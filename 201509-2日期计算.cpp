#include<stdio.h>
int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(){
	int y, d, i;
	scanf("%d %d", &y, &d);
	if((y % 4 == 0 && y % 100 != 0)|| (y % 400 == 0))
		days[1] = 29;
	for(i = 0; i < 12; i++){
		if(d > days[i])
			d -= days[i];
		else
			break;			
	}
	printf("%d\n%d", i+1, d);
} 
