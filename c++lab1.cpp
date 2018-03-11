//a program about Colltaz Sequence
 
#include <iostream>
using namespace std;

class Collatz{
public:
	void title(void)
	{
		cout << "Please enter a postive integer:" ;
	}

	//use recursive function to do the calculate
	int calculate(int number)
	{
		if (number == 1){
			cout << number << "\nEnd the program" << endl;
			return 0;
		}
		else{
			if (number % 2 == 0){
				cout << number<<' ';
				number /= 2;
				calculate(number);
			}
			else{
				cout << number<<' ';
				number = number * 3 + 1;
				calculate(number);
			}
		}
	}

	void warning(void){
		cout << "The number can't be 0 or negative number " << endl;
	}
};

int main(void)
{
	Collatz collatz;
	int number;
	
	collatz.title();
	cin >> number;

	//detect error
	while (number <= 0){
		collatz.warning();
		collatz.title();
		cin >> number;
	}

	//call function
	collatz.calculate(number);

	return 0;
}
