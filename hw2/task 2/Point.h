class Point
{
private:
    double x, y;
public:
    Point();
    Point(double x, double y);
    ~Point();

    void setX(double x);
    void setY(double y);
    void setPoint(double x, double y);
    
    double getX();
    double getY();
    double distance(double x, double y);
    double distance(Point another);

};
