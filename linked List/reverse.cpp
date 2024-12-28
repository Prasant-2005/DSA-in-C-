#include<iostream>
using namespace std;
node* reverse(node* head) {
    while(curr != NULL){
        node* forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;

    }
}
int main() {
    node* prev = NULL;
    node* curr = head;

    reverse(node* head);
}