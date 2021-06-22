#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
//二叉树顺序存储结构
#define MaxSize 100
struct TreeNode
{
	int val;
	bool isEmpty;
};

struct ElemType
{
	int val;
};
//二叉树链式存储结构
typedef struct BiTNode
{
	ElemType data;
	struct BiTNode *lchild, *rchild;	//左右孩子指针
	//看需求增不增加父结点
	struct BiNode *parent;				//父结点指针
}BiTNode,*BiTree;

//先序遍历
void PreOrder(BiTree T)
{
	if (T != NULL)
	{
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

//中序后序和先序遍历类似
//链队列结点
typedef struct LinkNode
{
	BiTNode *data;
	struct LinkNode *next;
}LinkNode;

typedef struct
{
	LinkNode *front, *rear;
}LinkQueue;
//层序遍历
void LevelOrder(BiTree T)
{
	LinkQueue q;
	InitQueue(q);
	BiTree p;
	EnQueue(q, T);
	while (!IsEmpty(q))
	{
		Dequeue(q, p);
		visit(p);
		if (p->lchild != NULL)
			EnQueue(q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(q, p->rchild);
	}
}

//线索二叉树结点
typedef struct ThreadNode
{
	int data;
	struct ThreadNode *lchild, *rchild;
	int ltag, rtag;//左右线索标志
}ThreadNode, *ThreadTree;

//中序遍历二叉树，一边遍历一边线索化
void InThread(ThreadTree T)
{
	if (T != NULL)
	{
		InThread(T ->lchild);
		visit(T);
		InThread(T ->rchild);
	}
}
//全局变量pre指向当前访问结点的前驱
ThreadNode *pre = NULL;

void visit(ThreadNode *q)
{
	if (q->lchild == NULL)
	{
		q->lchild = pre;
		q->ltag = 1;
	}
	if (pre != NULL && pre->lchild == NULL)
	{
		pre->rchild = q;
		pre->rtag = 1;
	}
	pre = q;
}

//中序线索化二叉树T
void CreateInThread(ThreadTree T)
{
	pre = NULL;
	if (T != NULL)
	{
		InThread(T);
		if (pre->rchild == NULL)
			pre->rtag = 1;
	}
}
int main()
{
	//TreeNode t[MaxSize];
	//定义一个长度为MaxSize的数组t，按照从上至下，从左至右的顺序依次存储完全二叉树中的各个节点
	//定义一颗空树
	BiTree root = NULL;

	//插入根结点
	root = (BiTree)malloc(sizeof(BiTNode));
	root->data = { 1 };
	root->lchild = NULL;
	root->rchild = NULL;

	//插入新结点
	BiTNode *p = (BiTNode*)malloc(sizeof(BiTNode));
	p->data = { 2 };
	p->lchild = NULL;
	p->rchild = NULL;
	root->lchild = p;

	return 0;
}