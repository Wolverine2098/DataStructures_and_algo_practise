#include <iostream>
#include <vector>
#include<queue>
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






TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    

    int n;
    cout<<"Enter number of children"<< rootData<<endl;
   cin>>n;

   for(int i=0;i<n;i++){
       TreeNode<int>* child = takeInput();
       root->children.push_back(child);
   }
return root;
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








void printLevelWise(TreeNode<int>* root) {
    if(root == NULL){
        return;
    }
queue<TreeNode<int>*>pendingNodes;
// cout<<root->data<<":";

 pendingNodes.push(root);


// for(int i=0;i<root->children.size();i++){
//     cout<<root->children[i]->data<<",";
//     pendingNodes.push(root);
// }

while(pendingNodes.size()!=0){
    TreeNode<int>* front = pendingNodes.front();
    cout<<front->data<<":";
    int size=front->children.size();
    for(int i=0;i<front->children.size();i++){
        cout<<front->children[i]->data;
        if(size-i>1){
            cout<<",";
            
        }
        pendingNodes.push(front->children[i]);
    }
    cout<<endl;
    pendingNodes.pop();

}



}



TreeNode<int>* takeInputLevelWise(){
  int rootData;
    cout<<"Enter root Data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);   
queue<TreeNode<int>*> pendingNodes;
pendingNodes.push(root);
while(pendingNodes.size()!=0){
 TreeNode<int>* front = pendingNodes.front();
 pendingNodes.pop();
 cout<<"Enter number of children of"<<front->data<<endl;
   int numChild;
   cin>>numChild;
   for(int i=0;i<numChild;i++){
     int childData;
     cout<<"Enter"<<i<<"th child of "<<front->data<<endl;
     cin>>childData;
     TreeNode<int>* child =  new TreeNode<int>(childData);
     front->children.push_back(child);
     pendingNodes.push(child);  
   } 
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
    TreeNode<int>* root = takeInputLevelWise();
    printTreeNew(root);
    return 0;
}