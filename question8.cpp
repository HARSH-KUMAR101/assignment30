/*Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/
#include<iostream>
using namespace std;
int isvalidornot(char *password)
{ int countchar=0,countdigit=0,spchar=0,capltr=0;
    for(int i=0;password[i]!='\0';i++)
    {  countchar++;
        if(password[i]>='0' && password[i]<='9')
           countdigit++;
        if((password[i]>=32 && password[i]<=47) || (password[i]>=58 && password[i]<=64)||
           (password[i]>=91 && password[i]<=96) || (password[i]>=123 && password[i]<=126))
            spchar++;
        if(password[i]>='A' && password[i]<='Z')
            capltr++;
    }
     if(countchar<6 || countdigit==0 || spchar==0 || capltr==0)
        return 0;
     else
        return 1;
}
int main()
{ char password[20];
    cout<<"enter password : ";
    gets(password);
      try
      { if(isvalidornot(password))
            cout<<"....given password is valid....";
        else
           throw 1;
      }
      catch(int a)
        {
           cout<<"...password not valid....";
        }
 return 0;
}
