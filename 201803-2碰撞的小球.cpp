#include<stdio.h>
#include<iostream>
#include<algorithm>

//0为正向，1为负向 
int main(){
	int p[101], o[101]={0};
	int n, l, t, i, j, k;
	scanf("%d%d%d", &n, &l, &t);
	for(i = 0; i < n; i++)
		scanf("%d", &p[i]);
	for(i = 0; i < t; i++){
		for(j = 0; j < n; j++){
			if(!o[j] && p[j] < l)
				p[j]++;	
			else if(o[j] && p[j] > 0){
				p[j]--;
			}
			else if(p[j] == l){
				p[j]--;
				o[j] = 1;
			}
			else if(p[j] == 0){
				p[j]++;
				o[j] = 0;	
			} 
		}
		for(j = 0; j < n; j++){
			for(k = j+1; k < n; k++){
				if(p[j] == p[k]){
					o[j] = !o[j];
					o[k] = !o[k];
				}
			}
		}
	}
	for(i = 0; i < n; i++)
		printf("%d ", p[i]);
} 
