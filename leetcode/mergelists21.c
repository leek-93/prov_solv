#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }
    

    struct ListNode* head=NULL;
    if(list1->val < list2->val){
        head = list1;
        list1 = list1->next;
    }else{
        head = list2;
        list2 = list2->next;
    }
    struct ListNode* current = head;
    while(list1 && list2){
        if(list1->val < list2->val){
            current->next = list1;
            list1 = list1->next;
        } else{
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    if (list1)
        current->next = list1;
    else
        current->next = list2;

    return head;
}

int main(){
    struct ListNode* list1=NULL;
    struct ListNode* list2=NULL;

    printf("%d", mergeTwoLists(list1, list2));
    return 0;
}