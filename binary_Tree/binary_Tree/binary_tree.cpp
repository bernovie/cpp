//
//  main.cpp
//  binary_Tree
//
//  Created by Bernardo Oviedo on 3/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <random>
#include <ctime>
#include <map>

using namespace std;

struct Node{
    int value;
    Node *left;
    Node *right;
    
    Node() : left(NULL), right(NULL), value(0){}
    Node(int val) : left(NULL), right(NULL), value(val){}
    
    void addNode(Node *n);
    void visit();
    Node* search(int val);
};

void Node::visit(){
    if(left){
        left->visit();
    }
    cout<<value<<endl;
    if(right){
        right->visit();
    }
}

Node* Node::search(int val){
    if(value == val){
        return this;
    }else if(val < value && left != NULL){
        return left->search(val);
    }else if(val > value && right != NULL){
        return right->search(val);
    }else{
        
    }
    return NULL;
}

void Node::addNode(Node *n){
    if(n->value < value){
        if(left == NULL){
            left = n;
        }else {
            left->addNode(n);
        }
    }
    else if(n->value > value){
        if(right == NULL){
            right = n;
        }else {
            right->addNode(n);
        }
    }
    
}

class Tree{
    Node *root;
    
public:
    Tree(){
        root = NULL;
    }
    
    bool addValue(int val);
    bool traverse();
    Node* search(int val);
};

bool Tree::addValue(int val){
    Node *n = new Node(val);
    
    if(root == NULL){
        root = n;
    }else{
        root->addNode(n);
    }
    
    return false;
}

bool Tree::traverse(){
    root->visit();
    return false;
}

Node* Tree::search(int val){
    return root->search(val);
}

int main(int argc, const char * argv[]) {
    Tree *tree = new Tree();
    srand(unsigned(time(0)));
    
    for(int i = 0; i < 10; i++){
        tree->addValue(floor(rand()%101));
    }
    /*tree->addValue(5);
     tree->addValue(3);
     tree->addValue(7);
     tree->addValue(6);*/
    tree->traverse();
    if(tree->search(57)){
        cout<<"Found "<<57<<endl;
    }else{
        cout<<"Not Found "<<endl;
    }
    
    return 0;
}
