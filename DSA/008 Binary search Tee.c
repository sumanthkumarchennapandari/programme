#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

typedef struct tnode
{
    int value;
    struct tnode *leftchild;
    struct tnode *rightchld;
}treenode;

treenode *createnode(int value)
{
    treenode *result = (struct tnode *)malloc(sizeof(treenode));
    if(result != NULL)
    {
        result->leftchild = NULL;
        result->rightchld = NULL;
        result->value = value;
    }
    return result;
}

treenode *insertnode(treenode *rootptr,int value)
{
    if(rootptr == NULL)
    {
        return createnode(value);
    }
    else if(value == rootptr -> value)
    {
        printf("The Value Is Duplicate.....");
    }
    else if(value > rootptr->value)
    {
        rootptr->rightchld = insertnode(rootptr->rightchld,value);
    }
    else if(value < rootptr->value)
    {
        rootptr->leftchild = insertnode(rootptr->leftchild,value);
    }
    else 
    {
        return NULL;
    }
}

void inordertraversal(treenode *root)
{
    if(root)
    {
        inordertraversal(root->leftchild);
        printf("%d -> ",root->value);
        inordertraversal(root->rightchld);
    }
}

void preordertraversal(treenode *root)
{
    if(root)
    {
        printf("%d -> ",root->value);
        inordertraversal(root->leftchild);
        inordertraversal(root->rightchld);
    }
}

void postordertraversal(treenode *root)
{
    if(root)
    {
        inordertraversal(root->leftchild);
        inordertraversal(root->rightchld);
        printf("%d -> ",root->value);
    }
}

int main()
{
    treenode *root = createnode(20);
    insertnode(root,30);
    insertnode(root,10);
    inordertraversal(root);
    printf("NULL\n\n");
    preordertraversal(root);
    printf("NULL\n\n");
    postordertraversal(root);
    printf("NULL\n\n");
}