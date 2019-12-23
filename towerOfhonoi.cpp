#include <iostream> 
using namespace std; 
  
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)  
{
	//Base Case
    if (n == 1) 
    {
        cout << "Move disk 1 from rod " << from_rod <<  
                            " to rod " << to_rod<<endl;  
        return;  
    }  
    
    //Recursive Case
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout << "Move disk " << n << " from rod " << from_rod << 
                                " to rod " << to_rod << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}  
  
int main()  
{
    int n = 4; // Number of disks  
    towerOfHanoi(n, 'A', 'C', 'B'); // A,B,C are the rods
    return 0;  
} 
