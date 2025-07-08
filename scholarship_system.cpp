#include "scholarship_system.h"
#include <iostream>
#include <algorithm>

void ScholarshipSystem::addApplicant(const Applicant& a) {
    applicants.push_back(a);
}

void ScholarshipSystem::processApplications() {
    std::sort(applicants.begin(), applicants.end(), [](const Applicant& a, const Applicant& b) {
        return a.cgpa > b.cgpa;
    });
}

void ScholarshipSystem::displayEligible() {
    std::cout << "Eligible Applicants:\n";
    for (const auto& a : applicants) {
        if (a.eligible) {
            std::cout << "ID: " << a.id << ", Name: " << a.name << ", CGPA: " << a.cgpa << ", Income: " << a.income << "\n";
        }
    }
}
