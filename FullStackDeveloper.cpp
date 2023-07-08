#include "FullStackDeveloper.h"
#include <iostream>

FullStackDeveloper::FullStackDeveloper(const std::string& name, int experienceLevel, const std::string& frontendLanguage, const std::string& backendLanguage)
    : FrontendDeveloper(name, experienceLevel, frontendLanguage), BackendDeveloper(name, experienceLevel, backendLanguage) {}

void FullStackDeveloper::displayInfo() const {
    FrontendDeveloper::displayInfo();
    BackendDeveloper::displayInfo();
}

void FullStackDeveloper::doWork() const {
    FrontendDeveloper::doWork();
    BackendDeveloper::doWork();
}