#include<stdio.h>
int main(){
	char a[13];
	int sum=0, i=0, k=1;
	scanf("%s", &a);
	while(i < 12){
		if(a[i]!='-'){
			sum = sum + ((a[i]-'0')*k);
			k++;
		}
		i++;
	}
	if((sum % 11 == 10 && a[i] == 'X') || (sum % 11 == a[i]-'0'))
		printf("Right");
	else if(sum % 11 == 10){
		a[12] = 'X';
		printf("%s", a);
	}else{
		a[12] = (sum % 11)+'0';
		printf("%s", a);
	}
}
