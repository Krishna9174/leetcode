/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return false;
        }
      ListNode *slow=head;
      ListNode *fast=head;
      while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast) return true;
      };
      return false;

    //   set<ListNode*> hash;
    //     while(head!=NULL){
    //    if(hash.find(head)!=hash.end()){
    //        return true;
    //    }
    //    hash.insert(head);
    //    head=head->next;
    //     }
    //     return false;





    }
};