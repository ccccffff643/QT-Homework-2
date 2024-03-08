#include <string>

using std::string;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time();
    Time(int hour, int minute, int second);
    ~Time();

    int getHour();
    int getMinute();
    int getSecond();
    string getTime();

    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

    void add(int second);
    void sub(int second);


    int compare(Time another);
};
