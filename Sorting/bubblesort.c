//bubble sorting

// #include<stdio.h>

// int main(){
//     int arr[] = {6,2,8,5,4,9,3};

//     int size = sizeof(arr) / sizeof(arr[0]);

//     for(int i = 0; i <size-1; i++){
//         for(int j = 0; j<size - i - 1; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];

//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     printf("Sorted array : ");
//     for(int i = 0; i< size; i++){
//         printf("%d", arr[i]);

//     }
//     printf("\n");
//     return 0;
// }

// this program will give the number of elements in the array - arr[]


// #include<stdio.h>

// int main(){
//     int arr[] = {6,2,8,5,4,9,3};

//     int size = sizeof(arr)/sizeof(arr[0]);


//     printf("%d", size);

//     return 0;    
// }


#include<stdio.h>

int main(){
    int arr[] = {9,8,6,5,4,3};

    int n = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 0; i <n-1; i++){
        for(int j= 0; j< n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }  
    printf("Sorted array : ");
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);

    }
    printf("{\n}");
}