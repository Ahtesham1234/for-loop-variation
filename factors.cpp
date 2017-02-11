//factors.cpp
//calculates factorials, and demonstrates FOR LOOP

#include <iostream>
using namespace std;

int main()
{
unsinged int numb;
unsinged long fact = 1;                               //long for larger numbers

cout<<"Enter a number :  ";                 
cin>>numb;                   //get the number input
for(int  j=numb; j>0 ; j--)   //multiply 1
fact *= j;                  
cout<<"Factorial is "<< fact << endl;
return 0;

}
