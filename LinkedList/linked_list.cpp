#include <iostream>

class Node{
	public:
		int val;
		Node *nxt_node = NULL;
		
		Node(int val){
			this->val = val;
		}
};

class LinkedList{
	private:
		Node *head = NULL;
	
	public:
		void add(int val){
			if(this->head == NULL)
				this->head = new Node(val);
			else
				this->__add(this->head, val);
				
		}
		
		void __add(Node *cur_node, int val){
			if(cur_node->nxt_node == NULL)
				cur_node->nxt_node = new Node(val);
			else
				this->__add(cur_node->nxt_node, val);
		}
		
		void show(){
			if(this->head == NULL){
				std::cout << "Linked list is empty\n";
			}
			else{
				Node *cur_node = this->head;
				while(cur_node != NULL){
					std::cout << cur_node->val << std::endl;
					cur_node = cur_node->nxt_node;
				}
			}
		}
};

int main(){
	LinkedList lnk_lst;
	
	for(int i = 5; i < 100; i += 5){
		lnk_lst.add(i);
	}
	
	lnk_lst.show();
	
	return 0;
}

