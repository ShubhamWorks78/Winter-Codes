#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rgt(int a[],int i,int n){
	if(i==n-1){
		return 0;
	}
	int j;
	for(j=i+1;j<n;j++){
		if(a[j]>=a[i]){
			return (j-i);
		}
	}
	return (n-i-1);
}
int lft(int a[],int i,int n){
	if(i==0){
		return 0;
	}
	int j;
	for(j=i-1;j>=0;j--){
		if(a[j]>=a[i]){
			return i-j;
		}
	}
	return i;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int an[n];
		for(i=0;i<n;i++){
			int left = lft(a,i,n);
			int right = rgt(a,i,n);
			an[i] = (left+right)*(i+1);
		}
		
		int pos = 0,max = an[0];
		for(i=1;i<n;i++){
			if(an[i]>max){
				max = an[i];
				pos = i;
			}
		}
		cout<<pos+1<<endl;
	}
}
