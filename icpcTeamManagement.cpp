#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		int i,a[101];
		for(i=0;i<=100;i++){
			a[i] = 0;
		}
		char ch[100];
		while(n--){
			scanf("%s",ch);
			int len = strlen(ch);
			a[len] += 1;
		}
		int ans = 1;
		for(i=0;i<=100;i++){
			if(a[i]%k!=0){
				ans = 0;
				break;
			}
		}
		if(ans==1){
			cout<<"Possible"<<endl;
		}
		else{
			cout<<"Not possible"<<endl;
		}
	}
}
