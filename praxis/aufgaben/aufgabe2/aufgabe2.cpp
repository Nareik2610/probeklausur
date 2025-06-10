/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe2.h"

// Liefert die Laenge der Liste, beginnend mit `this`.
size_t Element::length()
{
    // TODO 
    
   
    size_t size = 0;
    Element* current = this;
   
    while (current != nullptr){
    size++;
    current = current-> next;
        
    }




    return size-1;
}
