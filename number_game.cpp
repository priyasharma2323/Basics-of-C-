/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

int main(){
    int secretnum=7;
int guess;
int guesscount=0;
int guesslimit=3;
bool outofguess=false;

 while(secretnum!=guess && !outofguess){
    if(guesscount<guesslimit){
       cout<<"enter no.(1 to 10):";
       cin>>guess;
       guesscount++;
    }else{
        outofguess=true;
    }
 }
 if(outofguess){
    cout<<"you loose hehe";
}else{
    cout<<"yayyy you win";
} 
    

  return 0;  
    
}
        
    