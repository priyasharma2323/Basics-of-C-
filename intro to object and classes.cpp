//intro to classes and objects

#include<iostream>
using namespace std;

class Btech_Biotechnology{
    public:
    string name;
    int roll_no;
    string subject;
    double marks;
    
};
int main(){
    Btech_Biotechnology secB;
    secB.name="priya";
    secB.roll_no=207;
    secB.subject="datasc.";
    secB.marks=10;
    
    Btech_Biotechnology secA;
    secA.name="tuf";
    secA.roll_no=157;
    secA.subject="bioinfo";
    secA.marks=10;
    
    cout<<secB.name<<"<3"<<secA.name<<endl;
    return 0;
    
}
