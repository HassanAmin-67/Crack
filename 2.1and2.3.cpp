#include<iostream>
#include <unordered_set>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    } 
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


//Question 2.1: Remove Dups: Write code to remove duplicates from an unsorted linked list.
void removeDuplicate(node* head) {
    unordered_set<int> seen;
    node* curr = head;
    node* prev = NULL;

    while (curr != NULL) {
        if (seen.find(curr->data) != seen.end()) {
            // Duplicate found, remove the node
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } 
        else {
            // No duplicate found, move to next node
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }
}

//2.3 Remove Middle Node
void removeMiddle(node* &head){
    node* slow = head;
    node* fast = head;
    node* prev = NULL;

    // Move fast pointer two steps ahead and slow pointer one step ahead
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    prev->next = slow->next;

    delete slow;
}


int main()
{
    cout<<endl;
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 4);
    insertAtTail(head, 5); 
    insertAtTail(head, 6); 
    insertAtTail(head, 7); 
    insertAtTail(head, 8); 
    cout<<"Initial LinkedList"<<endl;   
    display(head);

    removeDuplicate(head);

    cout<<"After Removing Duplicates"<<endl;
    display(head);

    removeMiddle(head);

    cout<<"After Removing Middle Node"<<endl;
    display(head);

    cout<<endl;
    return 0;
}
