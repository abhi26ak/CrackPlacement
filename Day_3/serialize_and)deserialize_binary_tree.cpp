 vector<int> ans;
    vector<int> serialize(Node *root) 
    {
        //Your code here
        if(root == NULL)
        {
            ans.push_back(-1);
            return ans;
        }
        
        ans.push_back(root->data);
        serialize(root->left);
        serialize(root->right);
        
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    int i = 0;;
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(i == A.size()) return NULL;
       int val = A[i];
       i++;
       if(val == -1) return NULL;
       
       Node *root = new Node(val);
       root->left = deSerialize(A);
       root->right = deSerialize(A);
       return root;
    }
