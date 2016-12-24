#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int b[n];
		int g[n];
		int i;
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
			b[i] -= 1;
		}
		for(i=0;i<n;i++){
			scanf("%d",&g[i]);
			g[i] -= 1;
		}
		int ans = 0;
		int beat[n],beatg[n],bb[n],bg[n];
		for(i=0;i<n;i++){
			beat[i] = 0;
			beatg[i] = 0;
			bb[i] = -1;
			bg[i] = -1;
		}
		for(i=0;i<n;i++){
			if(g[b[i]]!=i){
				beat[g[b[i]]] += 1;
				bb[i] = g[b[i]];
			}
			if(b[g[i]]!=i){
				beatg[b[g[i]]] += 1;
				bg[i] = b[g[i]];
			}
		}
		int max = 0;
		for(i=0;i<n;i++){
			if(beat[i]>max){
				max = beat[i];
			}
			if(beatg[i]>max){
				max = beatg[i];
			}
		}
		for(i=0;i<n;i++){
			int m = bb[i];
			if(i==bb[m]){
				ans += 1;
			}
			m = bg[i];
			if(i==bg[m]){
				ans += 1;
			}
		}
		if(ans==2){
			ans = 0;
		}
		cout<<max<<" "<<ans/2<<endl;
	}
}
