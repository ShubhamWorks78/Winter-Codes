#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans = 1;
	for(i=0;i<n-1;i++){
		if(a[i]<0){
			ans = 0;
			break;
		}
		a[i+1] -= a[i];
		a[i] = 0;
	}
	if(ans==0){
		printf("NO\n");
	}
	else{
		for(i=0;i<n;i++){
			if(a[i]!=0){
				ans = 0;
				break;
			}
		}
		if(ans==0){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
