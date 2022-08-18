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
    Hero ramesh;
    cout << "Ramesh health is " << ramesh.getHealth() << endl;
    //use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';
    cout << "health is: " << ramesh.getHealth() << endl; 
    cout << "Level is: " << ramesh.level << endl; 
    return 0;
}