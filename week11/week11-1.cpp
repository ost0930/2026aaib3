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
 //week11-1.cpp 學習計畫 Linked List
 //鏈結串列
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        while(head !=nullptr){
            a.push_back(head->val );
            head = head->next;
        }
        ListNode*ans = new ListNode(999);
        ListNode*now = ans;
        for(int i=a.size()-1;i>=0;i--){
            now->next = new ListNode(a[i]);
            now=now->next;
            }
            return ans->next;
        //ListNode*now = head;//全走一次
        //while(now!=nullptr){
        //   cout<<now->val<<" ";
        //   now=now->next;
        //}
        //ListNode*ans = new ListNode(999);
        //return ans;
    }
};
