#include "Marks.h"

int Marks::getExam1Mark() const {
    return exam1Mark;
}

void Marks::setExam1Mark(int exam1Mark) {
    Marks::exam1Mark = exam1Mark;
}

int Marks::getExam2Mark() const {
    return exam2Mark;
}

void Marks::setExam2Mark(int exam2Mark) {
    Marks::exam2Mark = exam2Mark;
}

int Marks::getYearWork() const {
    return yearWork;
}

void Marks::setYearWork(int yearWork) {
    Marks::yearWork = yearWork;
}

int Marks::getFinalMark() const {
    return finalMark;
}

void Marks::setFinalMark(int finalMark) {
    Marks::finalMark = finalMark;
}
void Marks::setSum() {
    sum = exam1Mark + exam2Mark + finalMark + yearWork;
}

int Marks::getSum() const {
    return sum;
}

