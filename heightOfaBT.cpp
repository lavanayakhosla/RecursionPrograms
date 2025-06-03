#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node * right;
    Node(int val){
        data=val;
        left = right = NULL;
    }
};

int heightofBT(struct Node * root){
    if (root==NULL) return 0;
    int lh =  heightofBT(root->left);
    int rh= heightofBT(root->right);
    return 1 + max(lh,rh);

}
int main(){
    struct Node *root = new Node(1);
    root -> left = new Node (2);      
    root -> right = new Node (3);  
    root -> left->left = new Node (4);
    root -> left->right = new Node (5);
    root -> right->left = new Node (6);
    root -> right -> right = new Node (7);
    root -> left->right->right = new Node (8);
    root -> right->right->left = new Node (9);

    cout<<heightofBT(root);
}
