//
//  main.cpp
//  linked-list
//
//  Created by Bernardo Oviedo on 3/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>

using namespace std;

struct node {
public:
    int data;
    node *next;
};

class linkedList{
public:
    node *head;
    int listLength;
    
public:
    
    linkedList(){
        head = new node();
        head->data = NULL;
        head->next = NULL;
        listLength = 0;
    }
    
    bool insertNode(node *newNode, int position);
    void printList();
    bool removeNode(int position);
    node* reverse(node *current);
    void inverseList();
};

void linkedList::inverseList(){
    head = reverse(head);
}

node* linkedList::reverse(node *current){
    if(!(current->next&&current)){
        return current;
    }
    node *head = reverse(current->next);
    current->next->next = current;
    current->next = NULL;
    return head;
}

bool linkedList::insertNode(node *newNode, int position){
    if(position <= 0 || position > listLength+1){
        cout<<"Error: the given position is out of range"<<endl;
        return false;
    }
    
    if(head->next == NULL){
        head->next = newNode;
        listLength++;
        return true;
    }
    
    int count = 0;
    node *p = head;
    node *q = head;
    
    while(q){
        if(count == position){
            p->next = newNode;
            newNode->next = q;
            listLength++;
            return true;
        }
        p=q;
        q=p->next;
        count++;
    }
    if (count == position)
    {
        p -> next = newNode;
        newNode -> next = q;
        listLength++;
        return true;
    }
    cout << "Error: node was not added to list"<<endl;
    return false;
}

void linkedList::printList(){
    node *current = head;
    cout<<"--------ADDRESS--------DATA-------"<<endl;
    while(current){
        cout<<"\t"<<current<<":   \t "<<current->data<<endl;
        current = current->next;
    }
    cout<<"----------------------------------"<<endl;
}

bool linkedList::removeNode(int position){
    if(position <= 0 || position > listLength){
        cout<<"Error: the given position is out of range"<<endl;
        return false;
    }
    
    if(head->next == NULL){
        cout<<"Error: there is nothing to remove"<<endl;
        return false;
    }
    int counter = 0;
    node *previous = head;
    node *current = head;
    
    while(current){
        if(counter == position){
            previous->next = current->next;
            delete current;
            listLength--;
            return true;
        }
        previous = current;
        current = current->next;
        counter++;
    }
    cout<<"Error: nothing was removed from list"<<endl;
    return false;
}

int main(int argc, const char * argv[]) {
    linkedList list, list2;
    node *array[10];
    
    for(int i = 1; i <= 10; i++){
        array[i-1] = new node();
        array[i-1]->data = i;
        list.insertNode(array[i-1], i);
    }
    list.inverseList();
    list.printList();
    list.inverseList();
    list.printList();
    cout<<endl;
    return 0;
}
