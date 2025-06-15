/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe3.h"
// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
std::vector<int> Element::values()
{
    std::vector<int> vec;
    Element* el = this;
    if (el->is_empty()) {
        return {};
    }
    while (!el->is_empty()) {
        vec.push_back(el->value);
        el = el->next;
    }
    return vec;
}
