#include<bits/stdc++.h>

using namespace std;

struct node{
    int val;
    node* next;
    node(int value):val(value),next(nullptr){}
};
node* start = nullptr;

void print_list()
{
    node* temp;
    temp =start;
    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
    return;
}

void dequeue(int x)
{
    node* temp= start;
    node* prev = start;
    while(temp!=nullptr)
    {
        if(temp->val==x)
        {
            if(temp==start){
                start=start->next;
                temp=start;
                prev =start;
                continue;
            }
            prev->next = temp->next;
            temp=temp->next;
            continue;
        }
        prev = temp;
        temp=temp->next;
    }
}

void enqueue(int val)
{
    node* curr = new node(val);
    if(start==nullptr){
        start = curr;
        return;
    }
    node* temp = start;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next = curr;
    return;
}


int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    print_list();
    //dequeue(3);
    dequeue(4);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    print_list();
    dequeue(1);
    print_list();

    return 0;
}
