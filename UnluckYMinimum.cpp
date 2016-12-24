#include<iostream>
#include<limits.h>
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
		int min = INT_MAX;
		for(i=0;i<n;i++){
			if(a[i]<min){
				min = a[i];
			}
		} 
		int cnt = 0;
		for(i=0;i<n;i++){
			if(a[i]==min){
				cnt += 1;
			}
		}
		if(cnt%2==1){
			cout<<"Lucky"<<endl;
		}
		else{
			cout<<"Unlucky"<<endl;
		}
	}
}
