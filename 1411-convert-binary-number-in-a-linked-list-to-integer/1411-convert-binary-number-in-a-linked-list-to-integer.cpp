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
int binarytodecimal(string str){
int n=str.size();
string num=str;
int decimal=0;
int base=1;
for(int i=n-1; i>=0; i--){
    if(num[i]=='1') decimal+=base;
    base=base*2;
} return decimal;
}
    int getDecimalValue(ListNode* head) {
        string str="";
        ListNode* temp= head;
        while(temp!=NULL){
            str=str+to_string(temp->val);
            temp=temp->next;
        }
        int k=binarytodecimal(str);
        return k;
    }
};