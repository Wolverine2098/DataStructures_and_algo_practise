#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class TreeNode{
    public:
    T data;
    vector <TreeNode<T>*> children;
    TreeNode(T data){
        this->data = data;

    }
};
// raw way to print the tree
void printTree(TreeNode<int>* root){
    cout<<root->data<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

void printTreeNew(TreeNode<int>* root){
if(root == NULL){
    return;
}

    cout<<root->data<<":";
for(int i=0;i<root->children.size();i++){
    cout<<root->children[i]->data<<",";
}
cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTreeNew(root->children[i]);
    }
}
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout<<"Enter number of children"<< rootData<<endl;
   cin>>n;

   for(int i=0;i<n;i++){
       TreeNode<int>* child = takeInput();
       root->children.push_back(child);
   }
return root;
}


int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // printTree(root);
    TreeNode<int>* root = takeInput();
    printTreeNew(root);
    return 0;
}