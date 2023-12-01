#include <iostream>

using namespace std;
int main(){
    // int myArray[5]={20,35,78,79,80};
    int myArray[5];
    int n=sizeof(myArray)/sizeof(int);

    cout <<"The size od an array is :" <<n <<endl;
    cout <<"Reading array elements"<<endl;
    for(int j=0;j<n;j++){
        cout << "Enter the "<<j+1 <<" element"<<endl;
        cin>>myArray[j];
    }


    for(int i=0;i<5;i++)
    cout <<"my array at "<<i <<": " << myArray[i] <<endl;
    
    return 0;
}