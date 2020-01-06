#include <iostream>
using namespace std;

#define degree 5
int addEdge(int vertices[degree][degree],int v,int u)
{
	vertices[v][u] = 1;
	vertices[u][v] = 1;
}

void graphPrinter(int vertices[degree][degree])
{
	for(int i = 0; i < degree;i++)
	{
		for(int j = 0; j < degree;j++)
		{
			cout << vertices[i][j];
		}

		cout << endl;
	}
}

int main()
{
	int vertices[degree][degree] = {0};

	addEdge(vertices,0,2);

	graphPrinter(vertices);
	return 0;
}