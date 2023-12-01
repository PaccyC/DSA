#include <iostream>
#include <cstring>
using namespace std;
int main() {
char String1[20] = "Love your neighbour";
char String2[80]= "Promote Peace";
cout<< "String2 before copying: " << String2 << endl;
strcpy(String2,String1);
cout<< "String1 is: " << String1 << endl;
cout<< "String2 after copying: " << String2 <<endl;
cout<< "String2 has: " <<strlen (String2)<< " characters\n";
return 0;
}

