#include "../../lib/linked_list/linked_list_basic.hpp"

int main()
 {
     Node* root = nullptr;
     print(root);

     for(int i=20; i>0; --i)
         append(root, i*10);
    
     remove(root, 10);
     remove(root, 60);
     remove(root, 200);
     remove(root, 500);

     print(root);

     auto value = get(root, 180)->next;
     cout << value->value << '\n';

     return 0;
 }
