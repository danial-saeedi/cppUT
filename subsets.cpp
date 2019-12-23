#include <iostream>
#include <string>
using namespace std;

void subsetShowcase(string set)
{
	cout << "{";

	for(int i = 0; i < set.length();i++)
	{
		cout << set[i];
		if(i != set.length() - 1)
		{
			cout << ",";
		}
	}

	cout << "}"<< endl;
}

void subsets(string set,string current = "",int index = -1)
{
	int n = set.length();

	//Base Case
	if(index == n){
		return;
	}

	//Recursive Case
	else{
		subsetShowcase(current);
		for(int i = index + 1; i < n; i++)
		{ 
			current += set[i];
			subsets(set,current,i);

			current.erase(current.length() - 1);
		}
	}
}

int main(){
	int n;
	
	cout << "Enter N:";
	cin >> n;

	string set;
	for(int i = 1; i <= n;i++)
	{
		set += to_string(i);
	}
	subsets(set);
	return 0;
}
