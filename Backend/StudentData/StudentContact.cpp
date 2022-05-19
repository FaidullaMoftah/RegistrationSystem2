#include "StudentContact.h"
StudentContact::StudentContact(std::string email, std::string homeNumber, std::string mobileNumber) {
    this->email = email;
    this->homeNumber = email;
    this->mobileNumber = email;
}

const std::string &StudentContact::getEmail() const {
    return email;
}

void StudentContact::setEmail(const std::string &email) {
    StudentContact::email = email;
}

const std::string &StudentContact::getHomeNumber() const {
    return homeNumber;
}

void StudentContact::setHomeNumber(const std::string &homeNumber) {
    StudentContact::homeNumber = homeNumber;
}

const std::string &StudentContact::getMobileNumber() const {
    return mobileNumber;
}

void StudentContact::setMobileNumber(const std::string &mobileNumber) {
    StudentContact::mobileNumber = mobileNumber;
}
