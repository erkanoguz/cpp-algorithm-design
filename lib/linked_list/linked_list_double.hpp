#ifndef LINKED_LIST_DOUBLE_HPP
#define LINKED_LIST_DOUBLE_HPP

struct Node{
    int value;
    Node* prev;
    Node* next;

    Node(int value=0, Node* prev=nullptr, Node* next=nullptr)
        : value{ value }, prev{ prev }, next{ next }
    {
        
    }
};

inline void print(Node* const ptr){

}

inline Node* get(Node* const ptr, int value){
    
    return reinterpret_cast<Node*>(0);
}

inline void append(Node* &ptr, int value){

}

inline void remove(Node* &ptr, int value){

}

#endif

