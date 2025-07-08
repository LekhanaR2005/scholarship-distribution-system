#ifndef APPLICANT_H
#define APPLICANT_H

#include <string>

class Applicant {
public:
    std::string name;
    int id;
    float cgpa;
    float income;
    bool eligible;

    Applicant(int id, std::string name, float cgpa, float income);
    bool checkEligibility();
};

#endif
