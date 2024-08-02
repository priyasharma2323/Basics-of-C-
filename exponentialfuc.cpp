#include<iostream>
using namespace std;
int power(int baseno, int powerno){
    int result=1;
    for(int i=0; i<powerno; i++ ){
        result= result*baseno;
    }
    return result;
}

int main(){
    cout<<power(2,5)
    return 0;
}