#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int mod = 1000000007;
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		long long int val;
		scanf("%lld",&val);
		a[i] = val%mod;
	}
	long long int b[n],j;
	for(i=0;i<n;i++){
		if(a[i]==-1){
			b[i] = -1;
		}
		else{
			int cnt = 1;
			for(j=i+1;j<n;j++){
				if(a[j]==a[i]){
					cnt += 1;
					a[j] = -1;
				}
			}
			b[i] = cnt;
		}
	}
	int q;
	scanf("%d",&q);
	while(q--){
		int ty;
		scanf("%d",&ty);
		if(ty==0){
			long long int k;
			scanf("%lld",&k);
			int p = 0;
			for(i=0;i<n;i++){
				if(b[i]>=k){
					p = 1;
					break;
				}
			}
			if(p){
				printf("%d\n",a[i]);
			}
			else{
				printf("0\n");
			}
		}
		else{
			long long int k;
			scanf("%lld",&k);
			int p = 0;
			for(i=0;i<n;i++){
				if(b[i]==k){
					p = 1;
					break;
				}
			}
			if(p){
				printf("%d\n",a[i]);
			}
			else{
				printf("0\n");
			}
		}
	}
}
