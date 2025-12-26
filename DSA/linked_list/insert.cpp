#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* nextptr){
        data = data1;
        next = nextptr;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


class Solution {
    public:
    Node* insertAtHead(Node* head, int dataNew){
        
        Node* newNode = new Node(dataNew, head);

        return newNode;
    };

    void printList(Node* head){
        Node* temp = head;
        while (temp != nullptr){
            cout << " " << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
};

int main(){
    Solution sol;

    Node* head = new Node(2);
    head -> next = new Node(3);

    sol.printList(head);

    cout << endl;

    head = sol.insertAtHead(head, 1);
    
    sol.printList(head);
    return 0;
}
