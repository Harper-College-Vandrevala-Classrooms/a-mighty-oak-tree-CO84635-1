#include <iostream>
#include "oaktree.hpp"
#include "squirrel.hpp"

int main() {
    std::cout << "Testing empty tree." << std::endl;
    BinaryTree empty_tree;
    std::cout << "Traversing empty tree:" << std::endl;
    empty_tree.traverse(empty_tree.get_root());
    std::cout << "Empty tree test completed.\n" << std::endl;

    std::cout << "Testing single tree." << std::endl;
    Squirrel solo_squirrel("Lonely Squirrel");
    BinaryTree single_tree(solo_squirrel);
    std::cout << "Traversing single tree:" << std::endl;
    single_tree.traverse(single_tree.get_root());
    std::cout << "Single Node tree test completed.\n" << std::endl;

    std::cout << "Testing regular tree." << std::endl;
    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffy_butt("Mr. Fluffy Butt");

    BinaryTree tree(cheeks);
    Node* root = tree.get_root();
    Node* left_child = new Node(squeaks);
    Node* right_child = new Node(fluffy_butt);

    root->set_left(left_child);
    root->set_right(right_child);
    std::cout << "Traversing regular tree:" << std::endl;
    tree.traverse(root);
    std::cout << "Regular tree test completed.\n" << std::endl;

    std::cout << "Testing unbalanced tree." << std::endl;
    Squirrel root_squirrel("Cheeks");
    Squirrel right_squirrel1("Squeaks");
    Squirrel right_squirrel2("Mr. Fluffy Butt");

    Node* unbalanced_root = new Node(root_squirrel);
    Node* right_child_Node = new Node(right_squirrel1);
    Node* right_child_two_Node = new Node(right_squirrel2);

    unbalanced_root->set_right(right_child_Node);
    right_child_Node->set_right(right_child_two_Node);

    std::cout << "Traversing unbalanced tree:" << std::endl;
    tree.traverse(unbalanced_root);
    std::cout << "Unbalanced tree test completed.\n" << std::endl;

    std::cout << "Testing large tree." << std::endl;
    Squirrel cheeks1("Cheeks");
    Squirrel squeaks2("Squeaks");
    Squirrel fluffy_butt3("Mr. Fluffy Butt");
    Squirrel brandon("Brandon");
    Squirrel connor("Connor");
    Squirrel owen("Owen");
    Squirrel louis("Louis");
    Squirrel joey("Joey");
    Squirrel nolan("Nolan");

    BinaryTree large_tree(cheeks1);
    Node* root3 = large_tree.get_root();

    Node* left_child3 = new Node(squeaks2);
    Node* right_child3 = new Node(fluffy_butt3);

    Node* left_left = new Node(brandon);
    Node* left_right = new Node(connor);
    Node* right_left = new Node(owen);
    Node* right_right = new Node(louis);

    Node* left_left_left = new Node(joey);
    Node* right_right_right = new Node(nolan);

    root3->set_left(left_child3);
    root3->set_right(right_child3);

    left_child3->set_left(left_left);
    left_child3->set_right(left_right);
    right_child3->set_left(right_left);
    right_child3->set_right(right_right);

    left_left->set_left(left_left_left);
    right_right->set_right(right_right_right);

    std::cout << "Traversing large tree:" << std::endl;
    large_tree.traverse(root3);
    std::cout << "Large tree test completed." << std::endl;

    return 0;
}
