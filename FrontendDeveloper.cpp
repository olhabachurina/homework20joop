#include "FrontendDeveloper.h"
#include <iostream>

FrontendDeveloper::FrontendDeveloper(const std::string& name, int experienceLevel, const std::string& frontendLanguage)
    : Developer(name, experienceLevel), frontendLanguage(frontendLanguage) {}

void FrontendDeveloper::displayInfo() const {
    Developer::displayInfo();
    std::cout << "Frontend Language: " << frontendLanguage << std::endl;
}

void FrontendDeveloper::doWork() const {
    std::cout << "Doing frontend work using " << frontendLanguage << std::endl;
}