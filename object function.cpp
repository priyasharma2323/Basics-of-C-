//object function

#include<iostream>
using namespace std;

class Students{
    public:
    string name;
    string major;
    double sgpa;
    
    Students(string aName, string aMajor, double thesgpa){
        name=aName;
        major=aMajor;
        sgpa=thesgpa;
    }
    
    bool HasHonors(){
        if(sgpa>=8.5){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Students student1("priya", "datasc", 9.1);
    Students student2("tuf", "bioinfo",8.0);
    
    cout<<student1.HasHonors()<<endl;
    cout<<student2.HasHonors()<<endl;
    return 0;
}