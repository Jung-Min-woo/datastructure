#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;
typedef void(*VisitFuncPtr)(BTData data);

typedef struct _bTreeNode {
	BTData data;
	struct _bTreeNode *left;
	struct _bTreeNode *right;
}BTreeNode;

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode *bt);
void SetData(BTreeNode *bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode *bt);
BTreeNode* GetRightSubTree(BTreeNode *bt);

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void MakeRightSubTree(BTreeNode *main, BTreeNode *sub);
//Traverse
void Traverse_InOrder(BTreeNode *target, VisitFuncPtr action);
void Traverse_PreOrder(BTreeNode *target, VisitFuncPtr action);
void Traverse_PostOrder(BTreeNode *target, VisitFuncPtr action);
void DeleteTree(BTreeNode *target);
BTreeNode* RemoveLeftSubTree(BTreeNode *bt);
BTreeNode* RemoveRightSubTree(BTreeNode *bt);
void ChangeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void ChangeRightSubTree(BTreeNode *main, BTreeNode *sub);
#endif