#include<iostream>
using namespace std;
int root(int arr[],int i){
	while(arr[i]!=i){
		arr[i] = arr[arr[i]];
		i = arr[i];
	}
	return i;
}
void uni(int arr[],int a,int b){
	int root_a = root(arr,a);
	int root_b = root(arr,b);
	arr[root_a] = root_b;
}
bool find(int arr[],int a,int b){
	if(root(arr,a)==root(arr,b)){
		return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int i,arr[n];
	for(i=0;i<n;i++){
		arr[i] = i;
	}
	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		a -= 1,b -= 1;
		uni(arr,a,b);
	}
	int def = 0;
	int hash[n]={0};
	int par[n];
	for(i=0;i<n;i++){
		par[i] = root(arr,i);
	}
	for(i=0;i<n;i++){
		hash[par[i]]++;
	}
	for(i=0;i<n;i++){
		if(hash[i]>0){
			def += 1;
		}
	}
	cout<<def;
}
