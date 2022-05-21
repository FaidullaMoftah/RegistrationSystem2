class GPA {
    double gpa;
    int numSemesters;
    double gpaList[16];
public:
    double getGpa() const;

    void setGpa(double gpa);

    int getNumSemesters() const;

    void setNumSemesters(int numSemesters);

    const double *getGpaList() const;
};
