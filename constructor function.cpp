//constructur function

#include<iostream>
using namespace std;

class Book{
    public:
    
    string title;
    string aAuthor;
    int pages;
    
    Book(string aTitle, string aAuthor, int thepages){
    title=aTitle;
    aAuthor=aAuthor;
    pages=thepages;
        
    };
};
int main(){
    Book book1("your dreams are mine now", "ravindra", 300);
    Book book2("varity", "colleen hoover", 400);
    cout<<"so far ive read only 2 books that are"<<book1.title<<"and"<<book2.title<<endl;
    return 0;
}
