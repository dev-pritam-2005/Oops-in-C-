#include<iostream>
// #include "Hero.cpp"
using namespace std;
class Hero {

    public:
    // let suppose a property 
    // char name[100];
    int helth;
    // private: // when it is private  then it is not  used in main ()
    char level;

    void print(){
        cout<<"Level: "<<level<<endl;
    }

};


int main()
{

    //Creation of Object 
    Hero rahul;
    // cout<<"size : "<< sizeof(rahul)<<endl;

    rahul.helth=70;
    rahul.level='A';
    
    cout<< " the height of the rahul :"<< rahul.helth << endl;
    cout<< " the level of the rahul :"<< rahul.level << endl;


    return 0;
}