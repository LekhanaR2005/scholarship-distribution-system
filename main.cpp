#include <iostream>
#include "scholarship_system.h"

int main() {
    ScholarshipSystem system;

    system.addApplicant(Applicant(1, "Alice", 8.5, 250000));
    system.addApplicant(Applicant(2, "Bob", 6.8, 400000));
    system.addApplicant(Applicant(3, "Charlie", 7.2, 200000));
    system.addApplicant(Applicant(4, "Diana", 9.1, 100000));

    system.processApplications();
    system.displayEligible();

    return 0;
}
