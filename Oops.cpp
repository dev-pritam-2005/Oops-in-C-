#include<iostream>
// #include "Hero.cpp"
using namespace std;
class Hero {

    private:

    int health;
    public: // when it is private  then it is not  used in main ()
    char level;


    //default constructor
    Hero(){
        cout<<"constructor called"<<endl;

    }



    // parameter constructor
    Hero(int health){
        this->health=health;
    }

    // This is a parameterized constructor in C++ for a class named Hero. It initializes the health attribute of the Hero object using the value passed as an argument when the constructor is called.

    void print(){
        cout<<"Level: "<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    void setHelth(int h){
        health=h;
    }

    void setLevel(char ch){
        level = ch;
    }
};


int main()
{


//object create statically
Hero ramesh;

//object created dynamically
Hero *H = new Hero;


/*
    // static allocation 
    Hero h1;
    h1.setHelth(100);
    h1.setLevel('A');

    cout<< "level is "<< h1.level << endl;
    cout<< "health is "<< h1.getHealth() << endl;
    //dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHelth(80);

    cout<<"level is "<< (*b).level<<endl;
    cout<<"health is "<< (*b).getHealth()<<endl;

    cout<<"level is "<< b->level<<endl;
    cout<<"health is "<< b->getHealth()<<endl; 


*/

    /*
    //Creation of Object 
    Hero rahul;
    // cout<<"size : "<< sizeof(rahul)<<endl;
    cout << "Rahuls helth is :"<< rahul.getHealth()<< endl;
    // rahul.helth=70;
    rahul.level='A';
    
    // cout<< " the height of the rahul :"<< rahul.helth << endl;
    cout<< " the level of the rahul :"<< rahul.level << endl;

*/
    return 0;
}