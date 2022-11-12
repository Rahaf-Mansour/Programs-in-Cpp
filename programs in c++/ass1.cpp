#include<iostream>
using namespace std;
int main()
{
	int distance , hours , total=0 , speed , i;
	cout << " \n  What is the speed of the vehicle in mph?  "; 
	cin >> speed;
	cout << "\n  How many hours has it traveled?  ";
	cin >> hours;
		cout << "\n "<<"     "<< " Hour"<<"       "<<" Miles traveled \n\n";
	
	for ( i=1 ; i<=hours ; i++) 
	{

	distance = speed * i ;
	cout<<" \t" << i <<"\t \t"<< distance << endl;

    }
		cout << "\n\n  The total distance = "<< distance << endl;
	
return 0 ;
}

