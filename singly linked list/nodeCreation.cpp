#include <iostream>
using namespace std;

//how to create a node in linked list
class Node{
    public:
    int data = 10;//created a data field where bdata will store
    Node* next;//creayed a pointer that will contain the adress

};
int main(){

        Node* firstNode = new Node();
        cout<<firstNode ->data<<endl;
        cout<<firstNode ->next<<endl;




    return 0;
}