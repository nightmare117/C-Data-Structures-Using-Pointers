#include<bits/stdc++.h>

using namespace std;

struct node{
    int val;
    node* next;
    node(int x):val(x),next(nullptr){}
};

node* qFront = nullptr;

void add(int x)
{
    node* curr = new node(x);
    if(qFront==nullptr)
    {
        qFront=curr;
        return;
    }
    node* temp = qFront;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=curr;
    return;
}

void pop()
{
    if(qFront!=nullptr)
    {
        qFront=qFront->next;
    }
    cout<<"a pop operation is performed!!\n";
    return;
}

void display_elements()
{
    node* temp = qFront;
    cout<<"Stack from top:\n";
    while(temp!=nullptr)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
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
