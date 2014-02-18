#include <iostream>
using namespace std;

int main() {
	
  for (int n; n != -999;)
{
   cout << "Please enter a number, if you want the system to stop, please enter -999"<< endl;
   cin >> n; 
   if (n!=-999)
   cout<< "The triple of the number you entered is:" << n*3 << endl;
   else 
     cout<< "Thank you very much for using this program" << endl;
}
  
	return 0;
}
