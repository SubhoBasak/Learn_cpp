#ifndef BIN_TREE_H
#define BIN_TREE_H

#include <windows.h>

#define EXPORT __declspec(dllexport)

class Node_bin_tree{
public:
        int val;
        Node_bin_tree *left_child = NULL;
        Node_bin_tree *right_child = NULL;

        Node_bin_tree(int val){
            this->val = val;
        }
};

class EXPORT BinaryTree{
    private:
        Node_bin_tree *root = NULL;

        int __add(Node_bin_tree *cur_node, int val);
        int __show_preorder(Node_bin_tree *cur_node);
        int __show_inorder(Node_bin_tree *cur_node);
        int __show_postorder(Node_bin_tree *cur_node);

    public:
        int add(int val);
        int show_preorder();
        int show_inorder();
        int show_postorder();
};

#endif // BIN_TREE_H
