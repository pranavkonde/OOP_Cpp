#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health=health; // this->health is health in class which is private and =health is health which is in parameter of constructor
        cout<<"Health is:"<<health<<endl;
    }
};
int main(){
    Hero ramesh(70);
    cout<<"Address of Ramesh is:"<<&ramesh<<endl;
}