// The following definitions of Tree and Node are provided.
#include <iostream>
using namespace std;
//Give Node and Tree defs
struct Node {
    int val;
    Node *left, *mid, *right;
    Node(int val) { this->val = val; }
};

class Tree {
public:
    Tree();
    void insert(int val);
    void remove(int val);
    Node * getRoot();
protected:
    Node *root;
};


Node * Tree::getRoot() { return root; }

/*
 * Implement the methods below.
 */
Tree::Tree() {
  root = nullptr;
}
void Tree:remove(int val){
    /*
       1. Check if root is null 
       2. Create two temp Node* current, prev 
       3. Loop and find the the node 
       4.  1. No Child 
       	   	1. has parent 
		2. no parent
	   2. Middle Child 
	   	1. has parent
		3. no parent
	   3. Left or Right child 
	   	1. has parent 
		2. no parent
     */
	
    if(root == nullptr) return;
    Node* current = root; 
    Node* prev = nullptr;
    while(current != nullptr && current->val != val ){
    	prev = current;
	if(current->left != nullptr) if(current->val > current->left->val) current = current->right;
        else if (current->right != nullptr) if(current->val < current->left->val) current = current -> left; 
    }
    
}    
void Tree::insert(int val) {

  // Check if the tree is empty
  if (root == nullptr) {
    root = new Node(val);
    root->left = nullptr;
    root->mid = nullptr;
    root->right = nullptr;
    return;
  }

  // Tree is not empty, check the children
  // We need a temp ptr of the root
  Node* temp = root;

  while (temp != nullptr) {
    
    // If the value to insert is less than root value, go left
    if (val < temp-> val) {
      
      // Check if the left node exists, if not then insert the new node there and break out of the loop
      if (temp->left == nullptr) {
	temp->left = new Node(val);
 	temp->left->left = nullptr;
 	temp->left->mid = nullptr;;
 	temp->left->right = nullptr;
	return;
      }

      temp = temp->left;

      // If the value to insert is equal to the root value, go mid
    } else if (val == temp->val) {
      
      // Check if mid node exists, if not create it
      if (temp->mid == nullptr) {
	temp->mid = new Node(val);
 	temp->mid->left = nullptr;
 	temp->mid->mid = nullptr;
 	temp->mid->right = nullptr;

	return;
      }

      temp = temp->mid;

     // If the value to insert is greater than the root value, go right
    } else {
      
      // Check if right node exists, if not create it
      if (temp->right == nullptr) {
	temp->right = new Node(val);
 	temp->right->left = nullptr;
 	temp->right->mid = nullptr;
 	temp->right->right = nullptr;
	return;
      }

      temp = temp->right;

    }
  }
  

}
 
 

}

void print(Node* root) {
  Node* temp = root;
  if (temp == nullptr) return;
  
  cout << temp->val << ", ";
  print(temp->left);
  print(temp->mid);
  print(temp->right);
}


int main() {

  Tree tree;
  tree.insert(6);
  tree.insert(3);
  tree.insert(8);
  tree.insert(7);
  tree.insert(9);
  
  print(tree.getRoot());
  cout << endl <<  "--------------" << endl;

  tree.remove(6);

  print(tree.getRoot());
}
