#include<iostream>
using namespace std;
class Hero{
    //Properties
    private:
        int health; 
    public:
        char level;
        int getHealth(){
            return health;
        }
        int getLevel(){
            return level;
        }
        int setHealth(int h){
            health=h;
        }
        int setLevel(char ch){
            level=ch;
        }
};
int main(){
    //Static allocation
    Hero ramesh;
    ramesh.setHealth(70);
    ramesh.setLevel('A');
    cout << "health is: " << ramesh.getHealth() << endl; 
    cout << "Level is: " << ramesh.level << endl; 
    
    // Dyanamically
    Hero *b= new Hero;
    b->setHealth(80);
    b->setLevel('B');
    cout << "health is: " << (*b).getHealth() << endl; 
    cout << "Level is: " << (*b).level << endl; 
    
    cout << "health is: " << b->getHealth() << endl; 
    cout << "Level is: " <<  b->level << endl; 
    return 0;
}