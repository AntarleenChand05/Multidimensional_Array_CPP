//Antarleen Chand 
// 24070123018 | ENTC A1


#include <iostream>
using namespace std;

int main() {
   int m1[3][5];
   cout<<"ENTER MATRIX :"<<endl;
   for(int i=0; i<3; i++){
       for(int j=0;j<3;j++){
          cin>>m1[i][j];
    }
  }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
        cout<<m1[i][j]<<"\t";
        
    }
    cout<<endl;
   }
}

/* OUTPUT : 
ENTER MATRIX :
3 9 13 
4 8 16 
5 10 15
3	9	13	
4	8	16	
5	10	15	
*/
