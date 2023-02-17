/*Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.*/
#include<iostream>
using namespace std;
int validornot(char *email)
{int flag=0;
     for(int i=0;email[i]!='\0';i++)
       { if(email[i]=='@'){
             flag=1;
             break;
       }
    }if(flag==1)
         return 1;
     else
         return 0;
}
int main()
{ char email[50];

    cout<<"enter email : ";
    gets(email);
    try
    { if(validornot(email))
           cout<<"given email is valid ....";
       else
            throw 'c';
    }
     catch(const char a)
        {
           cout<<"enter a valid email address( @ missing)....";
        }
return 0;
}
