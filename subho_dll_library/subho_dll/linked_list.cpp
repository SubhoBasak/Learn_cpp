#include <iostream>
#include "linked_list.h"

LinkedList::add(int val){
    if(this->head == NULL){
        this->head = new Node_linked_list(val);
    }
    else{
        Node_linked_list *cur_node = this->head;
        while(cur_node->nxt_node != NULL){
            cur_node = cur_node->nxt_node;
        }
        cur_node->nxt_node = new Node_linked_list(val);
    }
    return 0;
}

LinkedList::show(){
    if(this->head == NULL){
        std::cout << "Linked list is empty!\n";
    }
    else{
        Node_linked_list *cur_node = this->head;
        while(cur_node != NULL){
            std::cout << cur_node->val << ' ';
            cur_node = cur_node->nxt_node;
        }
    }
    return 0;
}
