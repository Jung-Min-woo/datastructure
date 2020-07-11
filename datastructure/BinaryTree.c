#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>
BTreeNode * MakeBTreeNode(void)
{
	BTreeNode* newtree = (BTreeNode*)malloc(sizeof(BTreeNode));
	newtree->left = NULL;
	newtree->right = NULL;
	return newtree;
}

BTData GetData(BTreeNode * bt){return bt->data;}
void SetData(BTreeNode * bt, BTData data){bt->data = data;}
BTreeNode * GetLeftSubTree(BTreeNode * bt){return bt->left;}
BTreeNode * GetRightSubTree(BTreeNode * bt){return bt->right;}
void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub)
{
	if (main->left != NULL) free(main->left);
	main->left = sub;
}
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub)
{
	if (main->right != NULL) free(main->right);
	main->right = sub;
}
