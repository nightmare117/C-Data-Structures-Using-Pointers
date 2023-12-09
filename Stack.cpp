#include<bits/stdc++.h>

using namespace std;

struct node{
    int val;
    node* prev;
    node(int x,node* y):val(x),prev(y){}
};

node* top = nullptr;

void add(int x)
{
    node* curr = new node(x,top);
    top = curr;
}

void pop()
{
    if(top!=nullptr)
    {
        top=top->prev;
    }
    cout<<"a pop operation is performed!!\n";
    return;
}

void display_elements()
{
    node* temp = top;
    cout<<"Stack from top:\n";
    while(temp!=nullptr)
    {
        cout<<temp->val<<endl;
        temp = temp->prev;
    }
    return;
}
int main()
{
    add(5);
    add(19);
    add(32);
    display_elements();
    pop();
    display_elements();
    return 0;
}
