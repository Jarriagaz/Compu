#include <iostream>
using namespace std;

int main() {
	
  int a=50, b=70;
  int years=0;
  while (a<b)
  {
    a=a*1.03;
    b=b*1.02;
    years++;
   }
   
  cout<< "In " << years << " years country a will have surpased the population of country b "<< endl;
      
	return 0;
}
