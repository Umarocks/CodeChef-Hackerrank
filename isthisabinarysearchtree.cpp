https://www.hackerrank.com/challenges/is-binary-search-tree/problem




    bool isBST(Node *root,int& prev){
        if(root){
                if(!isBST(root->left,prev))
                    return false;
                   if(root->data<=prev)
                       return false;
                 prev=root->data;
                return isBST(root->right, prev); 
           }       
           
       
        return true;
}


    bool checkBST(Node* root) {
        int prev=-2147483647;
        return isBST(root,prev);
    }