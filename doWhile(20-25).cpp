//137339 Peter Chemelil
//do while loop exercise 2
#include <iostream>
using namespace std;

int main(){
	int number = 20;
	int finish = 0;
	
	do{
		
		finish= finish + number;
		number++;
	}while(number<=25);
	
	cout<< "Sum of number between 20-25 is:\n"<<finish<< endl;
	
	return 0;
}
