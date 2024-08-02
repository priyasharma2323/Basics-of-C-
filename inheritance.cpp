//inheritance

#include<iostream>
using namespace std;

class Chef{
    public:
    void pizza(){
      cout<<"the chef can make pizza"<<endl;
    }
    void pancakes(){
        cout<<"the chef can make pancakes"<<endl;
    }
    void chefspecial(){
        cout<<"the chef speciality is crispy corn"<<endl;
    }
};

class Chef2 : public Chef{
    public:
    void pasta(){
        cout<<"the chef can make pasta"<<endl;
    }
    void chefspecial(){
        cout<<"the chef speciality is laphing"<<endl;
    }
    
};

int main(){
    Chef chef;
    // chef.pizza();
    Chef2 chef2;
    // chef2.pasta();
    chef.chefspecial();
    chef2.chefspecial();
    
    return 0;
}
