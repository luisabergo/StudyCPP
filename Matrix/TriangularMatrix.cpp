#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
    
    int rows = 5;
    int columns = 5;
    int **triangularMatrix;
    triangularMatrix = new int * [rows];
    
    
    for(int i=0; i<rows;i++)
    {   
        triangularMatrix[i] = new int[i+1];
        for(int j=0; j<columns; j++)
        {
            triangularMatrix[i][j] = 1;
        }
        
    }
    
      cout << "Triangular Matrix" << endl;
    
    for(int i=0; i<columns; i++){
        for(int j=0; j<i; j++){
            cout << triangularMatrix[i][j] << " " ; 
        }
        
        cout << endl;
        
    }
    
 
    return 0;
}