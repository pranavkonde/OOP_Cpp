#include<iostream>
#include <cstring>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;
    
    public:
    char *name;
    char level;
    static int timeToComplete;
    
    Hero(){
        cout<<"Simple Constructor called:"<<endl;
        name =new char[100];
    }
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }
    void print(){
        cout << "Name: " << this->name<<endl;
        cout << "health: " << this->health <<endl;
        cout <<"level: " << this->level <<endl;
    }
    //Copy Constructor
    Hero (Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);        
    }
    
    //Destructor
    ~Hero(){
        cout<<"Destructor called:"<<endl;
    }
};
//Initialization 
int Hero::timeToComplete=5;
int main(){
    cout<<Hero::timeToComplete<<endl;
    
    Hero a;
    cout<<a.timeToComplete<<endl;
    
    Hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;
}