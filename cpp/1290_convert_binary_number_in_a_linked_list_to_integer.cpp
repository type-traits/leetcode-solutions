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
    int getDecimalValue(ListNode* head) {
        if(!head) 
            return 0;
        
        string temp = "";
        while(head){
            head->val == 0 ? temp.push_back('0') : temp.push_back('1');
            head = head->next;
        }
        int result = 0;
        int n = temp.size();

        for(int i = n; i>0; i--)
        {
            if(temp[i-1] == '1')
            {
                result += std::pow(2, n-i);
            }
        }
        return result;
        
    }
};