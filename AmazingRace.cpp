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
		int b[n];
		b[0] = 1;
		for(i=1;i<n;i++){
			int j = i;
			while(j>=0){
				if(a[i]>a[j]){
					j--;
				}
				else{
					b[i] = i-j;
					break;
				}
			}
		}
		int max = a[0]*b[0],pos = 0;
		for(i=1;i<n;i++){
			if(a[i]*b[i]>max){
				max = a[i]*b[i];
				pos = i;
			}
		}
		cout<<pos+1<<endl;
	}
}
