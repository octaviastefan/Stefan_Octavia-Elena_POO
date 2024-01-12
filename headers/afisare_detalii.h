/*#pragma once
#include <iostream>
#include <vector>

template <typename T>
// Funcție șablon pentru a afișa detalii pentru un vector de entități
void afisareDetalii(const std::vector<T>& entities) {
    for (const auto& entity : entities) {
        entity.afisareDetalii();
        std::cout << std::endl;
    }
}
*/
#pragma once
#include <iostream>
#include <vector>

template <typename T>
// Funcție șablon pentru a afișa detalii pentru un vector de entități
void afisareDetalii(const std::vector<T*>& entities);


