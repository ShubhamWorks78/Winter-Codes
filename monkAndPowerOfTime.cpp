#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	queue<int> call;
	queue<int> ide;
	int i,val;
	for(i=0;i<n;i++){
		scanf("%d",&val);
		call.push(val);
	}
	for(i=0;i<n;i++){
		scanf("%d",&val);
		ide.push(val);
	}
	int time = 0;
	while(call.empty()==false){
		if(call.front()==ide.front()){
			call.pop();
			ide.pop();
		}
		else{
			int val = call.front();
			call.pop();
			call.push(val);
		}
		time += 1;
	}
	cout<<time<<endl;
}
