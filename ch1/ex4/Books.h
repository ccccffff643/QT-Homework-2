#include <string>

using std::string;

class Books
{
private:
    string Code;
    string Name;
    string Publisher;
    int NumPage;
    double Price;
public:
    Books(/* args */);
    ~Books();

    void Input();
    void Output();
};
