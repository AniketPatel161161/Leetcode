class Solution {
public:

    vector<int> mergeArrays(vector<ListNode*>& lists){
        vector<int> result;
        for(int i = 0; i < lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                result.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr = mergeArrays(lists);
        ListNode* head = NULL;
        ListNode* tail = NULL;
        for(int i = 0; i < arr.size(); i++){
            ListNode* node = new ListNode(arr[i]);
            if(head == NULL){
                head = node;
                tail = node;
            }
            else{
                tail->next = node;
                tail = node;
            }
        }
        return head;
    }
};