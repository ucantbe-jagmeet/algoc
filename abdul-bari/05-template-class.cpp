#include <iostream>
using namespace std;

class Arithematic {
    private :     
        int a;
        int b;

    public :
        Arithematic (int a, int b){
            this->a = a;
            this->b = b;
        }

        int add(){
            int c;
            c = a + b;
            return c;
        }

        int sub(){
            int c ;
            c = a - b;
            return c;
        }
};

int main() {
    Arithematic ar(10, 5);

    cout<<"Add is: "<<ar.add()<<endl;
    cout<<"sub is: "<<ar.sub()<<endl;

    return 0;
}
