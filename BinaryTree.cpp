#include<bits/stdc++.h>

using namespace std;

struct node{
    int val;
    node* left;
    node* right;
    node(int value):val(value),left(nullptr),right(nullptr){}
};

node* start=nullptr;

void print_bst_inOrder(node* now)
{
    if(now->left!=nullptr)
    {
        print_bst_inOrder(now->left);
    }
    cout<<now->val<<" ";
    if(now->right!=nullptr)
    {
        print_bst_inOrder(now->right);
    }
    return;
}

void print_bst_preOrder(node* now)
{
    cout<<now->val<<" ";
    if(now->left!=nullptr)
    {
        print_bst_preOrder(now->left);
    }
    if(now->right!=nullptr)
    {
        print_bst_preOrder(now->right);
    }
    return;
}

void print_bst_postOrder(node* now)
{
    if(now->left!=nullptr)
    {
        print_bst_postOrder(now->left);
    }
    if(now->right!=nullptr)
    {
        print_bst_postOrder(now->right);
    }
    cout<<now->val<<" ";
    return;
}
void bst_insert(int v)
{
    node* curr = new node(v);
    node* temp = start;
    if(start==nullptr){
        start=curr;
        return;
    }
    while(temp!=nullptr){
        if(temp->val>v){
            if(temp->left==nullptr){
                temp->left=curr;
                return;
            }
            temp=temp->left;
        }else{
            if(temp->right==nullptr){
                temp->right=curr;
                return;
            }
            temp=temp->right;
        }
    }
    return;
}

int  main()
{
    bst_insert(10);
    bst_insert(30);
    bst_insert(20);
    bst_insert(100);
    bst_insert(110);
    bst_insert(-30);
    bst_insert(20);
    bst_insert(1);
    cout<<"In Order:\n";
    print_bst_inOrder(start);
    cout<<endl;
    cout<<"Pre Order:\n";
    print_bst_preOrder(start);
    cout<<endl;
    cout<<"Post Order:\n";
    print_bst_postOrder(start);
    cout<<endl;

    return 0;
}
