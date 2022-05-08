                     //TREE\\
                     //day 1 , traversal in binary tree using recursion
                     //t.c O(node);
                     //s.c O(height);

#include<iostream>
using namespace std;
struct tree{
    int data;
    tree*left;
    tree*right;
};
void predisplay(tree *node){
    if(node==NULL){
        return;
    }
    predisplay(node->left);
    cout<<node->data<<" ";
    predisplay(node->right);
}
void podisplay(tree *node){
    if(node==NULL){
        return;
    }
    podisplay(node->right);
    podisplay(node->left);
    cout<<node->data<<" ";

}
void indisplay(tree *node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    indisplay(node->left);
    indisplay(node->right);

}
int main(){

tree a;
a.data=5;
tree b;
b.data=7;
tree c;
c.data=8;
a.left=&b;
b.left=NULL;
b.right=NULL;
a.right=&c;
c.left=NULL;
c.right=NULL;
cout<<a.data<<" "<<a.left->data<<" "<<a.right->data<<endl;
tree root=a;
cout<<"in order "<<endl;
indisplay(&a);
cout<<endl<<"pre order"<<endl;
predisplay(&a);
cout<<endl<<"post order"<<endl;
podisplay(&a);
return 0;
}                     