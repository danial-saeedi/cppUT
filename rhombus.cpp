#include <iostream>
using namespace std;

int main(){

	int n;
	
	cout << "Enter A Number : ";
	cin >> n;

	int i = 1;
	int row = 1;
	int space = n;

	int lowerSide = 0;


	for(;i <= n + 1;){

		for (int k = 1; k<=space;k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= row ; j++)
		{
			cout << "*";
		}

		if (space != 0 && lowerSide == 0)
		{
			row += 2;
			space -=1;
			i++;
		}
		else 
		{
			lowerSide = 1;

			row -= 2;
			space +=1;
			i--;
		}

		if (i < 0){
			break;
		}

		cout << "\n";
	}
}
