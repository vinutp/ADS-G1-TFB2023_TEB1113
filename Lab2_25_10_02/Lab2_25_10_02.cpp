#include<iostream>

using namespace std;

struct Node
{
    string data;
    Node* ptr;
};

int main()
{
    Node node1 = Node();
    Node node2 = Node();
    Node node3 = Node();
    
    node1.data = "test1";
    node1.ptr = &node2;
    
    node2.data = "test2";
    node2.ptr = &node3;
    
    node3.data = "test3";
    node3.ptr = NULL; //NULL = meaning it’s the last node.
    
    Node* current = &node1;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->ptr;
    }
    cout << endl;   
    //cout << node1.data <<endl;
    //cout << node1.ptr << endl;
    //cout << node1.ptr->data << endl;
}
