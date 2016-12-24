#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch[1000];
	gets(ch);
	int a[255],i;
	for(i=0;i<255;i++){
		a[i] = 0;
	}
	for(i=0;ch[i]!='\0';i++){
		int vl = ch[i];
		a[ch[i]] += 1; 
	}
	int max = 0,pos = 0;
	for(i=0;i<255;i++){
		if(a[i]>max){
			max = a[i];
			pos = i;
		}
	}
	printf("%c %d",pos,max);
}
