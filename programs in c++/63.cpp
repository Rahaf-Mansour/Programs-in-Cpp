#include<iostream>
using namespace std;
int main ()
{

	const int ISIZE = 4;
int  t []= { 3 , 2 , 1} ;
int  t2 []= { 3 , 2 , 1} ;
bool areEqual=true;
int indx=0;
while (areEqual && indx < ISIZE)
{
   if(t[indx] != t2[indx])
      areEqual = false;
   indx++;
}
cout << areEqual;
}
