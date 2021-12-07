/*Sort a Linked List in wave form::
Given an unsorted Linked List of integers. The task is to sort the 
Linked List into a wave like Line. 
A Linked List is said to be sorted in Wave Form if the list after 
sorting is in the form: */
// C++ program to sort linked list
// in wave form
#include <climits>
#include <iostream>
 
using namespace std;
 
// A linked list node
struct Node {
    int data;
    struct Node* next;
};
 
// Function to add a node at the
// beginning of Linked List
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
// Function get size of the list
int listSize(struct Node* node)
{
    int c = 0;
 
    while (node != NULL) {
        c++;
 
        node = node->next;
    }
 
    return c;
}
 
// Function to print the list
void printList(struct Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
 
        node = node->next;
    }
}
 
/* UTILITY FUNCTIONS */
/* Function to swap two integers */
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
// Function to sort linked list in
// wave form
void sortInWave(struct Node* head)
{
    struct Node* current = head;
    struct Node* prev = NULL;
 
    // Variable to track even position
    int i = 0;
 
    // Size of list
    int n = listSize(head);
 
    // Traverse all even positioned nodes
    while (i < n) {
 
        if (i % 2 == 0) {
            // If current even element is
            // smaller than previous
            if (i > 0 && (prev->data > current->data))
                swap(&(current->data), &(prev->data));
 
            // If current even element is
            // smaller than next
            if (i < n - 1 && (current->data < current->next->data))
                swap(&(current->data), &(current->next->data));
        }
 
        i++;
 
        prev = current;
        current = current->next;
    }
}
 
// Driver program to test above function
int main()
{
    struct Node* start = NULL;
 
    /* The constructed linked list is:
    10, 90, 49, 2, 1, 5, 23*/
    push(&start, 23);
    push(&start, 5);
    push(&start, 1);
    push(&start, 2);
    push(&start, 49);
    push(&start, 90);
    push(&start, 10);
 
    sortInWave(start);
 
    printList(start);
 
    return 0;
}
