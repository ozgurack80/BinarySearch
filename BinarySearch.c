#include <stdio.h>

int binarySearch(int array[],int size,int target){
    int left = 0;
    int right = size - 1;

    while(left<=right){
        int mid = left + (right-left)/2;

        if(array[mid] == target){
            return mid;
        }
        else if(array[mid]<target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}


int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 6;

    int result = binarySearch(array, size, target);

    if(result != -1){
        printf("Eleman bulundu");
    }
    else{
        printf("Eleman bulunamadi");
    }
    
    printf("\n%d",result);
    return 0;    
}