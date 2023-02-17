/*Write a C++ program to demonstrate try, throw and catch statements.*/
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
   cout<<"enter two num :\n";
   cin>>a>>b;
   try
   { if(b==0)
        throw b;
     if(b==1)
        throw "harsh ";
     if(b==2)
        throw 'a';
     c=a/b;
   }catch(int e)
   {
    cout<<"divide by zero error b = "<<b<<endl;
   }
   catch(const char* s)
   {
    cout<<"error given by "<<s<<endl;
   }
   catch(...)
   {
     cout<<"exceptional error "<<endl;
   }

      cout<<"result is = "<<c<<endl;
 return 0;
}
