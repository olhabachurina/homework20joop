#include "BackendDeveloper.h"
#include <iostream>

BackendDeveloper::BackendDeveloper(const std::string& name, int experienceLevel, const std::string& backendLanguage)
    : Developer(name, experienceLevel), backendLanguage(backendLanguage) {}

void BackendDeveloper::displayInfo() const {
    Developer::displayInfo();
    std::cout << "Backend Language: " << backendLanguage << std::endl;
}

void BackendDeveloper::doWork() const {
    std::cout << "Doing backend work using " << backendLanguage << std::endl;
}