/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {

    ListNode *temp1 = A;
    ListNode *temp2 = A;
 temp1 = temp1->next;
 temp2 = temp2->next->next;
    while(temp1->val != temp2->val){
         temp1 = temp1->next;
         temp2 = temp2->next->next;
    }
temp1 = A;

while(temp2->next!=temp1){
    temp1 = temp1->next;
    temp2 = temp2->next;
}
temp2->next = NULL;

return A;
}
