#include <iostream>

using namespace std;

class node{
	public:
		int val;
		node *left_child = NULL;
		node *right_child = NULL;
};

class Tree{
	private:
		node *root = NULL;
		
		int __add__(node *cur_node, int val){
			if(val < cur_node->val){
				if(cur_node->left_child == NULL){
					cur_node->left_child = new node;
					cur_node->left_child->val = val;
					std::cout << "Value added to left node : " << cur_node->left_child->val << endl;
					return 1;
				}
				else{
					return __add__(cur_node->left_child, val);
				}
			}
			else if(val > cur_node->val){
				if(cur_node->right_child == NULL){
					cur_node->right_child = new node;
					cur_node->right_child->val = val;
					std::cout << "Value added to right node : " << cur_node->right_child->val << endl;
					return 1;
				}
				else{
					return __add__(cur_node->right_child, val);
				}
			}
			else{
				std::cout << "Value already in tree!" << std::endl;
				return 0;
			}
		}
		
		void __show_in_order__(node *cur_node){
			std::cout << cur_node->val << std::endl;
			if(cur_node->left_child != NULL){
				std::cout << "In the left : ";
				__show_in_order__(cur_node->left_child);
			}
			if(cur_node->right_child != NULL){
				std::cout << "In the right : ";
				__show_in_order__(cur_node->right_child);
			}
		}	

	public:
		int add(int val){
			if(root == NULL){
				root = new node;
				root->val = val;
				std::cout << "Value added at the root : " << root->val << endl;
				return 1;
			}
			else{
				return __add__(root, val);
			}
		}
		
		void show_in_order(){
			if(root == NULL){
				std::cout << "Tree is empty!" << endl;
			}
			else{
				std::cout << "At the root ";
				__show_in_order__(root);
			}
		}
};

int main(){
	Tree tree;
	int arr[10] = {50, 23, 12, 89, 0, 83, 23, 90, 87, 23};
	int i;
	
	for(i = 0; i < 10; i++){
		tree.add(arr[i]);
	}
	cout << "All values have been added" << endl;
	
	tree.show_in_order();
	
	return 0;
}
