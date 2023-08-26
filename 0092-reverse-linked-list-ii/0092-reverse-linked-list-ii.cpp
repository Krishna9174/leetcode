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
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       vector<int> vt;
       ListNode *p=head;
       while(p!=NULL){
           vt.push_back(p->val);
           p=p->next;
       }
       while(left<right){
           swap(vt[left-1], vt[right-1]);
           left++; right--;
       }
        ListNode* newHead= new ListNode(vt[0]);
       ListNode * curr=newHead;
       for(int i=1; i<vt.size(); i++){
            ListNode* newnode= new ListNode(vt[i]);
            curr->next=newnode;
            curr=newnode;
       }
   return newHead;
}
    
};