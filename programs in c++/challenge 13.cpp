#include <iostream>
#include <string>
using namespace std; 
int main() 
{ 

int students_num; 

cout << "\n\n How many students are in the class? ";
cin >> students_num; 

while (students_num < 1 || students_num > 25) 
{ 
cout << "\n That is an invalid number of students\n"; 
cout << " Try again, enter a valid number : "; 
cin >> students_num; 
} 

cout << endl;
string name[students_num]; 
 
for (int i = 0; i < students_num; i++) 
{ 
cout << " Enter the name of student " << i + 1 << ": ";
cin >> name[i];
 } 
 
string check; 
for (int j = 1; j < students_num; j++)
 { 
check = name[j];
int m;
for (m = j - 1; m >= 0 && name[m] > check; m--) 
{
name[m + 1] = name[m];
 } 
name[m + 1] = check;
}
 cout <<"\n The first student is: " << name[0]; 
cout << "\n The last student is: " << name[students_num - 1] << endl;

return 0; 
 
}
 
