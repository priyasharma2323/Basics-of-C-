
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
       cout<<"enter no.:";
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