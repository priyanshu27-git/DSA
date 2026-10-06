#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* CreateArrToLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* Delete_Element(Node* head , int val){
    Node* temp = head;
    
    // checking for head / first node 
    if(head->data == val) {
        head = head->next;
        delete temp;
        return head;
    }
    while (temp != nullptr)
    {        
        if(temp->next->data == val) {
            Node* temp2 = temp->next->next;
            delete temp->next;
            temp->next = temp2;
            return head;
        }
        temp = temp->next;
    }
    return head;
}

int main() {
    vector<int> arr = {44, 7 , 67 ,84};
    Node* head = CreateArrToLL(arr);

    Node* temp = Delete_Element(head , 67);
    
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
   
    return 0;
}