#include<stdio.h>
int main(){
    int num[10], size, newElement, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++){
        scanf("%d", &num[i]);
    }

    printf("Insert the element at the end: ");
    scanf("%d", &newElement);
    
    num[size] = newElement; 
    size++; 
    printf("\nUpdated array:\n");
    for(i = 0; i < size; i++){
        printf("%d ", num[i]);
    }

    return 0;
}
