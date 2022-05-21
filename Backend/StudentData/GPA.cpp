#include "GPA.h"

double GPA::getGpa() const {
    return gpa;
}

void GPA::setGpa(double gpa) {
    GPA::gpa = gpa;
}

int GPA::getNumSemesters() const {
    return numSemesters;
}

void GPA::setNumSemesters(int numSemesters) {
    GPA::numSemesters = numSemesters;
}

const double *GPA::getGpaList() const {
    return gpaList;
}
