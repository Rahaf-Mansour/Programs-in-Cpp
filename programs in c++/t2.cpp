#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
const int ISIZE = 5;
 int sales[ISIZE]; 
 ifstream dataFile;           
 dataFile.open("sales.dat");
 if (!dataFile)
    cout << "Error opening data file\n";
 else  // Input daily sales
 {  for (int day = 0; day < ISIZE; day++) 
       dataFile >> sales[day];  
    dataFile.close();
 }

}
