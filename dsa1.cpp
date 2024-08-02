//getters and setters

#include<iostream>
using namespace std;

class Movie{
    private:
    string rating;
    
    public:
    string name;
    string director;
    
    Movie(string aName, string aDirector, string aRating){
        name=aName;
        director=aDirector;
        SetRating(aRating);
    }
    void SetRating(string aRating){
        if(aRating=="A"||aRating=="B"||aRating=="C"||aRating=="D"){
            rating=aRating;
        }else{
            rating="invalid";
        }
    }
    string getRating(){
        return rating;
    }
};

int main(){
    Movie movie("avengers","jos whedon","Dog");
    cout<<movie.getRating();
    return 0;
}