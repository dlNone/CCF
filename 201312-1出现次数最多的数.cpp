#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N, a[1001], i, max=0, j, temp=0, c=0;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++)
			if(a[i] == a[j])
				c++;
		if(c > max){
			max = c;
			temp = a[i];
		}
		else if(c == max && a[i] < temp)
			temp = a[i];
		c = 0;	
	}
	printf("%d", temp);
}
