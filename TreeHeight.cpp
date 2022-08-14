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

int getHeight(TreeNode<int>* root) {
    
    if(root == NULL){
        
        return 0;
    }
    int size =0;

    
    for (int i=0;i<root->children.size();i++){
        int childHeight = getHeight(root->children[i]);
        if(size<childHeight){
            size = childHeight;
        
    }
    }
    
    return size+1;
}

int main(){

    return 0;
}