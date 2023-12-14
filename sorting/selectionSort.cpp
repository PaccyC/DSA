#include <iostream>

using namespace std;
int main(){

int num[10]={13,6,7,10,9,4,1,50,5,8};
int size=sizeof(num)/sizeof(num[0]);

cout << "The size of the array is "<<size<< endl;

for(int i=0;i<size-1;i++){
   int minIndex=i;
    for(int j=i+1;j<size;j++){
        if(num[j]<num[minIndex]){
            minIndex=j;
        }
    }
    
    swap(num[minIndex],num[i]);
    
    
}

for(int i=0;i<size;i++){
    cout << num[i] << ", ";
}

    return 0;
}