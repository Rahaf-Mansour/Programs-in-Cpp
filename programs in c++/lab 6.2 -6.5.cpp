#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;

	cout <<"Main function outer block" << endl;
    cout <<" PI, RATE, findArea, findCircumference, radius"
	       " are active here" << endl << endl;
	{
		float area;
		cout << "Main function first inner block" << endl;
		cout << " PI, RATE, findArea, findCircumference, radius, area"
		        " are active here" << endl << endl;

		findArea(radius, area);

		cout << "The radius = " << radius << endl;
		cout << "The area = " << area << endl << endl;
	}

	{
        float radius = 10;
		float circumference;

		cout << "Main function second inner block" << endl;
		cout << " PI, RATE, findArea, findCircumference, radius (local=10)\n"
		        " circumference are active here" << endl << endl;

		findCircumference(radius, circumference);

	cout << "The radius = " << radius << endl;
		cout << "The circumference = " << circumference << endl << endl;
	}

	cout << "Main function after all the calls" << endl;
	cout << " PI, RATE, findArea, findCircumference, radius(12)"
	        " are active here" << endl << endl;

	return 0;
}


void findArea(float rad, float& answer)
{
	answer = PI * rad * rad;

}


void findCircumference(float length, float& distance)
{

	distance = 2 * PI * length;

}

