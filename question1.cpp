/*Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/
#include<iostream>
using namespace std;
void try_catch(int num)
{ char *p="exception handling";
     try
     {   if(num>=0 && num<=9)
             throw num;
         else
             cout<<"given number is  not a single  number"<<endl;
        throw p;
     }
     catch(int a)
     {
        cout<<a<<" is a single number"<<endl;
     }
     catch(char a[100])
     {
        cout<<a<<endl;
     }
}
int main()
{ int num;
    cout<<"enter a number ";
    cin>>num;

      try_catch(num);
 return 0;
}
