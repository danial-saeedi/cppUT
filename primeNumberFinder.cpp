#include <iostream> 
#include <vector> 
using namespace std;

void storeNumber(vector<int> &num)
{
	cout << "Enter some numbers:(It stops when you enter 0)" << endl;
	int n = 0;
	while(true)
	{
		cin >> n;
		num.push_back(n);
		if(n == 0){
			break;
		}
	}
}

void primeNumberFinder(vector<int> &num,vector<int> &prime)
{
	for (int i = 0; i < num.size(); i++)
	{
		int isPrime = 1;
		if(num[i] > 2){
			for (int j = 2; j < num[i]; j++)
			{
				if(num[i]%j == 0){
					isPrime = 0;
				}
			}
		}

		if(num[i] == 1 || num[i] == 0){
			isPrime = 0;
		}

		if(isPrime == 1){
			prime.push_back(num[i]);
		}
	}
}

void sortVector(vector<int> &vector)
{
	int changes = 0;
	while(true)
	{
		for(int i = 0; i < vector.size(); i++)
		{
			if(i != vector.size() - 1){
				if(vector[i] > vector[i+1])
				{
					int k = vector[i];
					vector[i] = vector[i+1];
					vector[i+1] = k;
					changes += 1;
				}
			}
		}

		if(changes == 0)
		{
			break;
		}else{
			changes = 0;
		}
	}
}

int main()
{
	vector<int> numbers;

	vector<int> primeNumbers;

	//First we store the input numbers 
	storeNumber(numbers);

	//And then we find prime numbers from numbers variable and then store them in primberNumbers variable
	primeNumberFinder(numbers,primeNumbers);

	//Then we sort the primeNumbers vector

	sortVector(primeNumbers);

	cout << "Prime numbers from lowest to highest : " << endl;
	for(int i = 0; i < primeNumbers.size();i++){
		cout << primeNumbers[i] << endl;
	}
	return 0;
}
