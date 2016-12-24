#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ALPHABET_SIZE 26
#define CHAR_TO_INDEX(c) ((int)c-(int)'a')
struct trieNode{
	struct trieNode *children[ALPHABET_SIZE];
	bool isLeaf;
};
struct trieNode *getNode(){
	struct trieNode *newNd = new trieNode;
	newNd->isLeaf = false;
	int i;
	for(i=0;i<ALPHABET_SIZE;i++){
		newNd->children[i] = NULL;
	}
	return newNd;
}
int insert(struct trieNode *root,char *str){
	int len = strlen(str);
	int level;
	int cnt = 0;
	int index;
	struct trieNode *pNode = root;
	for(level=0;level<len;level++){
		index = CHAR_TO_INDEX(str[level]);
		if(!pNode->children[index]){
			pNode->children[index] = getNode();
			cnt += 1;
		}
		pNode = pNode->children[index];
	}
	pNode->isLeaf = true;
	return cnt;
}
int main(){
	int n;
	cin>>n;
	struct trieNode *root = getNode();
	int ans = 1;
	while(n--){
		char ch[30];
		cin>>ch;
		ans += insert(root,ch);
	}
	cout<<ans;
}
