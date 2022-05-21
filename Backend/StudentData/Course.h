#include "Marks.h"
#include "CourseTutor.h"
#ifndef _GLIBCXX_STRING
#include "string"
#endif
class Course {
    std::string code;
    std::string name;
public:
    const std::string &getCode() const;

    void setCode(const std::string &code);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getCreditHours() const;

    void setCreditHours(int creditHours);

    int getRepeatsNum() const;

    void setRepeatsNum(int repeatsNum);

    int getSemester() const;

    void setSemester(int semester);

    int getYear() const;

    void setYear(int year);

    const CourseTutor *getTutors() const;

    const Marks &getMarks() const;

    void setMarks(const Marks &marks);

    const std::string &getGrade() const;

    void setGrade(const std::string &grade);

    double getAbsencePercentage() const;

    void setAbsencePercentage(double absencePercentage);

private:
    int creditHours;
    int repeatsNum;
    int semester;
    int year;
    CourseTutor tutors[3];
    Marks marks;
    std::string Grade;
    double absencePercentage;

};
