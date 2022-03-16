//A simple calculator
#include<iostream>
using namespace std;
int main(){
    cout<<"************************MADE BY---RABEAN SUBEDI****************"<<endl;
    char oprt;
    int a, b;
    
    
    cout<<"Enter first number:\n"<<endl;
    cin>>a;
    cout<<"Enter the second number:\n"<<endl;
    cin>>b;
    cout<<"choose the operators (+ or - or / or *)\a"<<endl;
    cin>>oprt;
    switch (oprt)
    {
    case '+':
        cout<<"The sum is :\n"<<(a+b);
        break;
        case '-':
        cout<<"The substraction is :\n"<<(a-b);
          break;
        case '*':
        cout<<"The multiplication  is :\n"<<(a*b);
          break;
        case '/':
        cout<<"The division is : \n"<<(a/b);
          break;

    
    default:
    cout<<"Sorry !! The operator is not valid \a"<<endl;
        break;
    }
return 0;
}