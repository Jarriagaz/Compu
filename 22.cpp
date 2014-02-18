#include <iostream>
using namespace std;

int main() {
	
  int n, cuenta(-1); 
 

do {
   cout << "Please enter a positive number (or enter 0 or less to quit)" << endl;
   cin >> n; 
   cuenta++; 
  
 }   
     while (n>0); 
 cout<< "The amount of positive numbers you entered where:  " << cuenta<< endl;
      
	return 0;
}
