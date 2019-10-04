#include<stdio.h>
int main(){
	int step, score=1, sum=0;
	while(scanf("%d", &step) && step != 0){
		if(sum == 0 && step == 2)
			score = 2;
		else if(step == 1)
			score = 1;
		else if(step == 2 && score == 1)
			score = 2;
		else if(step == 2 && score >= 2)
			score += 2;
		sum += score;
	}
	printf("%d", sum);
}
