#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;

    void initialise(int l, int b){
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    int peri() {
        return 2 * (length + breadth);
    }

};

int main() {
    Rectangle r = { 0,0};
    int l, b;
    cout<<"Enter Length and breadth" <<endl;
    cin>>l>>b;

    r.initialise(l,b);

    int a = r.area();
    int peri = r.peri();

    cout<<"Area and peri is "<<a<<" and "<< peri<<endl;

    return 0;
}
