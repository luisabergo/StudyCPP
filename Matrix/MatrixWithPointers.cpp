#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {

    int **matrixWithPointers;
    matrixWithPointers = new int * [3];
    
    for(int i=0; i<3; i++)
    {   
        matrixWithPointers[i] = new int[3];
    }
    
    int matrix[3][3];
    
    cin >> matrix[0][0] >> matrix[0][1] >> matrix[0][2] >> matrix[1][0] >> matrix[1][1] >> matrix[1][2] >> matrix[2][0] >> matrix[2][1] >> matrix[2][2];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matrixWithPointers[i][j]; 
        }
        
    }
    
    
    cout << "Matrix done without pointers in its declaration" << endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matrix[i][j] << endl; 
        }
        
    }
    
      cout << "Matrix done with pointers in its declaration" << endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matrixWithPointers[i][j] << endl; 
        }
        
    }
    
 
    return 0;
}
