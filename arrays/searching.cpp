#include <iostream>

using namespace std;

int main(){

int ages[]={13,14,25,24,43,21,34,10,30};

int n=sizeof(ages)/sizeof(int);
cout << "The size of the array is" << n << endl;

int item=30;
int index,i=0;
while(i<n){
    if(ages[i] == item){
     index=i;
    }

    i++;
}
cout << "The element 14 is found at index "<<index;

    return 0;
}