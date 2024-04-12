#include <iostream>
#include <iomanip>
#include <string>

using std::string;
using std::cout;
using std::left;
using std::setfill;
using std::setw;

class Vehicle {

protected:
	string brand;
	string model;
	string type;
	static int count;

public:
	Vehicle();
	Vehicle(string brand, string model, string type);
	~Vehicle();
	static int getCount();
	virtual void display();
};

class Car : public Vehicle{

private:
	int year;
	double price;

public:
	Car(string brand, string model, string type, int year, double price);
	Car(const Car& car);
	void setPrice(double price);
	double getPrice();
	int getYear();
	void display() override;
};

Vehicle::Vehicle() 
:	brand(string()),
	model(string()),
	type(string())
{
	count++;
}

Vehicle::Vehicle(string brand, string model, string type) 
:	brand(brand),
	model(model),
	type(type)
{
	count++;
}

Vehicle::~Vehicle() 
{
	count--;
}

int Vehicle::getCount() {

	return count;
}
void Vehicle::display() {

	cout<< left << setfill(' ')
		<< "Brand: " << setw(7) << this->model
		<< "Model: " << setw(13) << this->brand
		<< "Type: " << setw(13) << this->type
		<< '\n';
}

Car::Car(string brand, string model, string type, int year, double price) 
:	year(year),
	price(price)
{
	this->brand = brand;
	this->model = model;
	this->type = type;
}

Car::Car(const Car& car) {

	this->brand = car.brand;
	this->model = car.model;
	this->type = car.type;
	this->year = car.year;
	this->price = car.price;
}

void Car::setPrice(double price) {

	this->price = price;
}

double Car::getPrice() {

	return this->price;
}

int Car::getYear() {

	return this->year;
}

void Car::display() {

	cout << left << setfill(' ')
		<< setw(7) << this->model
		<< setw(13) << this->brand
		<< setw(13) << this->type
		<< setw(6) << this->year
		<< setw(10) << this->price
		<< '\n';
}

int Vehicle::count = 0;

int main() {

	Vehicle v1("Volkswagen", "Golf", "compact");
	Car c1("Camry", "Toyota", "sedan", 2015, 9800);
	Car c2("Escape", "Ford", "crossover", 2015, 15900);
	Car c3("Civic", "Honda", "sedan", 2016, 10200);
	Car c4("RAV4", "Toyota", "crossover", 2016, 12800);
	Car c5("4Runner", "Toyota", "suv", 2015, 16900);
	Car c6("CR-V", "Honda", "crossover", 2016, 17900);

	// output

	cout << "> INFORMATION OF FIRST VEHICLE:\n";
	v1.display();

	cout << '\n';
	cout << left << setfill(' ')
		 << setw(7) << "Model"
		 << setw(13) << "Brand"
		 << setw(13) << "Type"
		 << setw(6) << "Year"
		 << setw(10) << "Price"
		 << '\n';
	cout << "=================================================\n";
	cout << "> LIST OF CARS:\n";
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();
	c6.display();
	cout << "=================================================\n";
	cout << "Total vehicle: " << Vehicle::getCount()<< '\n';
	v1.~Vehicle();
	cout << '\n';
	cout << "> DELETE FIRST VEHICLE SUCCESSFULLY!\n";

	cout << "> LIST OF CARS IN ASCENDING PRICE ORDER:\n";
	cout << left << setfill(' ')
		 << setw(7) << "Model"
		 << setw(13) << "Brand"
		 << setw(13) << "Type"
		 << setw(6) << "Year"
		 << setw(10) << "Price"
		 << '\n';
	cout << "=================================================\n";
	if (c1.getPrice() < c2.getPrice() && c1.getPrice() < c3.getPrice() &&
		c1.getPrice() < c4.getPrice() && c1.getPrice() < c5.getPrice() &&
		c1.getPrice() < c6.getPrice()) 
	{

		c1.display();
		if (c3.getPrice() < c6.getPrice() && c3.getPrice() < c2.getPrice() &&
			c3.getPrice() < c4.getPrice() && c3.getPrice() < c5.getPrice())
		{

			c3.display();	// c2, c4, c5, c6
			if (c4.getPrice() < c6.getPrice() && c4.getPrice() < c5.getPrice() &&
				c4.getPrice() < c2.getPrice())
			{
				c4.display();	// c2, c5, c6
				if (c2.getPrice() < c6.getPrice() && c2.getPrice() < c5.getPrice()) 
				{

					c2.display();
					if (c5.getPrice() < c6.getPrice()) {

						c5.display();
						c6.display();
					}
					else {
						
						c6.display();
						c5.display();
					}
				}
				else if (c5.getPrice() < c6.getPrice() && c5.getPrice() < c4.getPrice())
				{

					c5.display();
					if (c4.getPrice() < c6.getPrice()) {

						c4.display();
						c6.display();
					}
					else {

						c6.display();
						c4.display();
					}
				}
				else {

					c6.display();
					if (c4.getPrice() < c5.getPrice()) {

						c4.display();
						c5.display();
					}
					else {

						c5.display();
						c4.display();
					}
				}
			}
		}
		
	}

	cout << "Total vehicle: " << Vehicle::getCount() << '\n';
}