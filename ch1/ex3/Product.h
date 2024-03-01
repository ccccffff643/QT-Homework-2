#include <string>

using std::string;

class Product
{
private:
    string ID;
    string Name;
    double Price;
    int Quantity;
public:
    Product(/* args */);
    ~Product();

    void Input();
    void Output();
};
