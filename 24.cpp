#include <iostream>
using namespace std;

int main() {
	
  int n, num=0;
    int min(100),max(200); 
  

do {
   cout << "Please enter a number (or 0 to stop)" << endl;
   cin >> n; 
   if (n>=min && n<=max)
     num++;
    
     }
 while (n != 0); 
   
 cout<< "The amount of numbers between " << min << " and " << max<< " are: " <<num<< endl;
      
	return 0;
}
