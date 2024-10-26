#include <iostream>

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode* head = new ListNode(0); 
    ListNode* temp = head; 

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry;
        
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        carry = sum / 10;
        temp->next = new ListNode(sum % 10);
        temp = temp->next;  
    }

    return head->next;  
}

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);


    ListNode* result = addTwoNumbers(l1, l2);


    std::cout << "Sum: ";
    printList(result);

    // Clean up memory
    delete l1->next->next;
    delete l1->next;
    delete l1;
    delete l2->next->next;
    delete l2->next;
    delete l2;
    
    while (result != nullptr) {
        ListNode* next = result->next;
        delete result;
        result = next;
    }

    return 0;
}
