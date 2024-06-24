/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A) {
   ListNode* fast = A;
   ListNode* slow = A;
   while(fast!= NULL && fast->next != NULL && fast->next->next!= NULL && slow!= NULL && slow->next!= NULL )
   {slow = slow->next;

   fast = fast->next->next;
   }
   if(fast->next!= NULL)
   slow = slow->next;

   return slow->val;
}
