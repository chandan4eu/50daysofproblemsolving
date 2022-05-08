                     //TREE\\

#include<iostream>
using namespace std;
struct tree{
    int data;
    tree*left;
    tree*right;
};
int main(){

tree a;
a.data=5;
tree b;
b.data=7;
tree c;
c.data=8;
a.left=b;
b.left=NULL;
b.right=NULL;
a.right=c;
c.left=NULL;
c.right=NULL;
cout<<a->data<<" "<<

return 0;
}                     