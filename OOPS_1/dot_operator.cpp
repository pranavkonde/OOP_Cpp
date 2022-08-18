#include<iostream>
using namespace std;
class Hero{
    //Properties
    int health; // by default private
    char level;
};
int main(){
    Hero ramesh;
    cout<<"Health: "<<ramesh.health<<endl;
    cout<<"Level: "<<ramesh.level<<endl;
    return 0;
}