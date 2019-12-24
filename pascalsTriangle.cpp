#include <iostream>
using namespace std;

//This function calculates factorial
int factorial(int s)
{
	if(s==0){
		return 1;
	}else{
		int p = 1;
		for(int i =1;i <= s; i++){
			p = p*i;
		}

		return p;
	}
}

//This function calculates the combination of n from k
int combination(int n,int k)
{
	return factorial(n)/(factorial(n-k)*factorial(k));
}

int main()
{
	cout << "How many rows?";
	int n = 0;
	cin >> n;

	if(n==1)
	{
		cout << "1";
	}
	else if(n==2)
	{
		cout << "1\n";
		cout << "1 1";
	}else{
		cout << "1\n";
		cout << "1 1\n";

		int k = 2;
		while(true)
		{
			for(int i = 0;i <= k;i++){
				cout << combination(k,i);
				cout << " ";
			}
			cout << " \n";
			k += 1;


			if(k > (n -1)){
				break;
			}
		}
		
	}





	return 0;
}
