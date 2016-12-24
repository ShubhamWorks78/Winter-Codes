#include<iostream>
#include<list>
using namespace std;
int find(list<int> adj[],int l,int ke){
	list<int>::iterator it;
	for(it=adj[l].begin();it!=adj[l].end();it++){
		if(*it==ke){
			return 1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int j;
	list<int> adj[n+1];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(find(adj,a[i],a[j])==-1){
				adj[a[i]].push_back(a[j]);
			}
		}
	}
	int ans = 0;
	for(i=1;i<=n;i++){
		list<int>::iterator it;
		for(it=adj[i].begin();it!=adj[i].end();it++){
			ans += 1;
		}
	}
	cout<<ans;
}
