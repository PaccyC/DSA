#include <iostream>

using namespace std;
int main(){

int arr[]={10,45,35,87,54,66,32,35,100,73};
int index=3;

int n=sizeof(arr)/sizeof(arr[0]);
cout << "The size of the array is " << n <<endl;

while(index <n-1){
    arr[index]=arr[index+1];
     index++;
}
n--;

for (int i=0;i<n;i++){
    cout <<arr[i] << " ,";
}
cout << "The size of the array is " << n <<endl;


    return 0;
}

