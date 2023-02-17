/*Write a C++ program to accept area pincode and throw an exception if it does not
contain 6 digits.*/

#include<iostream>
using namespace std;
int validornot(long long pincode)
{int count=0;
     while(pincode!=0)
     {  pincode=pincode/10;
        count++;
     }
    if(count==6)
         return 1;
     else
         return 0;
}
int main()
{ long long pincode;
    cout<<"enter a valid pin code : ";
    cin>>pincode;
    try
    { if(validornot(pincode))
           cout<<"\ngiven pin code is valid ....\n";
       else
            throw 'c';
    }
     catch(const char a)
        {
           cout<<"\n....enter a valid pincode of 6 digits....\n";
        }
return 0;
}
