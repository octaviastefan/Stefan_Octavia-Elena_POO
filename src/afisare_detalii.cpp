#include "../headers/afisare_detalii.h"

template <typename T>
void afisareDetalii(const std::vector<T*>& entities) {
    for (const auto& entity : entities) {
        entity->afisareDetalii();
        std::cout << std::endl;
    }
}