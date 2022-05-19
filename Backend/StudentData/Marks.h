class Marks {
   int exam1Mark;
public:
    int getExam1Mark() const;

    void setExam1Mark(int exam1Mark);

    int getExam2Mark() const;

    void setExam2Mark(int exam2Mark);

    int getYearWork() const;

    void setYearWork(int yearWork);

    int getFinalMark() const;

    void setFinalMark(int finalMark);

    int getSum() const;

    void setSum();

private:
    int exam2Mark;
   int yearWork;
   int finalMark;
   int sum;
public:
    Marks(int exam1Mark, int exam2Mark, int yearWork, int finalMark, int sum);
};