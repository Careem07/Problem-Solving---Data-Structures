#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {
        
        Node * temp = root;
        Node * newNode = new Node(data);
        if (!root) {
            root = newNode;
            return root;
        }
        while (temp) {
        
             if ( data < temp->data) {      //shmal
                 
                 if (temp->left == NULL) {  //law el shemal fady, insert
                     temp->left = newNode;
                     break;
                 }
                 else
                    temp = temp->left;      
             }
             else if ( data > temp->data ){     //ymen
                 if (temp->right == NULL) {     //law el ymen fady , insert
                     temp->right = newNode;
                     break;
                 }
                 else
                    temp = temp->right;
             }
        }
        return root;
    }

};