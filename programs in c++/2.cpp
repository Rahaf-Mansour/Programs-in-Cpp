#include<iostream>
using namespace std;
int main()
{
	double paid,received,lost;
	
	cout<<"The number of shares of stock that Kathryn bought is 600 "<<"\n";
	cout<<"The price of each one is: 21.77$"<<"\n";
	cout<<"The selling price is: 16.44$"<<"\n";
	paid=600*21.77;
	cout<<"The total amount paid per share="<<paid<<"\n";
		received=600*16.44;
		cout<<"The total amount received from the sale of shares="<<received<<"\n";
lost=paid-received;
cout<<"The total amount of money lost="<<lost;
return 0;
}


