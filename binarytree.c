#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*left;
    struct node*right;
    int data;
};
struct node *createnode(int data){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node *root){
   if(root!=NULL){
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main(){
  struct node*p= createnode(2);
   struct node *p1=createnode(3);
   struct node *p2=createnode(7);
   struct node *p3=createnode(90);
   struct node *p4=createnode(76);
   preorder(p1);
   return 0;
}