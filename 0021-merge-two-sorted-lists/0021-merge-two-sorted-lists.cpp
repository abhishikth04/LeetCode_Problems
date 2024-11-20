class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Vector to store all elements from both lists
        std::vector<int> values;

        // Add elements from list1 to the vector
        ListNode* temp = list1;
        while (temp != nullptr) {
            values.push_back(temp->val);
            temp = temp->next;
        }

        // Add elements from list2 to the vector
        temp = list2;
        while (temp != nullptr) {
            values.push_back(temp->val);
            temp = temp->next;
        }

        // Sort the combined vector
        std::sort(values.begin(), values.end());

        // Create a new linked list from the sorted vector
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        for (int val : values) {
            current->next = new ListNode(val);
            current = current->next;
        }

        // Return the merged and sorted list (dummy->next skips the dummy node)
        return dummy->next;
    }
};
