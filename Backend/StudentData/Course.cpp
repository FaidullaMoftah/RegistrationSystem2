//
// Created by faidu on 21/5/22.
//

#include "Course.h"

const std::string &Course::getCode() const {
    return code;
}

void Course::setCode(const std::string &code) {
    Course::code = code;
}

const std::string &Course::getName() const {
    return name;
}

void Course::setName(const std::string &name) {
    Course::name = name;
}

int Course::getCreditHours() const {
    return creditHours;
}

void Course::setCreditHours(int creditHours) {
    Course::creditHours = creditHours;
}

int Course::getRepeatsNum() const {
    return repeatsNum;
}

void Course::setRepeatsNum(int repeatsNum) {
    Course::repeatsNum = repeatsNum;
}

int Course::getSemester() const {
    return semester;
}

void Course::setSemester(int semester) {
    Course::semester = semester;
}

int Course::getYear() const {
    return year;
}

void Course::setYear(int year) {
    Course::year = year;
}

const CourseTutor *Course::getTutors() const {
    return tutors;
}

const Marks &Course::getMarks() const {
    return marks;
}

void Course::setMarks(const Marks &marks) {
    Course::marks = marks;
}

const std::string &Course::getGrade() const {
    return Grade;
}

void Course::setGrade(const std::string &grade) {
    Grade = grade;
}

double Course::getAbsencePercentage() const {
    return absencePercentage;
}

void Course::setAbsencePercentage(double absencePercentage) {
    Course::absencePercentage = absencePercentage;
}
