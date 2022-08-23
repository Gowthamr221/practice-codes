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
private:
    vector<int> storage;
public:
    bool isPalindrome(ListNode* head) {
        while(head!=NULL){
            storage.push_back(head->val);
            head = head->next;
        }
        vector<int> dup(storage);
        reverse(dup.begin(),dup.end());
        return dup == storage;
    }
};