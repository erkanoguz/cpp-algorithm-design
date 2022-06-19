#include <iostream>
using namespace std;

// DONE: Linked-List
// TODO: Double Linked-List
// TODO: Cycle-Linked-List



struct Node{
    int value;
    Node* next;

    Node(int value=0): value{value}, next{nullptr}{

    }
};

void Print(Node* const ptr ){
    if(!ptr) return;

    if(ptr){
        cout << ptr->value << ", ";
    }

    if((ptr)->next == nullptr){
        cout << '\n';
        return;
    }

    Print(ptr->next);
}

Node* Get(Node* const ptr, int value){
    if(!ptr) return nullptr;

    if(ptr->value == value){
        return ptr;
    }

    return Get(ptr->next, value);
}

void Append(Node* &ptr, int value){
    auto temp{ new Node(value) };
    
    if(!ptr){
        ptr = temp;
        return;
    }

    temp->next = ptr;
    ptr = temp;
}


void Delete(Node* &ptr, int value){
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
        auto temp = iterator->next;
        iterator->next = temp->next;
        delete temp;
    } else{
        cout << "Item not found!\n";
    }
}

int main()
{
    Node* root = nullptr;
    Print(root);

    for(int i=20; i>0; --i)
        Append(root, i*10);
    
    Delete(root, 10);
    Delete(root, 60);
    Delete(root, 200);
    Delete(root, 500);

    Print(root);

    auto value = Get(root, 180)->next;
    cout << value->value << '\n';

    return 0;
}