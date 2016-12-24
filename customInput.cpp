#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		char ch[100];
		cin>>ch;
		int i = 0,c = 2;
		int len = strlen(ch);
		for(i=0;i<=(len-1)/2;i+=2){
			cout<<ch[i];
		}
		cout<<endl;
	}
}
