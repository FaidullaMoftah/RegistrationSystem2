#include "string"
class StudentContact{
    std::string email;
    std::string homeNumber;
    std::string mobileNumber;
public:
    const std::string &getEmail() const;

    void setEmail(const std::string &email);

    const std::string &getHomeNumber() const;

    void setHomeNumber(const std::string &homeNumber);

    const std::string &getMobileNumber() const;

    void setMobileNumber(const std::string &mobileNumber);


public:
    StudentContact(std::string email, std::string homeNumber, std::string mobileNumber);

};