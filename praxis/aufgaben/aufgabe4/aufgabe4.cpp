/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe4.h"

// Erwartet zwei Vektoren und liefert true, falls diese die gleichen Elemente
// enthalten. Die Reihefolge der Elemente muss dabei nicht gleich sein.
bool same_elements(std::vector<int> a, std::vector<int> b)
{
    // TODO
    //Leere Liste
    if(a.size()== 0&& b.size()==0){
        return true;
    }
    // sortieren a,b
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    //entfernt doppelte
    auto l1 =unique(a.begin(),a.end());
    a.erase(l1, a.end());

    auto l2 =unique(b.begin(),b.end());
    b.erase(l2, b.end());


    if(a.size()==b.size()){
        for (int i=0; i< a.size(); i++){
            if (a[i]==b[i]){
                return true;
            }
        }
    }
    return false;
}
