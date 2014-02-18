#include <iostream>
using namespace std;

int main() {
	// Ten numbers

       
       int array [10]; 
       int n=0;
       int i=0; 
       int max;
       int min;
       int sum=0; 
      
    do {
	cout << "Give me a number: ";
	cin >> n;
	array [i]=n;
	sum = sum+n;
	if (n<min)
	  { 
	    min=n; 
	  }
	if (n>max)
	  {
	    max=n;
	  }
	i = i + 1;
 }
    while (i<10); 

double aver= sum/10;

	cout << "The sum of the numbers is:" << sum << endl;
	cout << "The average of the numbers is:" << aver << endl;
	cout << "The maximum number is:" << max << endl;
	cout << "The minimum number is:" << min << endl; 

	return 0;
}
