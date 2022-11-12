
#include <iostream>
using namespace std;
//function miles to kilometers
float convertToKilometers(float miles);
float convertToMiles(float kilometers);
int main()
{
float num_miles;
float num_kilometers;
int option;

do
{
  cout << endl << endl << "Please input" << endl;
  cout << endl << "   " << "1. Convert miles to kilometers " << endl;
  cout << "   " <<"2. Convert kilometers to miles " << endl;
  cout <<"3. Quit " << endl;
  cin >> option;
  
  if (option == 1)
  {
  	float result_kilometers;
   cout << "Please input the miles to be converted " << endl ;
   cin >> num_miles;
   result_kilometers = convertToKilometers(num_miles);
   cout << endl << "  " << num_miles << " miles = " << result_kilometers << " kilometers" << endl;
  }
  
  else if (option == 2)
  {
  	float result_miles;
   cout << "Please input the kilometers to be converted " << endl;
   cin >> num_kilometers;
   result_miles = convertToMiles(num_kilometers);
   cout << endl << "  " << num_kilometers << " kilometers = " << result_miles << " miles" << endl;
  }
  
   else if ( option < 1 || option > 3)
 cout << " Invalid choice, try again! " << endl;

} while (option != 3);

return 0;
}
float convertToKilometers(float miles)
{
	float kilometers;
kilometers = miles * 1.61;
return kilometers;
}
float convertToMiles(float kilometers)
{
	float miles;
miles = kilometers * 0.621;
return miles;
}

