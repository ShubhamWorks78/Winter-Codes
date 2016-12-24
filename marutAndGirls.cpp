#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int v,i;
	int ab[10000];
	for(i=0;i<10000;i++){
		ab[i] = 0;
	}
	for(i=0;i<n;i++){
		cin>>n;
		ab[n-1] = 1; 
	}
	int q;
	scanf("%d",&q);
	int ll = 0;
	while(q){
		int quali[10000];
		for(i=0;i<10000;i++){
			quali[i] = ab[i];
		}
		int val;
		while(cin.get()!='\n'){
			cin>>val;
			quali[val-1] -= 1;
		}
		int ans = 1;
		for(i=0;i<10000;i++){
			if(quali[i]==1){
				ans = 0;
				
			}
		}
		if(ans==1){
			ll += 1;
		}
		q -= 1;
	}
	cout<<ll;
}
