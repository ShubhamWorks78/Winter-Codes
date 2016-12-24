#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,q;
	scanf("%d",&q);
	int a[100000];
	for(i=0;i<100000;i++){
		a[i] = 0;
	}
	while(q--){
		int ty;
		scanf("%d",&ty);
		if(ty==1){
			int x;
			cin>>x;
			a[x] += 1;
		}
		else if(ty==2){
			int x;
			cin>>x;
			if(a[x]==0){
				cout<<"-1"<<endl;
			}
			else{
				a[x] -= 1;
			}
		}
		else if(ty==3){
			int mx = 0;
			for(i=9999;i>=0;i--){
				if(a[i]>0){
					mx = i;
					break;
				}
			}
			cout<<mx<<endl;
		}
		else if(ty==4){
			int my = 0;
			for(i=0;i<=9999;i++){
				if(a[i]>0){
					my = i;
					break;
				}
			}
			cout<<my<<endl;
		}
	}
}
