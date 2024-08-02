/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

string gettheday(int daynum){
    string dayname;
    switch(daynum){
        case 0:
        dayname="sunday";
        break;
        case 1:
        dayname="monday";
        break;
        case 2:
        dayname="tuesday";
        break;
        case 3:
        dayname="wednesday";
        break;
        case 4:
        dayname="thursday";
        break;
        case 5:
        dayname="friday";
        break;
        case 6:
        dayname="saturday";
        break;
        default:
        dayname="wrong number input";
       
    }
    
    return dayname;
}
                           

int main()
{
    int daynum;
    cout<<"enter the day number(0,1,2,3,4,5,6)";
    cin>>daynum;
    cout<<"the day is"<<gettheday(daynum);
    return 0;
}
        
    