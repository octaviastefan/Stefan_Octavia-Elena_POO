#include "../headers/Factory.h"

template <typename T>
T Factory<T>::createEntity(const std::string& name) {
    return T(name);
}