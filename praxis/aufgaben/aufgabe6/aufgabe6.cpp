/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 *ERREICHBARE PUNKTE : 10
 */

#include "aufgabe6.h"

// Sucht einen Knoten mit dem gegebenen Schlüssel im Baum.
// Liefert einen Pfad zu diesem Knoten als String.
// Der Pfad besteht aus den Buchstaben 'L' und 'R' für links und rechts.
// Er beschreibt den Weg vom Wurzelknoten zum gesuchten Knoten.
// Ist der gesuchte Knoten der Wurzelknoten, wird ein leerer String
// geliefert. Wenn der Knoten nicht gefunden wird, wird ein "X" geliefert.
std::string p;
std::string Node::path(int key_)
{
    // TODO
    Node* el= this;
    while(!el->is_empty()){
        if(key_<el->key){
            p = p+"L";
            el= el-> left;
        }
        else if( key_>el->key){
            p = p+"R";
            el = el-> right;
        }
        if(key_ == el->key){
            return p;
        }
    }
    return "X";
}
