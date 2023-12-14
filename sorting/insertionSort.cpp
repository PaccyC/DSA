#include <iostream>

using namespace std;

int main(){

int num[10]={13,6,7,10,9,4,1,50,5,8};
int size=sizeof(num)/sizeof(num[0]);

cout << "The size of the array is "<<size;
int temp,j;
for(int i=1;i<size;i++){
    temp=num[i];
    for(j=i;j>0 && num[j-1]>temp;j--){
    num[j]=num[j-1];
    }
    num[j]=temp;
}

for(int i=0;i<size;i++){
    cout << num[i] << ", ";
}
    return 0;
}