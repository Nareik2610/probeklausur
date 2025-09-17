/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe2.h"

// Liefert die Laenge der Liste, beginnend mit `this`.
size_t Element::length()
{
    // TODO
    int size=0;
    Element* el = this;

    while (!el ->is_empty()){
        size++;
        el = el -> next;
    }
    return size;
}
