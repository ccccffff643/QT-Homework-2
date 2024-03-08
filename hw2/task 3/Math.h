class Math
{
private:
    static const double PI;
public:
    Math();
    ~Math();

    static double getPI();
    static double abs(double a);
    static double add(double a, double b);
    static double sub(double a, double b);
    static double min(double a, double b);
    static double min(double arr[], int n);
    static double max(double a, double b);
    static double max(double arr[], int n);
    static double pow(double x, int n);
    static double avg(double a, double b);
    static double avg(double arr[], int n);
};
