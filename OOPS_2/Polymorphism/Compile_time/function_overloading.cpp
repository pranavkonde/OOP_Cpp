#include<iostream>
using namespace std;
class A {
    public:
    void sayHello(){
        cout<<"Hello Pranav"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
        void sayHello(string name,int n){
        cout<<"Hello "<<name<<endl;
    }
}; 
int main() {

    A obj;
    obj.sayHello();
    return 0; 
}