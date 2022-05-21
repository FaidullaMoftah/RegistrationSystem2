#include "CourseTutor.h"

const Name &CourseTutor::getLecturer() const {
    return lecturer;
}

void CourseTutor::setLecturer(const Name &lecturer) {
    CourseTutor::lecturer = lecturer;
}

const Name &CourseTutor::getCourseGta() const {
    return courseGTA;
}

void CourseTutor::setCourseGta(const Name &courseGta) {
    courseGTA = courseGta;
}

const Name &CourseTutor::getLabGta() const {
    return labGTA;
}

void CourseTutor::setLabGta(const Name &labGta) {
    labGTA = labGta;
}
