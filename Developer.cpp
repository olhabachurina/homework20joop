#include "Developer.h"
#include <iostream>

Developer::Developer(const std::string& name, int experienceLevel)
    : name(name), experienceLevel(experienceLevel) {}

void Developer::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Experience Level: " << experienceLevel << std::endl;
}