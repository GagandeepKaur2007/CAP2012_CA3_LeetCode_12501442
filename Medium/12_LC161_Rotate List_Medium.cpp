class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* temp = head;
        int n = 1;

        while (temp->next != nullptr) {
            temp = temp->next;
            n++;
        }

        temp->next = head;

        k = k % n;

        int steps = n - k;

        while (steps > 0) {
            temp = temp->next;
            steps--;
        }

        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};
