#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newNode(int v){
	struct node *newNd = new node;
	newNd->data = v;
	newNd->left = NULL;
	newNd->right = NULL;
	return newNd;
}
struct node *insert(struct node *root,int va,int *v){
	if(root==NULL){
		return newNode(va);
	}
	else if(root->data>va){
		root->left = insert(root->left,va,v);
	}
	else if(root->data<va){
		root->right = insert(root->right,va,v);
	}
	else if(root->data==va){
		*v = 1;
	}
	return root;
}
/*int count(struct node *root){
	if(root==NULL){
		return 0;
	}
	return 1+count(root->left)+count(root->right);
}*/
int main(){
	int t;
	cin>>t;
	while(t--){
		struct node *root=NULL;
		int n,k;
		cin>>n>>k;
		/*while(n--){
			int val;
			cin>>val;
			root = insert(root,val);
		}*/
		while(n--){
			int v = 0;
			int val;
			cin>>val;
			root = insert(root,val,&v);
		}
		while(k--){
			int v = 0;
			int val;
			cin>>val;
			root = insert(root,val,&v);
			if(v==1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}	
		}
		
		/*int cnt = count(root);
		if(cnt==k){
			cout<<"Good"<<endl;
		}
		else if(cnt>k){
			cout<<"Average"<<endl;
		}
		else{
			cout<<"Bad"<<endl;
		}*/
	}
}
