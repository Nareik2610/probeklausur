#include "aufgabe11.h"

// Aufgabe 11:
// Finde den Knoten mit dem größten Wert im Binärbaum ab `this`.

Node* Node::max_node()
{
    // TODO
   if(right==nullptr){
    return this;
   }
   return right->max_node();

}
