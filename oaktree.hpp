#ifndef OAKTREE_H
#define OAKTREE_H
#include "squirrel.hpp"
#include <iostream>

class Node {
private:
    Squirrel squirrel_data;
    Node *left;
    Node *right;

public:
    Node(Squirrel squirrel_object) {
        squirrel_data = squirrel_object;
        left = nullptr;
        right = nullptr;
    }

    Node(){
        squirrel_data = Squirrel();
        left = nullptr;
        right = nullptr;
    };

    void set_left(Node squirrel_node) {
        *left = squirrel_node;
    }

    void set_right(Node squirrel_node){
        *right = squirrel_node;
    }

    Node left(){
        return *left;
    }

    Node right(){
        return *right;
    }

    std::string get_name(){
        return squirrel_data.get_name();
    }   
};

class BinaryTree {
public:
    Node root;

    BinaryTree(Squirrel squirrel_item){
        root = Node(squirrel_item);
    }

    BinaryTree() {
        *root = nullptr;
    }

    void traverse(Node node){
        Node *ptr = &node;
        if (ptr != nullptr){
            std::cout << node.get_name() << std::endl;
            traverse(ptr->left());
            traverse(ptr->right());
        }
    }
};

#endif //OAKTREE_H