#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;
    
    public:
    
    char level;
    
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }
    void print(){
        cout << "health: " << this->health <<endl;
        cout <<"level: " << this->level <<endl;
    }
    //Copy Constructor
    Hero (Hero& temp){
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
};
int main(){
    Hero s(70,'A');
    Hero r(s);
    s.print();
    r.print();
}