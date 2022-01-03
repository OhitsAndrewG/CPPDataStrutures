#include "singlyList.h"
#include "iostream"

using namespace std;

singlyList::singlyList(){
    this->head = NULL;
}

void singlyList::addFront(int number){
    node* newNode = new node; //had to use new keyword since your are dynamically allocating at runtime
    newNode->data = number;

    if(this->head == NULL){
        this->head = newNode;
        cout<<"Has become Head of List: "<<this->head->data<<endl;
        count++;
    }else{
        newNode->next = this->head;
        this->head = newNode;
        cout<<"Has Entered else Statement: "<<this->head->data<<endl;
        count++;
    }
}
/**
 * @brief will Delete the head of the node
 * 
 * @return int num : which is the head value that its carrying
 */
int singlyList::deleteFront(){
    if(this->head == NULL){
        cout<<"Linked list is empty"<<endl;
        return 0;
    }else{
        node* temp = this->head;
        int num = this->head->data;
        this->head = this->head->next;
        delete temp;
        count--;
        return num;
    }
}

void singlyList::print(){
    node* temp = this->head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}