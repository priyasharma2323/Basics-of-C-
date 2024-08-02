//nested loop code

#include<iostream>
using namespace std;

int main(){
    
    int grid[3][2]{
        {1, 7},
        {4, 9},
        {2, 5},
    };
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<< grid[i][j] << " ";
        }
    }
  
    cout<<endl;
    
    
}
