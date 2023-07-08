#pragma once
#include "Developer.h"
class BackendDeveloper : public Developer {
private:
    std::string backendLanguage;

public:
    BackendDeveloper(const std::string& name, int experienceLevel, const std::string& backendLanguage);
    void displayInfo() const override;
    void doWork() const override;
};