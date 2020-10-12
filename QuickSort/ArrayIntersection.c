#include "ArrayIntersection.h"
#include "queue.h"

void ArrayIntersection(int *arr1, int size1, int *arr2, int size2) {
    static int count = 0;
    LNode *head = InitLNode();
    int *arr_temp;
    if(size1 ==0 || size2 ==0) return;
    if(size1 > size2) {
        arr_temp = arr1;
        arr1 = arr2;
        arr2 = arr_temp;
    }
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                InsertLNode(head, arr1[i]);
                count++;
            }
        }
    }
    printf("[INFO] the data number: %d \n", count);
    ShowLNode(head);
}
























