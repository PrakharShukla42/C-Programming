#include <stdio.h>
#define MAX_SIZE 100
void findMaxFrequency(int arr[], int size) {
    int maxCount=0;
    int maxElement=0;
    for (int i=0;i<size;i++) {
        int count=0;
        for (int j=0;j<size;j++) {
            if (arr[j]==arr[i]) {
                count++;
            }
        }
        if (count>maxCount) {
            maxCount=count;
            maxElement=arr[i];
        }
    }
    printf("Element that occurs maximum times: %d\n",maxElement);
}
int main() {
    int size;
    int arr[MAX_SIZE];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    findMaxFrequency(arr, size);
    return 0;
}
