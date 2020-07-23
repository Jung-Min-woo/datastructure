#include "BinarySearchTree.h"
#include <stdlib.h>

void BSTMakeAndInit(BTreeNode ** pRoot)
{
	*pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode * bst)
{
	return GetData(bst);
}

void BSTInsert(BTreeNode ** pRoot, BSTData data)
{
	BTreeNode *pNode = NULL; // parent Node
	BTreeNode *cNode = *pRoot; // current Node
	BTreeNode *nNode = NULL; // new Node

	while (cNode != NULL) {
		if (data == GetData(cNode)) return; // 데이터 중복을 허용하지 않음
		pNode = cNode;	
		if (GetData(cNode) > data) cNode = GetLeftSubTree(cNode);
		else cNode = GetRightSubTree(cNode);
	}
	nNode = MakeBTreeNode();
	SetData(nNode, data);
	if (pNode != NULL) {
		if (data < GetData(pNode)) MakeLeftSubTree(pNode, nNode);
		else MakeRightSubTree(pNode, nNode);
	}
	else *pRoot = nNode;
}

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target)
{
	BTreeNode *cNode = bst;
	BSTData cd;
	while (cNode != NULL) {
		cd = GetData(cNode);
		if (target == cd) return cNode;
		else if (target < cd) cNode = GetLeftSubTree(cNode);
		else cNode = GetRightSubTree(cNode);
	}
	return NULL;
}
