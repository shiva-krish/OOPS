#include <iostream>
using namespace std;

class Singletonclass{
        static Singletonclass *instance;
        Singletonclass(){
                cout<<"Constructor called: "<<this<<endl;
        }
        public:
        static Singletonclass* getinstance(){
                if(instance==NULL)
                        instance = new Singletonclass;
                return instance;
        }
};

Singletonclass *Singletonclass::instance=NULL;

int main(){
        cout<<Singletonclass::getinstance()<<endl;
        cout<<Singletonclass::getinstance()<<endl;
        cout<<Singletonclass::getinstance()<<endl;
}
