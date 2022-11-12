#include <iostream>
using namespace std;

typedef int GradeType[100];

float findAverage (const GradeType, int);
int   findHighest (const GradeType, int);
int   findLowest  (const GradeType, int);

int main()

{
  GradeType  grades;
  int  numberOfGrades;
  int pos = 0;
  float avgOfGrades;
  int highestGrade;
  int lowestGrade;
 
  
   cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
    cin >> grades[pos];
    
      while (grades[pos] != -99 && ++pos < 100 )
  {
    cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
    cin >> grades[pos];
  }
  
   pos--; 
    numberOfGrades = pos;
    avgOfGrades = findAverage( grades, numberOfGrades );
    cout << endl << "The average of all the grades is " << avgOfGrades << endl;

    highestGrade = findHighest( grades, numberOfGrades );
    cout << endl << "The highest grade is " << highestGrade << endl;
    
    lowestGrade = findLowest( grades, numberOfGrades );
    cout << endl << "The lowest grade is " << lowestGrade << endl;

    return 0;
}

float findAverage( const GradeType array, int size )
 {
    float sum = 0;  
    for (int pos = 0; pos < size; pos++)
        sum = sum + array[pos];

    return (sum / size); 
}

int findHighest(const GradeType array, int size)
{
  int highestgrade = array[0];
  for (int pos = 0; pos < size; pos++)
    if(array[pos] > highestgrade)
    {
      highestgrade = array[pos];
    }
  return highestgrade;
}

int findLowest(const GradeType array, int size)
{
	
  int lowestgrade = array[0];
  for (int pos = 0; pos < size; pos++)
    if(array[pos] < lowestgrade)
    {
      lowestgrade = array[pos];
    }
  return lowestgrade;
  
}



