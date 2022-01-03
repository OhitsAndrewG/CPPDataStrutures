#include "iostream"
#include "singlyList.cpp"

using namespace std;

int main(int argc, char** argv){
    
    singlyList newlist;

    newlist.addFront(5);
    newlist.addFront(6);
    newlist.addFront(9);
    int number = newlist.deleteFront();
    newlist.print();

    return 0;
}