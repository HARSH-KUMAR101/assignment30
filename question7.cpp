/*Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/
#include<iostream>
using namespace std;
int isvalidornot(char *username)
{ int countchar=0,countdigit=0,spchar=0;
    for(int i=0;username[i]!='\0';i++)
    {  countchar++;
        if(username[i]>='0' && username[i]<='9')
           countdigit++;
        if((username[i]>=32 && username[i]<=47) || (username[i]>=58 && username[i]<=64)||
           (username[i]>=91 && username[i]<=96) || (username[i]>=123 && username[i]<=126))
            spchar++;
    }
     if(countchar<6 && countdigit==0 && spchar==0)
        return 1;
     else
        return 0;
}
int main()
{ char username[20];
    cout<<"enter username : ";
    gets(username);
      try
      { if(isvalidornot(username))
            cout<<"....given username is valid....";
        else
           throw 0;
      }
      catch(int a)
        {
           cout<<"...username not valid....";
        }
 return 0;
}
