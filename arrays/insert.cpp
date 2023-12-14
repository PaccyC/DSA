#include <iostream>
using namespace std;

int main(){
int arr[]={10,20,30,40,50};
int size=sizeof(arr)/sizeof(int);
int lastIndex=size-1;
int pos=2,ele=15;
while(lastIndex>=pos){
    arr[lastIndex+1]= arr[lastIndex];
    lastIndex=lastIndex -1;
}
    arr[pos]=ele;
    for(int i=0;i< size+1;i++){
        cout <<"my array at "<< i <<" is: "<< arr[i]<<endl;
    }
    
    cout <<"Delete"<<endl;
    lastIndex=5;
    while(pos<lastIndex){
        arr[pos]=arr[pos+1];
        pos++;
    }
    for(int i=0;i<lastIndex;i++){
          cout <<"my array at "<< i <<" is: "<< arr[i]<<endl;
    }

    return 0;
}