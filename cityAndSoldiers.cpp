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
	int n,q;
	cin>>n>>q;
	int i,arr[n];
	for(i=0;i<n;i++){
		arr[i] = i;
	}
	while(q--){
		int ch;
		cin>>ch;
		if(ch==1){
			int a,b;
			cin>>a>>b;
			a -= 1;
			b -= 1;
			uni(arr,a,b);
		}
		else if(ch==2){
			int a;
			cin>>a;
			a -= 1;
			int root_a = root(arr,a);
			arr[root_a] = a;
			arr[a] = a;
		}
		else if(ch==3){
			int b;
			cin>>b;
			b -= 1;
			int root_b = root(arr,b)+1;
			cout<<root_b;
		}
	}
}
