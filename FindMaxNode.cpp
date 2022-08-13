/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
TreeNode<int>* newNode = new TreeNode<int>(0);
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root == NULL){
        return root;
    }
    
//     TreeNode<int>* root = new TreeNode<int>(rootData);   
    int max = newNode->data;
    // cout<<root->data<<endl;
    int temp1 = root->data;
   if(temp1 > max){
      newNode = root;
       max = temp1;
   }
    
    for(int i=0;i<root->children.size();i++){
        if(root->children[i]->data>=newNode->data){
            newNode = root->children[i];
        }
        
       maxDataNode(root->children[i]);
       
    }
    return newNode;
}