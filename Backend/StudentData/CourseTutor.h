#ifndef NAME_H
#include "Name.h"
#endif
class CourseTutor {
    Name lecturer;
public:
    const Name &getLecturer() const;

    void setLecturer(const Name &lecturer);

    const Name &getCourseGta() const;

    void setCourseGta(const Name &courseGta);

    const Name &getLabGta() const;

    void setLabGta(const Name &labGta);

private:
    Name courseGTA;
    Name labGTA;

};
