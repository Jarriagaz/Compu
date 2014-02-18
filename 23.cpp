#include <iostream>
using namespace std;

int main() {
	
  int n, sum=0, count= 0;
  

do {
   cout << "Please enter a number (or a number smaller to 1 to stop)" << endl;
   cin >> n; 
   if (n>0)
     {
       sum += n;
       ++count;
     }
   
 }   
     while (n>1); 

 cout<< "The average of the numbers you entered is:  " << sum/count << endl;
      
	return 0;
}
