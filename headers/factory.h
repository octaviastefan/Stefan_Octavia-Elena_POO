#pragma once
#include<iostream>
template <typename T>
class Factory {
public:
    static T createEntity(const std::string& name);
};
