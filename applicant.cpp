#include "applicant.h"

Applicant::Applicant(int id, std::string name, float cgpa, float income) {
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
    this->income = income;
    this->eligible = checkEligibility();
}

bool Applicant::checkEligibility() {
    return (cgpa >= 7.0 && income <= 300000);
}
