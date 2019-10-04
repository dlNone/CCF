#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
	int n, max=-1, a, t;
	scanf("%d", &n);
	scanf("%d", &t);
	while(--n){
		scanf("%d", &a);
		if(abs(a-t) > max)
			max = abs(a-t);
		t = a; 
	}
	printf("%d", max);
} 
