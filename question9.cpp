/*Write a C++ program to accept gmail id only and throw an exception if the id does not
contain @ and gmail.com.*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{ string gmail;

         cout<<"enter a valid gmail id : ";
         getline(cin,gmail);
     try
      {
        int index=gmail.find("gmail.com");
         if(index>=0)
            cout<<"\n....given gmail is valid"<<endl;
         else
            throw index;
      }
      catch(...)
       {
         cout<<"\n....given gmail is not valid\n";
       }

 return 0;
}
