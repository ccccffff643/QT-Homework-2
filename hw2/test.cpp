#include<iostream>
#include<math.h>
#include<cmath>
#include<iomanip>       // using fixed
using namespace std;

class Math
{
private:
	double PI=3.14159;

public:
	double getPI();

	double abs(double a);//絕對值

	double add(double a, double b);
	double sub(double a, double b);

	double min(double a, double b);
	double min(double arr[], int n);

	double max(double a, double b);
	double max(double arr[], int n);

	double pow(double x, int n);

	double avg(double a, double b);
	double avg(double arr[], int n);

};

double Math::getPI()
{
	return PI;
}

double Math::abs(double a)
{
	return fabs(a);
}

double Math::add(double a, double b)
{
	return a + b;
}

double Math::sub(double a, double b)
{
	return a - b;
}

double Math::min(double a, double b)
{
	if (a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

double Math::max(double a, double b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

double Math::avg(double a, double b)
{
	return (a + b) / 2;
}

double Math::pow(double x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return x * pow(x, n - 1);
}

double Math::min(double arr[], int n)
{
	double minn = arr[0];

	for (int i = 0;i < n;i++)
	{
		if (arr[i] < minn)
		{
			minn = arr[i];
		}
	}
	return minn;
}

double Math::max(double arr[], int n)
{
	double maxx = arr[0];

	for (int i = 0;i < n;i++)
	{
		if (arr[i] > maxx)
		{
			maxx = arr[i];
		}
	}
	return maxx;
}

double Math::avg(double arr[], int n)
{
	double avgg=0;

	for (int i = 0;i < n;i++)
	{
		avgg += arr[i];
	}

	return avgg / n;
}

int main()
{
	Math math;
	double a = -6, b = 8, c[10] = { 1,-2,8,-5,12,9,7,-4,3,-6 };
	int n = 10;

	cout << "PI: " << math.getPI()<< endl;
	cout << "Absoulate of A: " << math.abs(a)<< endl;

	cout << "Addition of A and B: " << math.add(a, b) << endl;
	cout << "Subtraction of A and B: " << math.sub(a,b) << endl;
	cout << "Minimum of A and B: " << math.min(a,b) << endl;
	cout << "Maximum of A and B: " << math.max(a, b) << endl;
	cout << "Average of A and B: " << math.avg(a, b) << endl;
    
	cout << fixed << "A to the power of n is: " << math.pow(a, n ) << endl;     // modified

	cout << "Minumum of array C: " << math.min(c,n) << endl;
	cout << "Maximum of array C: " << math.max(c, n) << endl;
	cout << "Average of array C: " << math.avg(c, n) << endl;

	return 0;

}