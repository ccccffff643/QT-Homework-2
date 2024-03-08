#include <string>

using std::string;

class Book
{
private:
    string title;
    string author;
    int quantity;
public:
    Book();
    Book(string title);
    Book(string title, string author);
    ~Book();

    string getTitle();
    string getAuthor();
    int getQuantity();

    void setTitle(string title);
    void setAuthor(string author);
    void setQuantity(int quantity);
};
