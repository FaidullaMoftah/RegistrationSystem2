//
// Created by faidu on 19/5/22.
//

#include "Address.h"
Address::Address(int flatNumber, int houseNumber, std::string streetName, std::string districtName,
                 std::string cityName, std::string governorateName, std::string country, std::string postalCode) {
    this->cityName = cityName;
    this->flatNumber = flatNumber;
    this->houseNumber=houseNumber;
    this->streetName = streetName;
    this->districtName = districtName;
    this->governorateName = governorateName;
    this->country = country;
    this->postalCode = postalCode;
}
int Address::getFlatNumber() const {
    return flatNumber;
}

void Address::setFlatNumber(int flatNumber) {
    Address::flatNumber = flatNumber;
}

int Address::getHouseNumber() const {
    return houseNumber;
}

void Address::setHouseNumber(int houseNumber) {
    Address::houseNumber = houseNumber;
}

const std::string &Address::getStreetName() const {
    return streetName;
}

void Address::setStreetName(const std::string &streetName) {
    Address::streetName = streetName;
}

const std::string &Address::getDistrictName() const {
    return districtName;
}

void Address::setDistrictName(const std::string &districtName) {
    Address::districtName = districtName;
}

const std::string &Address::getCityName() const {
    return cityName;
}

void Address::setCityName(const std::string &cityName) {
    Address::cityName = cityName;
}

const std::string &Address::getGovernorateName() const {
    return governorateName;
}

void Address::setGovernorateName(const std::string &governorateName) {
    Address::governorateName = governorateName;
}

const std::string &Address::getCountry() const {
    return country;
}

void Address::setCountry(const std::string &country) {
    Address::country = country;
}

const std::string &Address::getPostalCode() const {
    return postalCode;
}

void Address::setPostalCode(const std::string &postalCode) {
    Address::postalCode = postalCode;
}
