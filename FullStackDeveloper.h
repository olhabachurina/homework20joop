#pragma once
#include "FrontendDeveloper.h"
#include"BackendDeveloper.h"

class FullStackDeveloper : public FrontendDeveloper, public BackendDeveloper {
public:
    FullStackDeveloper(const std::string& name, int experienceLevel, const std::string& frontendLanguage, const std::string& backendLanguage);
    void displayInfo() const override;
    void doWork() const override;
};