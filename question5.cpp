/*Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/
#include<iostream>
using namespace std;
int validornot(long long ph_num)
{int count=0;
     while(ph_num!=0)
     {  ph_num=ph_num/10;
        count++;
     }
    if(count==10)
         return 1;
     else
         return 0;
}
int main()
{ long long ph_num;
    cout<<"enter a valid phone number : ";
    cin>>ph_num;
    try
    { if(validornot(ph_num))
           cout<<"given phone number is valid ....";
       else
            throw 'c';
    }
     catch(const char a)
        {
           cout<<"....enter a valid phone number of 10 digits....";
        }
return 0;
}
