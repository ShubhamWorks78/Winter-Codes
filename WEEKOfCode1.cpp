#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int des;
	cin>>des;
	float st;
	st = (ceil)((des-1)/2.0);
	float lst;
	if(n%2==0){
		lst = (ceil)((n-des)/2.0);
	}
	else{
		lst = (floor)((n-des)/2.0);
	}
	int lt,sst;
	sst = (int)st;
	lt = (int)lst;
	int ans = (st<lst)?st:lst;
	cout<<ans;
}
