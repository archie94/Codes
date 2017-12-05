/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
   vector<int> a;

   void pre(Node *root) {
       if (root != NULL) {
           pre(root -> left);
           a.push_back(root->data);
           pre(root -> right);
       }
   }

    bool is_sorted() {
        for (int i = 1 ;i < a.size(); i++) {
            if (a[i-1] >= a[i]) // data in left node strictly less and data in right node strictly greater than root
                return false;
        }
        return true;
    }

   bool checkBST(Node* root) {
       pre(root);
       return is_sorted();
   }

