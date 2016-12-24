#include<iostream>
#include<list>
#include<stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	list<int> harr;
	while(n--){
		int val;
		cin>>val;
		harr.push_back(val);
	}
	stack<int> monk;
	int q,k;
	cin>>q>>k;
	int sum = 0;
	while(q--){
		string str;
		cin>>str;
		if(str=="Harry"){
			int val = harr.front();
			harr.pop_front();
			sum += val;
			monk.push(val);
			if(sum==k){
				cout<<monk.size()<<endl;
				break;
			}
		}
		else if(str=="Remove"){
			int val = monk.top();
			monk.pop();
			sum -= val;
			if(sum==k){
				cout<<monk.size()<<endl;
				break;
			}
		}
	}
	cout<<"-1"<<endl;
}
