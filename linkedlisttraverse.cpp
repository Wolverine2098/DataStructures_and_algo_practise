/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void Solution::solve(ListNode* A) {

ListNode *temp = A;

 while(temp->next!= NULL)
 {
     cout<< temp->val<<" ";
     temp = temp->next;
 }

}
