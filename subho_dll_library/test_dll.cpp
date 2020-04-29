#include <iostream>
#include "subho_dll/bin_tree.h"
#include "subho_dll/linked_list.h"

using namespace std;

int main(){
	BinaryTree bin_tree;
	LinkedList lnk_lst;

	int arr[] = {5, 3, 7, 2, 4, 6, 8};

	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		bin_tree.add(arr[i]);
	}

	cout << "BinaryTree pre order : ";
	bin_tree.show_preorder();
	cout << endl;

	cout << "BinaryTree in order : ";
	bin_tree.show_inorder();
	cout << endl;

	cout << "BinaryTree post order : ";
	bin_tree.show_postorder();
	cout << endl;

	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		lnk_lst.add(arr[i]);
	}

	cout << "LinkedList : ";
	lnk_lst.show();
	cout << endl;
}