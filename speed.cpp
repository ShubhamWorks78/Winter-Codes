#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int ans = 1;
		for(i=1;i<n;i++){
			if(a[i]<=a[i-1]){
				ans += 1;
			}
		}
		cout<<ans<<endl;
	}
}
