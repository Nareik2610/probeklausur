#include "aufgabe9.h"

// Aufgabe 9:
// Erzeuge einen Vektor der Inorder-Traversierung eines Binärbaums ab `this`.

std::vector<int> Node::to_vector_inorder()
{
    // TODO
    std::vector<int> vec;
    if (left) {
        std::vector<int> leftVec = left->to_vector_inorder();
        vec.insert(vec.end(), leftVec.begin(), leftVec.end());
    }
    vec.push_back(value);
    if (right) {
        std::vector<int> rightVec = right->to_vector_inorder();
        vec.insert(vec.end(), rightVec.begin(), rightVec.end());
    }
    return vec;


    return {};
}
