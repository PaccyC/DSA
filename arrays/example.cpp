#include <iostream>

using namespace std;


int main(){
    int sum=0;

int A[2][7]={{1,2,3,13,17,34,19},
             {1,23,11,45,31,65,26}};

for(int i=0;i<2;i++){
    for(int j=0;j<7;j++){
        cout << "The element at "<< i << " " << j << " is: " <<  A[i][j] << endl;
        
        sum += A[i][j];
        
    }
}
    cout << "The sum of all element of A is : "<< sum <<endl;




    return 0;

}