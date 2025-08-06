//ANTARLEEN CHAND 
// 24070123018 | ENTC A1 


#include <iostream>
using namespace std;

int main() {
  
    int matrix1[10][10], matrix2[10][10], sum[10][10];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns : ";
    cin >> cols;

    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nSum of the two matrices is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* OUTPUT: 
Enter number of rows: 2
Enter number of columns : 3

Enter elements of first matrix:
8 16 32
4 16 64

Enter elements of second matrix:
3 27 81 
7 14 49

Sum of the two matrices is:
11 43 113 
11 30 113 
*/
