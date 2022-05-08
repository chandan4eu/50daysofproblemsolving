                     //TREE\\

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
    cout<<node->data<<endl;
    predisplay(node->right);
}
void podisplay(tree *node){
    if(node==NULL){
        return;
    }
    podisplay(node->right);
    podisplay(node->left);
    cout<<node-

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
indisplay(&a);

return 0;
}                     