#include "aufgabe7.h"

// Aufgabe 7:
// Prüfe, ob ein Vektor in absteigender Reihenfolge sortiert ist.
// Rückgabe: true, wenn absteigend sortiert, sonst false.

bool is_sorted_desc(const std::vector<int>& v)
{
    // TODO: implementieren
if(v.size()== 0){
    return true;
}
if (v.size()==1){
    return true;
}

    for (int i = 1; v.size();i++){
        if (v[i-1]<v[i]){
            return false;
        }
    }
    return true;
}
