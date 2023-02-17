/*Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
#include<iostream>
using namespace std;
int main()
{ int num1,num2,ans;
  char Operator;
   cout<<"perform arithmetic operations on two numbers"<<endl;
     try
     { cout<<"enter first number: ";
       cin>>num1;

       cout<<"enter Operator: ";
       cin>>Operator;
        if(Operator!='+' && Operator!='-' && Operator!='*' && Operator!='/')
            throw Operator;
        cout<<"enter second number: ";
        cin>>num2;

      switch(Operator)
      { case '+':
               ans=num1+num2;
               break;
        case '-':
               ans=num1-num2;
                break;
        case '*':
               ans=num1*num2;
                break;
        case '/':
               if(num2==0)
                 throw num2;
                ans=num1/num2;
                break;
      }
        cout<<"answer "<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans<<endl;
     }
     catch(const char c){
             cout<<"       exception caught...BAD operator = "<<c<<" it is not a valid operator."<<endl;
     }
     catch(const int n)
     {
         cout<<"       error: wrong input given ...";
     }
return 0;
}
