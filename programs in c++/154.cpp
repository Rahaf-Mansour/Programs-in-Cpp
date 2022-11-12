#include <iostream>
#include <iomanip>
using namespace std;

/* One Dollar =  1.06 euros
9.73 pesos
124.35  yen
*/

// This program will input American money and convert it to foreign currency
// Prototypes of the functions

void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars); 
float convertToEuros(float dollars); 
float convertToPesos(float dollars);

const float TO_EUROS = 1.06;
const float TO_PESOS = 9.73;
const float TO_YEN = 124.35;

int main ()

{
float dollars;
float euros;
float pesos;
float yen;

cout << fixed << showpoint << setprecision(2);
cout << "Please input the amount of American Dollars you want converted " << endl;
cout << "to euros and pesos" << endl;
cin >> dollars;

convertMulti( dollars,  euros,  pesos);
cout << endl ;
cout << "$" << dollars << " is converted to "<< euros << " euros " << "and " << pesos << " pesos" << endl << endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << "to euros, pesos and yen" << endl;
cin >> dollars;

convertMulti( dollars, euros, pesos, yen);
cout << endl ;
cout << "$" << dollars << " is converted to "<< euros << " euros" << ", " << pesos << " pesos and " << yen << " yen" << endl << endl;
 
cout << "Please input the amount of American Dollars you want converted\n";
cout << "to yen" <<endl;
cin >> dollars;

convertToYen( dollars ); 
yen = convertToYen(dollars);
cout << endl ;
cout << "$" << dollars << " is converted to "<< yen << " yen" << endl << endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << "to euros" << endl;
cin	>> dollars;

convertToEuros( dollars ); 
euros = convertToEuros(dollars);
cout << endl ;
cout << "$" << dollars << " is converted to "<< euros << " euros" << endl << endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << "to pesos " << endl;
cin >> dollars;

convertToPesos( dollars ); 
pesos = convertToPesos(dollars);
cout << endl ;
cout << "$" << dollars << " is converted to "<< pesos << " pesos" << endl << endl;

return 0;
}

void convertMulti(float dollars, float& euros, float& pesos)

{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
}

void convertMulti(float dollars, float& euros, float& pesos, float& yen)

{
    euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
	yen = convertToYen(dollars);
}


float convertToYen(float dollars)

{
   return dollars * TO_YEN;
}


float convertToEuros(float dollars)
{
   return dollars * TO_EUROS;
}


float convertToPesos(float dollars)

{
   return dollars * TO_PESOS;
}

