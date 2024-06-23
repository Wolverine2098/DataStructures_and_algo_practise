/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B, int C) {
int pos = 0;
ListNode* tempt = A;
while(tempt!= NULL && pos< C-1)
{pos ++;
// cout<<tempt->val<<" ";
tempt= tempt->next;

}
ListNode* temp = new ListNode(B);
 temp->next = tempt->next;
 tempt->next = temp;

 return A;

}
