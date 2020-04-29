#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <windows.h>

#define EXPORT __declspec(dllexport)

class Node_linked_list{
    public:
        int val;
        Node_linked_list *nxt_node = NULL;

        Node_linked_list(int val){
            this->val = val;
        }
};

class EXPORT LinkedList{
    private:
        Node_linked_list *head = NULL;

    public:
        int add(int val);
        int show();
};


#endif // LINKED_LIST_H
