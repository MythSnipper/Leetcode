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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        vector<int> nums;
        ListNode* testhead = head;
        while(testhead != NULL){
            nums.push_back(testhead->val);
            testhead = testhead->next;
        }
        ListNode* ret_head = NULL;
        ListNode* ret = NULL;
        for(int i=nums.size()-1;i>=0;i--){
            if(ret == NULL){
                ret = new ListNode(nums[i]);
                ret_head = ret;
            }
            else{
                ret->next = new ListNode(nums[i]);
                ret = ret->next;
            }
        }
        return ret_head;
    }
};
