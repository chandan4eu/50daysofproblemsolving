                     //TREE\\

#include<iostream>
using namespace std;
struct tree{
    int data;
    tree*left;
    tree*right;
};
void display(tree*node){
    if(node==NULL){
        return;
    }
    display(node->left);
    cout<<node->data<<endl;
    display(node->right);
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
cout<<a.data<<" "<<a.left->data<<" "<<a.right->data;
tree root=a;
display(a)

return 0;
}                     