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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       ListNode* temp=head;
       ListNode*dummy=new ListNode(-1);
       ListNode*curr=dummy;
       unordered_set<int>sset;
       for(auto num:nums) sset.insert(num);
       while(temp!=nullptr){
        if(!sset.count(temp->val)){
             curr->next=temp;
             curr=curr->next;
        }
        temp=temp->next;
       }
       curr->next=nullptr;
       return dummy->next; 
    }
};