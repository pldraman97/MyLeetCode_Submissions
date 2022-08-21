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
    vector<int> nextLargerNodes(ListNode* head) {
        stack< pair<int,int> > s;
        vector<int> result;
        int i = 0;
        while(head)
        {
            result.push_back(0);
            while(s.empty() != true && s.top().first < head->val)
            {
                result[s.top().second] = head->val;
                s.pop();
            }
            s.push({head->val,i});
            i++;
            head =  head->next;
        }
        return result;
    }
};