#ifndef OAKTREE_H
#define OAKTREE_H
#include "squirrel.hpp"
#include <iostream>

class Node {
private:
    Squirrel squirrel_data;
    Node *left_squirrel;
    Node *right_squirrel;

    friend class BinaryTree;

public:
    Node(Squirrel squirrel_object) {
        squirrel_data = squirrel_object;
        left_squirrel = nullptr;
        right_squirrel = nullptr;
    }

    Node(){
        squirrel_data = Squirrel();
        left_squirrel = nullptr;
        right_squirrel = nullptr;
    };

    void set_left(Node* squirrel_node) {
        left_squirrel = squirrel_node;
    }

    void set_right(Node* squirrel_node) {
        right_squirrel = squirrel_node;
    }

    Node* left() {
        return left_squirrel;
    }

    Node* right() {
        return right_squirrel;
    }

    std::string get_name() {
        return squirrel_data.get_name();
    }   
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree(Squirrel squirrel_item) {
        root = new Node(squirrel_item);
    }

    BinaryTree() {
        root = nullptr;
    }

    void traverse(Node* node){
        if (node != nullptr){
            std::cout << node->get_name() << std::endl;
            traverse(node->left());
            traverse(node->right());
        }
    }

    Node* get_root() {
        return root;
    }
};

#endif //OAKTREE_H