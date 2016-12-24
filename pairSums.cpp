#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[1000000];
	for(i=0;i<1000000;i++){
		b[i] = 0;
	}
	for(i=0;i<n;i++){
		b[a[i]]++;
	}
	int ans = 1;
	if(k%2==1){
		for(i=k;i>=k/2;i--){
			if(b[i] && b[k-i]){
				ans = 0;
				break;
			}
		}
	}
	else{
		for(i=k;i>=k/2;i--){
		if(b[i] && b[k-i]){
			if(i==k/2){
				if(b[i]<2){
					continue;
				}
			}
			ans = 0;
			break;
		}
	}
	}
	if(ans){
		printf("NO");
	}
	else{
		printf("YES");
	}
}
