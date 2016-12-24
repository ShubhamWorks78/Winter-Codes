#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int i,par[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	par[0] = 1;
	for(i=1;i<n;i++){
		cin>>par[i];
	}
	int up[i];
	up[0] = 1;
	for(i=1;i<n;i++){
		up[i] = up[par[i]-1];
	}
	int j,ans = 0;
	for(i=1;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(par[i]==par[j] && par[i]!=j && par[j]!=i){
				if(a[i]+a[j]+a[par[i]-1]>=k){
					ans += 1;
				}
			}
			if(up[i]==up[j] && up[i]!=j && up[j]!=i){
				if(a[i]+a[j]+a[up[i]-1]>=k){
					ans += 1;
				}
			}
		}
	}
	cout<<ans;
}
