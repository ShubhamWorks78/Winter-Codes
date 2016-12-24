#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char ch[100000];
		char str[100000];
		cin>>ch;
		cin>>str;
		int ans = 1;
		int i,j;
		int a[26];
		int b[26];
		for(i=0;i<26;i++){
			a[i] = 0;
			b[i] = 0;
		}
		for(i=0;ch[i]!='\0';i++){
			a[ch[i]-'a']++;
		}
		for(i=0;str[i]!='\0';i++){
			b[str[i]-'a']++;
		}
		for(i=0;i<26;i++){
			if(b[i] && a[i]){
				ans = 0;
				break;
			}
		}
		if(ans==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
