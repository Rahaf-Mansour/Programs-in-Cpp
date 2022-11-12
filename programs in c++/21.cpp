
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
float convertToYen(float dollars, float yen); 
float convertToEuros(float dollars, float euros); 
float convertToPesos(float dollars, float pesos);

int main ()

{
float dollars; float euros; float pesos; float yen; float to_yen; float to_euros; float to_pesos;

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

convertToYen( dollars , yen); 
to_yen = convertToYen(dollars , yen);
cout << endl ;
cout << "$" << dollars << " is converted to "<< to_yen << " yen" << endl << endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << "to euros" << endl;
cin	>> dollars;

convertToEuros( dollars , euros); 
to_euros = convertToEuros(dollars , euros);
cout << endl ;
cout << "$" << dollars << " is converted to "<< to_euros << " euros" << endl << endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << " to pesos " << endl;
cin >> dollars;

// Fill in the code to call convertToPesos
// Fill in the code to output the value of those dollars converted to pesos

return 0;
}

void	convertMulti(float dollars, float& euros, float& pesos)

{
 euros = dollars * 1.06;
  pesos = dollars * 9.73;
}

void	convertMulti(float dollars, float& euros, float& pesos, float& yen)

{
  euros = dollars * 1.06;
  pesos = dollars * 9.73;
  yen = dollars * 124.35;
}


float convertToYen(float dollars, float yen)

{
   yen = dollars * 124.35;
   return yen;
}


float convertToEuros(float dollars, float euros)
{
euros = dollars * 1.06;
return euros;
}


float convertToPesos(float dollars)

{
cout << "The function convertToPesos was called with " << dollars
<< " dollars" << endl;

return 0;
}


