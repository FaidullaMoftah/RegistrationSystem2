#define DATE_H
class Date{
    int year;
    int month;
    int day;
public:
    int getYear() const {
        return year;
    }

    void setYear(int year) {
        Date::year = year;
    }

    int getDay() const {
        return day;
    }

    void setDay(int day) {
        Date::day = day;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int month) {
        Date::month = month;
    }
    Date(int d, int m, int y);
};