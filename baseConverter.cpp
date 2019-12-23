#include <iostream>
#include <cmath>
using namespace std;

int digitCounter(int n,int counter = 0)
{
	//Base Case
	if (n == 0){
		return counter;
	}else{
		//Recursive case
		counter += 1;
		return digitCounter(floor(n/10),counter);
	}
}

int power(int a, int b)
{
	int product = 1;
	for(int i = 1;i <= b;i++)
	{
		product = product * a;
	}

	return product;
}

void baseConv(int a,int b,int c)
{
	//First we convert a to base 10
	int digits = digitCounter(a);
	int baseTen = 0;
	for(int i = 0; i < digits;i++)
	{
		baseTen += power(b,i)*(a%10);
		a = floor(a/10);
	}

	//Then we convert baseTen to base c

	if(baseTen == 0){
		cout << 0;
	}else{
		int newBaseDigits[32];
		string newBaseDigitsStr = "";
		int k = 0;
		while(baseTen != 0){
			newBaseDigits[k] = baseTen % c;

			baseTen = floor(baseTen / c);

			k += 1;
		}

		for(int j = k-1;j >= 0;j--){
			newBaseDigitsStr += to_string(newBaseDigits[j]);
		}
		
		cout << (newBaseDigitsStr);
	}
	
}

int main()
{
	int a,b,c;
	cout << "Enter the number : ";
	cin >> a;
	
	cout << "From Base :";
	
	cin >> b;
	
	cout << "To Base : ";
	
	cin >> c;
	
	baseConv(a,b,c);
	return 0;
}
