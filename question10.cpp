/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/
#include<iostream>
using namespace std;
int isvalidornot(char *nickname)
{ int countchar=0,countdigit=0,spchar=0;
    for(int i=0;nickname[i]!='\0';i++)
    {  countchar++;
        if(nickname[i]>='0' && nickname[i]<='9')
           countdigit++;
        if((nickname[i]>=32 && nickname[i]<=47) || (nickname[i]>=58 && nickname[i]<=64)||
           (nickname[i]>=91 && nickname[i]<=96) || (nickname[i]>=123 && nickname[i]<=126))
            spchar++;
    }
     if(countchar<8 && countdigit==0 && spchar==0)
        return 1;
     else
        return 0;
}
int main()
{ char nickname[20];
    cout<<"enter nickname : ";
    gets(nickname);
      try
      { if(isvalidornot(nickname))
            cout<<"....given nickname is valid....";
        else
           throw 0;
      }
      catch(int a)
        {
           cout<<"...nickname not valid....";
        }
 return 0;
}
