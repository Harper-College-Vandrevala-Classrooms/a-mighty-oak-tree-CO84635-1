#include <iostream>
#include "oaktree.hpp"
#include "squirrel.hpp"

int main() {
    std::cout << "Testing empty tree." << std::endl;
    BinaryTree emptyTree;
    std::cout << "Traversing empty tree:" << std::endl;
    emptyTree.traverse(emptyTree.get_root());
    std::cout << "Empty tree test completed.\n" << std::endl;

    std::cout << "Testing single tree." << std::endl;
    Squirrel soloSquirrel("Lonely Squirrel");
    BinaryTree singleTree(soloSquirrel);
    std::cout << "Traversing single tree:" << std::endl;
    singleTree.traverse(singleTree.get_root());
    std::cout << "Single node tree test completed.\n" << std::endl;

    std::cout << "Testing regular tree." << std::endl;
    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffybutt("Mr. Fluffy Butt");

    BinaryTree tree(cheeks);
    Node* root = tree.get_root();
    Node* leftChild = new Node(squeaks);
    Node* rightChild = new Node(fluffybutt);

    root->set_left(leftChild);
    root->set_right(rightChild);
    std::cout << "Traversing regular tree:" << std::endl;
    tree.traverse(root);
    std::cout << "Regular tree test completed.\n" << std::endl;

    std::cout << "Testing unbalanced tree." << std::endl;
    Squirrel rootSquirrel("Cheeks");
    Squirrel rightSquirrel1("Squeaks");
    Squirrel rightSquirrel2("Mr. Fluffy Butt");

    Node* unbalancedRoot = new Node(rootSquirrel);
    Node* rightChildNode = new Node(rightSquirrel1);
    Node* rightChildTwoNode = new Node(rightSquirrel2);

    unbalancedRoot->set_right(rightChildNode);
    rightChildNode->set_right(rightChildTwoNode);

    std::cout << "Traversing unbalanced tree:" << std::endl;
    tree.traverse(unbalancedRoot);
    std::cout << "Unbalanced tree test completed.\n" << std::endl;

    std::cout << "Testing large tree." << std::endl;
    Squirrel cheeks1("Cheeks");
    Squirrel squeaks2("Squeaks");
    Squirrel fluffybutt3("Mr. Fluffy Butt");
    Squirrel brandon("Brandon");
    Squirrel connor("Connor");
    Squirrel owen("Owen");
    Squirrel louis("Louis");
    Squirrel joey("Joey");
    Squirrel nolan("Nolan");

    BinaryTree largeTree(cheeks1);
    Node* root3 = largeTree.get_root();

    Node* leftChild3 = new Node(squeaks2);
    Node* rightChild3 = new Node(fluffybutt3);

    Node* leftLeft = new Node(brandon);
    Node* leftRight = new Node(connor);
    Node* rightLeft = new Node(owen);
    Node* rightRight = new Node(louis);

    Node* leftLeftLeft = new Node(joey);
    Node* rightRightRight = new Node(nolan);

    root3->set_left(leftChild3);
    root3->set_right(rightChild3);

    leftChild3->set_left(leftLeft);
    leftChild3->set_right(leftRight);
    rightChild3->set_left(rightLeft);
    rightChild3->set_right(rightRight);

    leftLeft->set_left(leftLeftLeft);
    rightRight->set_right(rightRightRight);

    std::cout << "Traversing large tree:" << std::endl;
    largeTree.traverse(root3);
    std::cout << "Large tree test completed." << std::endl;

    return 0;
}
