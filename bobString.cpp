#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char ch[1000000];
		char str[1000000];
		gets(ch);
		gets(str);
		int a[26],b[26],i;
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
		int ans = 0;
		for(i=0;i<26;i++){
			ans += abs(a[i]-b[i]);
		}
		cout<<ans<<endl;
	}
}
