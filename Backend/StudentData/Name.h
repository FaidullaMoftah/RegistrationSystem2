#include "string"
#define NAME_H
class Name{
    std::string firstName;
    std::string secondName;
    std::string thirdName;
public:
    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getSecondName() const;

    void setSecondName(const std::string &secondName);

    const std::string &getThirdName() const;

    void setThirdName(const std::string &thirdName);

public:
    Name(std::string first, std::string second, std::string last);
    std::string fullName();
};