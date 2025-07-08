#ifndef SCHOLARSHIP_SYSTEM_H
#define SCHOLARSHIP_SYSTEM_H

#include <vector>
#include "applicant.h"

class ScholarshipSystem {
private:
    std::vector<Applicant> applicants;

public:
    void addApplicant(const Applicant& a);
    void processApplications();
    void displayEligible();
};

#endif
