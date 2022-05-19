#include "Name.h"
Name::Name(std::string first, std::string second, std::string last) {
    this->firstName = first;
    this->secondName = second;
    this->thirdName = last;
}
std::string Name::fullName() {
        return this->firstName + " " + this->secondName + " " +this->thirdName;
}

const std::string &Name::getFirstName() const {
    return firstName;
}

void Name::setFirstName(const std::string &firstName) {
    Name::firstName = firstName;
}

const std::string &Name::getSecondName() const {
    return secondName;
}

void Name::setSecondName(const std::string &secondName) {
    Name::secondName = secondName;
}

const std::string &Name::getThirdName() const {
    return thirdName;
}

void Name::setThirdName(const std::string &thirdName) {
    Name::thirdName = thirdName;
}
