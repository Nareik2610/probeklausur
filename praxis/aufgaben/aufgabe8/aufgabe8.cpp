#include "aufgabe8.h"

// Aufgabe 8:
// Berechne die Summe aller Werte in einer verketteten Liste beginnend bei `this`.

int Node::sum()
{
    size_t sum =0;
    Node* el = this;
    
    while(el != nullptr){
        sum += el->value;
        el= el ->next;
    }
    return sum;
}
