#include "Id.h"
#define STUDENT_H
//#include "Name.h"
//#include "Address.h"
//#include "Payment.h"

//Student is still to be decided whether to be used as a class or struct
#ifndef MALE
#define MALE 0
#endif
#ifndef FEMALE
#define FEMALE 0
#endif
class student{
public:
   //Name name;
   Id id;
   /*std::string nationality;
   Address address;
   Address mailAddress;
   Date birthDate;
   int age;
   std::string gender;
   int enrolTerm;
   int year;
   std::string tutor_name;
   int code;
   int currentTerm;
   Payment* payments;
   StudentContact studentContact;
   CreditHours creditHours;
   GPA studentGPA;
   Course* courses;
   Faculty faculty;
   Department department;
public:
    const Name &getName() const;

    void setName(const Name &name);

    Id *const getId() const;

    void setId(const Id &id);

    const std::string &getNationality() const;

    void setNationality(const std::string &nationality);

    const Address &getAddress() const;

    void setAddress(const Address &address);

    const Address &getMailAddress() const;

    void setMailAddress(const Address &mailAddress);

    const Date &getBirthDate() const;

    void setBirthDate(const Date &birthDate);

    int getAge() const;

    void setAge(int age);

    const std::string &getGender() const;

    void setGender(const std::string &gender);

    int getEnrolTerm() const;

    void setEnrolTerm(int enrolTerm);

    int getYear() const;

    void setYear(int year);

    const std::string &getTutorName() const;

    void setTutorName(const std::string &tutorName);

    int getCode() const;

    void setCode(int code);

    int getCurrentTerm() const;

    void setCurrentTerm(int currentTerm);

    Payment *getPayments() const;

    void setPayments(Payment *payments);

    const StudentContact &getStudentContact() const;

    void setStudentContact(const StudentContact &studentContact);

    const CreditHours &getCreditHours() const;

    void setCreditHours(const CreditHours &creditHours);

    const GPA &getStudentGpa() const;

    void setStudentGpa(const GPA &studentGpa);

    Course *getCourses() const;

    void setCourses(Course *courses);

    const Faculty &getFaculty() const;

    void setFaculty(const Faculty &faculty);

    const Department &getDepartment() const;

    void setDepartment(const Department &department);

    int getStudentNum() const;

    void setStudentNum(int studentNum);

    const std::string &getPassword() const;

    void setPassword(const std::string &password);

private:
    int studentNum;
   std::string password;*/
    Id*  getId();
};
