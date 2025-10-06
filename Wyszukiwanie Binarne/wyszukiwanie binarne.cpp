#include <iostream>
#include <vector>
 
// Funkcja wyszukiwania binarnego
int binary_search(const std::vector<int>& tab, int szukana) {
    int l = 0;
    int p = static_cast<int>(tab.size()) - 1;
 
    while (l <= p) {
        int sr = (l + p) / 2;
 
        if (tab[sr] == szukana) {
            return sr;  // Znaleziono
        } 
        else if (tab[sr] > szukana) {
            p = sr - 1;
        } 
        else {
            l = sr + 1;
        }
    }
    return -1; // Nie znaleziono
}