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
    // Hero (Hero& temp){
    //     cout<<"Copy constructor called"<<endl;
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }
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
};
int main(){
    Hero hero1;
    hero1.setHealth(70);
    hero1.setLevel('B');
    char name[7]="Pranav";
    hero1.setName(name);
    hero1.print();
    
    Hero hero2 =hero1;
    hero2.name[0]='G';
    hero2.print();
    hero1.print();
}