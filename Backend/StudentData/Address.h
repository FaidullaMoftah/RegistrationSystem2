#include "string"
class Address {
    int flatNumber;
public:
    int getFlatNumber() const;

    void setFlatNumber(int flatNumber);

    int getHouseNumber() const;

    void setHouseNumber(int houseNumber);

    const std::string &getStreetName() const;

    void setStreetName(const std::string &streetName);

    const std::string &getDistrictName() const;

    void setDistrictName(const std::string &districtName);

    const std::string &getCityName() const;

    void setCityName(const std::string &cityName);

    const std::string &getGovernorateName() const;

    void setGovernorateName(const std::string &governorateName);

    const std::string &getCountry() const;

    void setCountry(const std::string &country);

    const std::string &getPostalCode() const;

    void setPostalCode(const std::string &postalCode);

private:
    int houseNumber;
    std::string streetName, districtName, cityName, governorateName;
    std::string country;
    std::string postalCode;
public:
    Address(int flatNumber, int houseNumber, std::string streetName, std::string districtName, std::string cityName,
            std::string governorateName, std::string country, std::string postalCode);

};
