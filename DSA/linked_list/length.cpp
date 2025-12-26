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
    

    int countList(Node* head){
        Node* temp = head;
        int count = 0;
        while (temp != nullptr){
            count += 1;
            temp = temp -> next;
            
        };
        return count;
    }
};

int main(){
    Solution sol;
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);

    int count = sol.countList(head);
    cout << count;
    return 0;
}
