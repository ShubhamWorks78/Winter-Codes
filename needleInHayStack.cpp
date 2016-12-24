#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b[]){
	int i;
	for(i=0;i<26;i++){
		if(a[i]!=b[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char ch[1000];
		char str[100000];
		cin>>ch;
		cin>>str;
		int a[26],b[26],i;
		for(i=0;i<26;i++){
			a[i] = 0;
			b[i] = 0;
		}
		for(i=0;ch[i]!='\0';i++){
			a[ch[i]-'a']++;
		}
		for(i=0;ch[i]!='\0';i++){
			b[str[i]-'a']++;
		}
		int l2 = strlen(str);
		int l1 = strlen(ch);
		int ans = 1;
		int chck = check(a,b);
		for(i=1;i<=(l2-l1) && !chck;i++){
			b[str[i+l1-1]-'a'] += 1;
			b[str[i-1]-'a'] -= 1;
			chck = check(a,b);
		}
		if(chck==0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}
