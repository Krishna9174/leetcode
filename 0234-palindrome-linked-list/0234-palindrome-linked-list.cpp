/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
//private:
  //ListNode* reverselist(ListNode* head){
//       ListNode* pre=NULL;
//       ListNode* next=NULL;
//       while(head!=NULL){
//           next=head->next;
//           head->next=pre;
//           pre=head;
//           head=next;
//       }
//       return pre;
//   }

public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL) return true;
    //     ListNode*slow= head;
    //     ListNode*fast= head;
    //     while(fast->next!=NULL && fast->next->next!=NULL){
    //         slow=slow->next;
    //         fast=fast->next->next;
    //     }

    //   slow->next=reverselist(slow->next);
    //   slow=slow->next;
    //   while(slow!=NULL){
    //       if(head->val!=slow->val) return false;
    //       head=head->next;
    //       slow=slow->next;
    //   }
    //   return true;
    vector<int> vt;
    while(head!=NULL){
        vt.push_back(head->val);
        head=head->next;
    }
    vector<int> st(vt.rbegin(), vt.rend());
   if(vt==st) return true;
   return false;


        
    }
};