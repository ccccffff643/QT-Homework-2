#ifndef POINT
#define POINT

class Point
{
protected:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    ~Point();

    void setX(int x);
    void setY(int y);
    void setPoint(int x, int y);

    int getX();
    int getY();
};

#endif
