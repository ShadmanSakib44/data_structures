#include<iostream>

using namespace std;

class Node {
    public:
        int val;
    Node * next;

};

class Singly_linked_list {
    public:
        Node * head, * tail;

    Singly_linked_list() {
        head = nullptr;
        tail = nullptr;
    }
    void PushFront(int n) {
        Node * node = new Node();
        node -> val = n;
        node -> next = head;
        head = node;

    }
    void PushBack(int n) {
        Node * node = new Node();
        node -> val = n;
        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail -> next = node;
            tail = node;
        }

    }

    void display() {
        Node * cur = head;

        while (cur != nullptr) {
            cout << cur -> val << endl;
            cur = cur -> next;
        }
        cout << endl;
    }

    void Reverse() {

        Node * prev = nullptr;
        Node * curr = head;
        while (curr) {
            Node * nextTemp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextTemp;
        }
        tail = head;
        head = prev;

    }
    void Popback() {
        Node * temp = head;
        while (temp -> next -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = NULL;
        tail = temp;
        delete(temp);

    }

};

Singly_linked_list takeInput(){
    char c;

    int j=0;
    Singly_linked_list l;
    while((c=getchar())!='\n'){
        if(c!=' '){
            int k = c - '0';
            l.PushBack(k);
            j++;
        }
    }
    return l;
}
Singly_linked_list remove_half(Singly_linked_list l)
{
    Node* first = l.head;
    Node* second = l.head;

    Singly_linked_list x;

    while(first != NULL){
        if(second ==  NULL || second->next == NULL){
            x.PushBack(first->val);
        }else{
            second = second->next->next;
        }

        first = first->next;

    }


    return x;
}

int main() {
   Singly_linked_list l;

    l = takeInput();
    Singly_linked_list x = remove_half(l);
    remove_half(l);
    x.display();
    // x.head->val = -100;
    // l.display();

}