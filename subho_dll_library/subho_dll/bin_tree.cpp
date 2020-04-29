#include <iostream>
#include "bin_tree.h"

BinaryTree::__add(Node_bin_tree *cur_node, int val){
    if(val < cur_node->val){
        if(cur_node->left_child == NULL){
            cur_node->left_child = new Node_bin_tree(val);
            return 1;
        }
        else{
            return this->__add(cur_node->left_child, val);
        }
    }
    else if(val > cur_node->val){
        if(cur_node->right_child == NULL){
            cur_node->right_child = new Node_bin_tree(val);
            return 2;
        }
        else{
            return this->__add(cur_node->right_child, val);
        }
    }
    else{
        return -1;
    }
}

BinaryTree::__show_preorder(Node_bin_tree *cur_node){
    std::cout << cur_node->val << ' ';
    if(cur_node->left_child != NULL){
        this->__show_preorder(cur_node->left_child);
    }
    if(cur_node->right_child != NULL){
        this->__show_preorder(cur_node->right_child);
    }
    return 0;
}

BinaryTree::__show_inorder(Node_bin_tree *cur_node){
    if(cur_node->left_child != NULL){
        this->__show_inorder(cur_node->left_child);
    }
    std::cout << cur_node->val << ' ';
    if(cur_node->right_child != NULL){
        this->__show_inorder(cur_node->right_child);
    }
    return 0;
}

BinaryTree::__show_postorder(Node_bin_tree *cur_node){
    if(cur_node->left_child != NULL){
        this->__show_postorder(cur_node->left_child);
    }
    if(cur_node->right_child != NULL){
        this->__show_postorder(cur_node->right_child);
    }
    std::cout << cur_node->val << ' ';
    return 0;
}

BinaryTree::add(int val){
    if(this->root == NULL){
        this->root = new Node_bin_tree(val);
        return 0;
    }
    else{
        return this->__add(this->root, val);
    }
}

BinaryTree::show_preorder(){
    if(this->root == NULL){
        std::cout << "Binary tree is empty!\n";
    }
    else{
        this->__show_preorder(this->root);
    }
    return 0;
}

BinaryTree::show_inorder(){
    if(this->root == NULL){
        std::cout << "Binary tree is empty!\n";
    }
    else{
        this->__show_inorder(this->root);
    }
    return 0;
}

BinaryTree::show_postorder(){
    if(this->root == NULL){
        std::cout << "Binary tree is empty!\n";
    }
    else{
        this->__show_postorder(this->root);
    }
    return 0;
}
