
#include <iostream>
// to find the index of the element is the i*c(number of the columns) +j


using namespace std;
int main(){

int sum=0;
int m,n;


cout << "Enter the number of rows: ";
cin>>m;

cout << "Enter the number of columns: ";
cin>>n;

int arr[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout << "Enter the number of Array at " << i+1 << "," <<j+1 <<":";
     cin >> arr[i][j];
   
    
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       
     sum +=arr[i][j];
   
    
    }
}
  cout << "The sum of elements is :"<< sum  <<endl;
  
  cout << arr.front();

    return 0;
}