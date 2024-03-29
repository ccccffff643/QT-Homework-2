#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::getline;
using std::left;
using std::setfill;
using std::setw;

class Product
{
    protected:
        
        string name;
        string brand;
        double price;
    
    public:

        Product();
        Product(string name, string brand, double price);
        Product(const Product& product);
        virtual void display();
        double getPrice();
};

class Laptop: public Product
{

    protected:

        int ram;
        int hdd;

    public:

        Laptop(string name, string brand, int ram, int hdd, double price);
        void display() override;
};

class Smartphone: public Product
{

    protected:

        string os;
        string camera;
    
    public:

        Smartphone(string name, string brand, string os, string camera, double price);
        void display() override;
};

class Order
{

    private:

        string name;
        string address;
        vector<Product*> items;
        double delivery;

    public:

        Order();
        void setName(string name);
        void setAddress(string address);
        void setDelivery(double delivery);
        void add(Product* product);
        double getTotal();
        void display();
};

Product::Product()
{

}

Product::Product(string name, string brand, double price)
:   name(name),
    brand(brand),
    price(price)
{

}

Product::Product(const Product& product)
:   name(product.name),
    brand(product.brand),
    price(product.price)
{

}

void Product::display()
{

}

double Product::getPrice(){

    return this->price;
}

Laptop::Laptop(string name, string brand, int ram, int hdd, double price)
:   ram(ram),
    hdd(hdd)
{
    this->name= name;
    this->brand= brand;
    this->price= price;
}

void Laptop::display(){

    cout<< setfill(' ')<< left
        << setw(19)<< this->name
        << setw(13)<< this->brand
        << setw(8)<< this->price
        << '\n';    
}

Smartphone::Smartphone(string name, string brand, string os, string camera, double price)
:   os(os),
    camera(camera)
{
    this->name= name;
    this->brand= brand;
    this->price= price;
}

void Smartphone::display(){

    cout<< setfill(' ')<< left
        << setw(19)<< this->name
        << setw(13)<< this->brand
        << setw(8)<< this->price
        << '\n';    
}

Order::Order()
{
    // this->items.clear();
}
void Order::setName(string name){
    
    this->name= name;
}
void Order::setAddress(string address){
    
    this->address= address;
}
void Order::setDelivery(double delivery){
    
    this->delivery= delivery;
}
void Order::add(Product* product){
    
    this->items.push_back(product);
}
double Order::getTotal(){
    
    double total= 0;
    for(int i= 0; i< this->items.size(); i++){

        total+= items[i]->getPrice();
    }
    total+= this->delivery;
    return total;
}
void Order::display(){
    
    // order info
    cout<< "NAME: "<< this->name<< '\n';
    cout<< "ADDRESS: "<< this->address<< '\n';

    cout<< "-----------------------------------\n";
    // product output
    for(int i= 0; i< this->items.size(); i++){
        
        items[i]->display();
    }
    
    cout<< "-----------------------------------\n";
    // delivery fee stuffs
    cout<< "DELIVERY FEE: "<< this->delivery<< '\n';
    cout<< "TOTAL: "<< getTotal()<< '\n';
}

int main(){

    Order order;

    Laptop nb1("VivoBook", "Asus", 8, 512, 30000);
    Laptop nb2("Swift 5", "Acer", 16, 512, 34000);

    Smartphone mobile1("Galaxy S23 Ultra", "Samsung", "Android", "12", 36900);
    Smartphone mobile2("iPhone 14 Pro", "Apple", "iOS", "12", 38000);
    Smartphone mobile3("Xiaomi 13 Pro", "Xiaomi", "Android", "12", 34888);

    // for input buffer
    string s_buffer;
    int i_buffer;
    double d_buffer;

    // Input order info

    cout<< "> INPUT ORDER:\n";
    cout<< "ENTER name: ";
    getline(cin, s_buffer);
    order.setName(s_buffer);
    cout<< "ENTER address: ";
    getline(cin, s_buffer);
    order.setAddress(s_buffer);

    cout<< '\n';
    // pick product
    while(true){

        cout<< "PRODUCT LIST:\n";
        cout<< setfill(' ')<< left
            << setw(7)<< "No."
            << setw(19)<< "Name"
            << setw(13)<< "Brand"
            << setw(8)<< "Price"
            << '\n';
        cout<< "-----------------------------------------------\n";
        
        cout<< setfill(' ')<< left
            << setw(7)<< 1;
        nb1.display();
        cout<< setfill(' ')<< left
            << setw(7)<< 2;
        nb2.display();
        cout<< setfill(' ')<< left
            << setw(7)<< 3;
        mobile1.display();
        cout<< setfill(' ')<< left
            << setw(7)<< 4;
        mobile2.display();
        cout<< setfill(' ')<< left
            << setw(7)<< 5;
        mobile3.display();
        
        cout<< '\n';

        cout<< "Choose product (input 0 to stop choosing): ";
        // cin.ignore();
        cin>> i_buffer;

        if(!i_buffer){

            break;
        }
        else if(i_buffer== 1){
        
            order.add(&nb1);
        }
        else if(i_buffer== 2){
        
            order.add(&nb2);
        }
        else if(i_buffer== 3){
        
            order.add(&mobile1);
        }
        else if(i_buffer== 4){
        
            order.add(&mobile2);
        }
        else if(i_buffer== 5){
        
            order.add(&mobile3);
        }

        cout<< "Add more product (Y/N) ? ";
        cin>> s_buffer;
        if(s_buffer== "N" || s_buffer== "n"){
            
            break;
        }
    }

    cout<< '\n';
    // Input delivery fee
    cout<< "Input delivery fee: ";
    cin>> d_buffer;
    order.setDelivery(d_buffer);

    // Order details
    cout<< "> ORDER DETAILS:\n";
    order.display();

    cout<< "\nEND.\n";
}