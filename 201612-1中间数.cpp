#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, i, j, a[1001], b[1001], k=0, s, h;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n; i++){
		s = 0; h = 0;
		for(j = 0; j < n; j++){
			if(a[j] > a[i])
				h++;
			else if(a[j] < a[i])
				s++;
		}
		if(h == s)
			b[k++] = a[i];
	}
	if(k!=0){
		int *p = unique(b, b+k-1);
		for(i = 0; i < p-b; i++)
			printf("%d ",b[i]);
	} 
	else
		printf("-1");
}
