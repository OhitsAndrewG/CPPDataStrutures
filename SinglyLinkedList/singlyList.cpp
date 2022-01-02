#include "singlyList.h"
#include "iostream"

using namespace std;

singlyList::singlyList(){
    this->head = NULL;
}

void singlyList::addFront(int number){
    node newNode;
    newNode.data = number; //dont have to use the arrow becuase its not a pointer that needs to be derefenced before being initialized

    if(this->head == NULL){
        
        this->head = &newNode;
        this->head->data = number;
        cout<<"Has become Head of List: "<<head->data<<endl;
    }else{
        // node tempNode;
        // tempNode = this->head;
        // this->head = newNode;
        // this->head->next = tempNode;
    }
}