#include "Time.h"

Time::Time()
    : hour(),
      minute(),
      second()
{
}

Time::Time(int hour, int minute, int second)
    : hour(hour),
      minute(minute),
      second(second)
{
}

Time::~Time()
{
}

int Time::getHour(){

    return hour;
}

int Time::getMinute(){

    return minute;
}

int Time::getSecond(){

    return second;
}

string Time::getTime(){

    return  (hour> 10? std::to_string(hour): "0"+ std::to_string(hour))+ ":"+ 
            (minute> 10? std::to_string(minute): "0"+ std::to_string(minute))+ ":"+ 
            (second> 10? std::to_string(second): "0"+ std::to_string(second));
}

void Time::setHour(int hour){

    if(hour> 23){

        this->hour= 23;
    }
    else if(hour< 0){

        this->hour= 0;
    }
    else{

        this->hour= hour;
    }
}
void Time::setMinute(int minute){

    if(minute> 59){

        this->minute= 59;
    }
    else if(minute< 0){

        this->minute= 0;
    }
    else{

        this->minute= minute;
    }
}
void Time::setSecond(int second){

    if(second> 59){

        this->second= 59;
    }
    else if(second< 0){

        this->second= 0;
    }
    else{

        this->second= second;
    }
}

void Time::add(int second){

    this->second+= second;

    // carry
    this->minute+= (this->second/ 60);
    this->hour+= (this->minute/ 60);

    this->second%= 60;
    this->minute%= 60;
    this->hour%= 24;
}

void Time::sub(int second){

    this->second-= second;

    // borrow
    if(this->second< 0){

        this->minute--;
        this->second+= 60;
    }

    if(this->minute< 0){

        this->hour--;
        this->minute+= 60;
    }

    if(this->hour< 0){

        this->hour+= 24;
    }
}


int Time::compare(Time another){

    int t1, t2;
    t1= this->hour* 10000+ this->minute* 100+ this->second;
    t2= another.hour* 10000+ another.minute* 100+ another.second;

    if(t1< t2){

        return -1;
    }
    else if(t1== t2){

        return 0;
    }
    else{

        return 1;
    }
}