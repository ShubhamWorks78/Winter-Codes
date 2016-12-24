#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	int a=0,b=0,c=0;
	for(i=0;i<n;i++){
		int v;
		scanf("%d",&v);
		if(v>a){
			c = b;
			b = a;
			a = v;
		}
		else if(v>b){
			c = b;
			b = v;
		}
		else if(v>c){
			c = v;
		}
		if(i<2){
			printf("-1\n");
		}
		else{
			printf("%d\n",a*b*c);
		}
	}
}
