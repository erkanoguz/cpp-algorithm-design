#ifndef LINKED_LIST_BASIC_HPP
#define LINKED_LIST_BASIC_HPP

#include <iostream>
using namespace std;

/**
 * TODO: 
 * Linked-List
 * Double Linked-List
 * Cycle-Linked-List
 * Make all implementation generic
*/

struct Node {
    int value;
    Node* next;
    Node(int value=0): value{value}, next{nullptr} {}
};

void print(Node* const ptr)
{
    if(ptr == nullptr) return;

    if(ptr != nullptr) cout << ptr->value << ", ";
    
    if((ptr)->next == nullptr){
        cout << '\n';
        return;
    }

    print(ptr->next);
}

Node* get(Node* const ptr, int value)
{
    if(ptr == nullptr) return nullptr;

    if(ptr->value == value) return ptr;

    return get(ptr->next, value);
}

void append(Node* &ptr, int value)
{
    Node* temp{ new Node(value) };
    
    if(ptr == nullptr){
        ptr = temp;
        return;
    }

    temp->next = ptr;
    ptr = temp;
}


void remove(Node* &ptr, int value)
{
    Node* iterator = ptr;
    bool found = false;

    while(true){
        if(iterator->value == value){
            found = true;
            break;
        }

        if(iterator->next != nullptr){
            if(iterator->next->value == value){
                found = true;
                break;
            }
        }else {
            break;
        }
        iterator = iterator->next;
    }

    if(iterator == ptr && found){
        // Head silinecek
        auto temp = ptr;
        ptr = ptr->next;
        delete temp;

    } else if(iterator != ptr && found){
        // Head eleman harici
        Node* temp = iterator->next;
        iterator->next = temp->next;
        delete temp;
    } else{
        cout << "Item not found!\n";
    }
}


#endif

// int main()
// {
//     Node* root = nullptr;
//     print(root);

//     for(int i=20; i>0; --i)
//         append(root, i*10);
    
//     remove(root, 10);
//     remove(root, 60);
//     remove(root, 200);
//     remove(root, 500);

//     print(root);

//     auto value = get(root, 180)->next;
//     cout << value->value << '\n';

//     return 0;
// }