#pragma once
#include "Developer.h"
#include <iostream>
class FrontendDeveloper : public Developer {
private:
    std::string frontendLanguage;

public:
    FrontendDeveloper(const std::string& name, int experienceLevel, const std::string& frontendLanguage);
    void displayInfo() const override;
    void doWork() const override;
};