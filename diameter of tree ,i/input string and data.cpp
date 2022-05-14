// Given a binary tree which has T nodes, you need to find the diameter of that binary tree. The diameter of a tree is the number of nodes on the longest path between two leaves in the tree.

// Input:
// First line contains two integers, T and X, number of nodes in the tree and value of the root.
// Next

// lines contain details of nodes.
// Each detail of node contains two lines. First lines contains a string and second line contains an integer, which denotes the path of the node and the value of the node respectively.

// String consists of only L or R. L denotes left child and R denotes right child. ( Look at the sample explanation for more details )

// Output:
// Print the diameter of the binary tree.


////////ANSWER\\\\\\\\\






#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};
Node* getnode(int val){
    Node *temp=(Node*)calloc(1, sizeof(Node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int maxx=INT_MIN;

int height(Node*root){
    if(!root)
        return 0;
    return 1+ max(height(root->left),height(root->right));
    
}
int diameter(Node *root){
    if(root){
    int lh=height(root->left);
    int rh=height(root->right);
    int ld=diameter(root->left);    //variable declared inside only so that it gets updated easily
    int rd=diameter(root->right);

    return maxx=max(maxx,max(lh+rh+1,max(ld,rd)));
    }
    else{
        return 0;
    }
}

int main(){
    struct Node* root=NULL,*ptr;
     //cout<<maxx<<endl;
    int t,n;
    cin>>t>>n;
    root=getnode(n);
    while(--t){
        string s;
        cin>>s;
        int i=0;
        ptr=root;
        while(s[i] && ptr){
            if(s[i]=='L'){
                if(ptr->left==NULL)
                    ptr->left=getnode(0);
                ptr=ptr->left;
            }
            else{
                if(ptr->right==NULL)
                    ptr->right=getnode(0);

                ptr=ptr->right;
            }
            i++;
        }
        
        cin>>n;
        ptr->data=n;
        
    }
    diameter(root);
    cout<<maxx<<endl;
    
    return 0;
}
