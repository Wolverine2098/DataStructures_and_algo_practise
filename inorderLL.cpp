/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void treeTraverse(TreeNode* A, vector<int>& arr){
    if(A== NULL)
    return;
    treeTraverse(A->left,arr);
    arr.push_back(A->val);
    treeTraverse(A->right,arr);
}

vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> traverseData;
    
    treeTraverse(A,traverseData);
    return traverseData;
}
