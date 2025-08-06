//ANTARLEEN CHAND 
// PRN : 24070123018 | ENTC A1

#include <iostream>
using namespace std;

intmain() {
    inti, j, r1, c1, r2, c2;
    cout<<"Enter number of rows & column: ";
    cin>>r1>>c1;
    intar[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"Enter element-"<<i+1<<j+1<<":";
            cin>>ar[i][j];
        }
    }
    r2=c1;
    c2=r1;
    intt[r2][c2];
    cout<<endl<<"Transposed Matrix:\n";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            t[i][j]=ar[j][i];
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
}

/* OUTPUT 
Enter number of rows and columns: 3 3 

Enter elements of the matrix:
Element [1][1]: 7 
Element [1][2]: 6 
Element [1][3]: 5
Element [2][1]: 10 
Element [2][2]: 12 
Element [2][3]: 15
Element [3][1]: 21
Element [3][2]: 24
Element [3][3]: 27

Transposed Matrix:
7 10 21 
6 12 24 
5 15 27 
*/
