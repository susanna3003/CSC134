#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

// CSC 134
// M6LAB2 - vectors and arrays
// Susanna Quayle
// 12/6/2024

void array_example();
void vector_example();
void linked_list_example();

int main() 
{
    array_example();
    vector_example();
    linked_list_example();
    return 0;
}

// Example 1: Array
void array_example()
{
    cout << "Example 1: Array" << endl;
    const int SIZE = 5;
    int max = 3;
    int nums[SIZE] = {1, 2, 2, 0, 0};

    for (int i = 0; i < max; i++) 
    {
        if (i == max - 1) 
        {
            cout << nums[i] << endl;
        } 
        else 
        {
            cout << nums[i] << ", ";
        }
    }   
}

// Example 2: Vector
void vector_example()
{
    cout << "Example 2: Vector" << endl;
    vector<int> nums = {1, 2, 3, 4, 5};

    nums.push_back(6);
    nums.push_back(7);

    nums.pop_back();

    for (size_t i = 0; i < nums.size(); i++) 
    {
        if (i == nums.size() - 1) 
        {
            cout << nums[i] << endl;
        } 
        else 
        {
            cout << nums[i] << ", ";
        }
    }
}

struct Node 
{
    int data;
    Node* next;
};

void print_linked_list(Node* head) 
{
    Node* current = head;
    while (current != nullptr) 
    {
        cout << current->data;
        if (current->next != nullptr) 
        {
            cout << ", ";
        }
        current = current->next;
    }
    cout << endl;
}

void linked_list_example()
{
    cout << "Example 3: Linked List" << endl;
    
    // Create a linked list
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    
    // Print the linked list
    print_linked_list(head);

    // Clean up the memory
    delete head->next->next;
    delete head->next;
    delete head;
}
