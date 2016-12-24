#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p;
	cin>>n>>p;
	int i,a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int has[100000] = {0},max = 0;
	for(i=0;i<n;i++){
		float val = ((float)a[i]/p);
	
		int vl = ceil(val);
		while(has[vl]!=0){
			vl += 1;
		}
		if(vl>max){
			max = vl;
		}
		has[vl] = 1;
	}
	int ans = 0;
	for(i=0;i<=max;i++){
		if(has[i]){
			ans += i;
		}
	}
	cout<<ans<<endl;
	
}
