#pragma once
#include <string>
class Developer {
protected:
    std::string name;
    int experienceLevel;

public:
    Developer(const std::string& name, int experienceLevel);
    virtual void displayInfo() const;
    virtual void doWork() const = 0;
};
