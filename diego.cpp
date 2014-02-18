#include <iostream>
using namespace std;

int main() {
	// Ten numbers
	
	double n1;
	double n2;
        double n3;
	double n4;
	double n5;
	double n6; 
	double n7;
	double n8;
	double n9;
	double n10;
	double max;
	double min;
	
	cout << "Give me a number: ";
	cin >> n1;
	
	cout << "Give me a numbe: ";
	cin >> n2;

	cout << "Give me a number: ";
	cin >> n3;
	
        cout << "Give me a number: ";
	cin >> n4;

	cout << "Give me a number: ";
	cin >> n5;
	 
        cout << "Give me a number: ";
	cin >> n6;

	cout << "Give me a number: ";
	cin >> n7;
	
	cout << "Give me a number: ";
	cin >> n8;

	cout << "Give me a number: ";
	cin >> n9;

	cout << "Give me a number: ";
	cin >> n10;

	if (n1>n2 and n1>n3 and n1>n4 and n1>n5 and n1>n6 and n1>n7 and n1>n8 and n1>n9 and n1>n10)
	{
	  max=n1;
	}
	else if (n2>n1 and n2>n3 and n2>n4 and n2>n5 and n2>n6 and n2>n7 and n2>n8 and n2>n9 and n2>n10)
        {
	  max=n2;
        }
	else if (n3>n2 and n3>n1 and n3>n4 and n3>n5 and n3>n6 and n3>n7 and n3>n8 and n3>n9 and n3>n10)
	{
	  max=n3;
        }
	else if (n4>n1 and n4>n2 and n4>n3 and n4>n5 and n4>n6 and n4>n7 and n4>n8 and n4>n9 and n4>n10)
        {
          max=n4; 
        } 
	else if (n5>n4 and n5>n3 and n5>n2 and n5>n1 and n5>n6 and n5>n7 and n5>n8 and n5>n9 and n5>n10)
        {
          max=n5; 
        } 
        
	else if (n6>n5 and n6>n4 and n6>n3 and n6>n2 and n6>n1 and n6>n7 and n6>n8 and n6>n9 and n6>n10)
        {
          max=n6;
	}
	else if (n7>n8 and n7>n6 and n7>n5 and n7>n4 and n7>n3 and n7>n2 and n7>n1 and n7>n9 and n7>n10)
        {
          max=n7;
	}
	else if (n8>n9 and n8>n7 and n8>n6 and n8>n5 and n8>n4 and n8>n3 and n8>n2 and n8>n1 and n8>n10)
        {
          max=n8;
	}
	else if (n9>n1 and n9>n2 and n9>n3 and n9>n4 and n9>n5 and n9>n6 and n9>n7 and n9>n8 and n9>n10)
        {
          max=n9;
	}
	else if (n10>n1 and n10>n2 and n10>n3 and n10>n4 and n10>n5 and n10>n6 and n10>n7 and n10>n8 and n10>n9)
        {
          max=n10;
	}

double aver= (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;

	cout << "The sum of the numbers is:" << (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10) << endl;
	cout << "The average of the numbers is:" << aver << endl;
	cout << "The maximum of the numbers is:" << max << endl;


	return 0;
}
