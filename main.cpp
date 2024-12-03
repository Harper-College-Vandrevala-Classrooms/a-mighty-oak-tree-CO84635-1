#include <iostream>
#include "oak_tree.hpp"
#include "squirrel.hpp"

int main() {
    std::cout << "Testing empty tree." << std::endl;
    binary_tree empty_tree;
    std::cout << "Traversing empty tree:" << std::endl;
    empty_tree.traverse(empty_tree.get_root());
    std::cout << "Empty tree test completed.\n" << std::endl;

    std::cout << "Testing single tree." << std::endl;
    squirrel solo_squirrel("Lonely Squirrel");
    binary_tree single_tree(solo_squirrel);
    std::cout << "Traversing single tree:" << std::endl;
    single_tree.traverse(single_tree.get_root());
    std::cout << "Single node tree test completed.\n" << std::endl;

    std::cout << "Testing regular tree." << std::endl;
    squirrel cheeks("Cheeks");
    squirrel squeaks("Squeaks");
    squirrel fluffy_butt("Mr. Fluffy Butt");

    binary_tree tree(cheeks);
    node* root = tree.get_root();
    node* left_child = new node(squeaks);
    node* right_child = new node(fluffy_butt);

    root->set_left(left_child);
    root->set_right(right_child);
    std::cout << "Traversing regular tree:" << std::endl;
    tree.traverse(root);
    std::cout << "Regular tree test completed.\n" << std::endl;

    std::cout << "Testing unbalanced tree." << std::endl;
    squirrel root_squirrel("Cheeks");
    squirrel right_squirrel1("Squeaks");
    squirrel right_squirrel2("Mr. Fluffy Butt");

    node* unbalanced_root = new node(root_squirrel);
    node* right_child_node = new node(right_squirrel1);
    node* right_child_two_node = new node(right_squirrel2);

    unbalanced_root->set_right(right_child_node);
    right_child_node->set_right(right_child_two_node);

    std::cout << "Traversing unbalanced tree:" << std::endl;
    tree.traverse(unbalanced_root);
    std::cout << "Unbalanced tree test completed.\n" << std::endl;

    std::cout << "Testing large tree." << std::endl;
    squirrel cheeks1("Cheeks");
    squirrel squeaks2("Squeaks");
    squirrel fluffy_butt3("Mr. Fluffy Butt");
    squirrel brandon("Brandon");
    squirrel connor("Connor");
    squirrel owen("Owen");
    squirrel louis("Louis");
    squirrel joey("Joey");
    squirrel nolan("Nolan");

    binary_tree large_tree(cheeks1);
    node* root3 = large_tree.get_root();

    node* left_child3 = new node(squeaks2);
    node* right_child3 = new node(fluffy_butt3);

    node* left_left = new node(brandon);
    node* left_right = new node(connor);
    node* right_left = new node(owen);
    node* right_right = new node(louis);

    node* left_left_left = new node(joey);
    node* right_right_right = new node(nolan);

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
