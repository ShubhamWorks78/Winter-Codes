#include<iostream>
#include<list>
using namespace std;
int main(){
	int i,n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int hash[20];
	for(i=0;i<20;i++){
		hash[i] = 0;
	}
	for(i=0;i<n;i++){
		hash[a[i]] += 1;
	}
	int max = 0,pos=0;
	for(i=0;i<20;i++){
		if(max<=hash[i]){
			max = hash[i];
			pos = i;
		}
	}
	int wt = 0;
	while(k>0){
		if(max>k){
			wt += k*pos;
			hash[pos-1] += k;
			break;
		}
		else{
			k -= max;
			wt += max*pos;
			hash[pos-1] += max;
			max = hash[pos-1];
			pos -= 1;
		}
	}
	cout<<wt;
}
