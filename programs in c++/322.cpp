#include <iostream>
const int TOTALYEARS = 100;
    
int main() {
int ageFrequency[TOTALYEARS] = {};
int currentAge = -99;

while ( true ) 
{
std::cout << "Please input an age from one to 100, put -99 to stop\n";
std::cin >> currentAge;
    
if ( currentAge == -99 ) {
break;
}
if ( currentAge > 0 and currentAge < (TOTALYEARS+1) )
{
ageFrequency[currentAge-1] += 1;
} else {

std::cerr << "** Note: invalid age (" << currentAge << ") discarded **\n";
}}

for ( int age = 0 ; age < TOTALYEARS ; age++ ) {
if ( ageFrequency[age] > 0 ) {
std::cout << "The number of people " << (age+1) << " years old is " << ageFrequency[age] << '\n';
}
}
 return 0;
}


