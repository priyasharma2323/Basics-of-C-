

#include <iostream>
#include<string>
using namespace std;

double add(double num1, double num2){
    double result;
    result=num1+num2;
    return result;
}

double sub(double num1, double num2){
    double result;
    result=num1-num2;
    return result;
}
double multiply(double num1, double num2){
    double result;
    result=num1*num2;
    return result;
}
double divide(double num1, double num2){
    double result;
    result=num1/num2;
    return result;
}

int main()
{
    double num1,num2;
    string perform;
    cout<<"enter first number ";
    cin>>num1;
    cout<<"enter 2nd no. ";
    cin>>num2;
    cin.ignore();
    cout<<"what do you want to perform? (add,sub,multiply,divide)";
    getline(cin, perform);
    
    if(perform=="add"){
        cout<<add(num1,num2);
    }else if(perform=="sub"){
        cout<<sub(num1, num2);
    }else if(perform=="multiply"){
        cout<<multiply(num1, num2);
    }else{
        cout<<divide(num1,num2);
    }
    
    return 0;
}
   
   
        
    