#include <iostream>
using namespace std;


void print_array(int array[], int size){
    cout<<"ARRAY : | ";
    for(int i = 0 ; i < size ; i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}

// WORKING WITH ARRAYS
// int main(){
//     int size = 10;
//     int arr[size];

//     int i = 0 ;
//     for(;;){
//         if(i<size){
//             cout<<"value for a["<<i<<"] : ";
//             cin>>arr[i];
//             i++;
//         }
//         else{
//             break;
//         }
//     }
//     cout<<"THE ARRAY YOU CREATED : ";
//     for(int j = 0 ; j < size ; j++){
//         cout<<arr[j]<<"|";
//     }
//     for(int j = 0 ; j < size ; j++){
//         arr[j] = arr[j] * 2;
//     }
//     cout<<endl;
//     cout<<"ARRAY DOUBLED : ";
//     for(int j = 0 ; j < size ; j++){
//         cout<<arr[j]<<"|";
//     }
//     return 0;
// }

// 
// (Question)

// // count zero and ones in array;
// int count10(int array[], int size){
//     int zeros = 0;
//     int ones = 0;
//     int i = 0;
//     for(;i<size ; i++){
//         if(array[i] == 1){
//             ones++;
//         }
//         else if(array[i] == 0){
//             zeros++;
//         }
//     }
//     cout<<"zero : "<<zeros<<endl;
//     cout<<"one : "<<ones<<endl;
// }


// int main(){
//     int array[5]={1,0,1,0,0};
//     count10(array,5);
// }

// (Question)
// //FINDING MINIMUM NUMBER IN AN ARRAY;
// #include <limits.h>

// int array_minimum(int array[], int size){
//     int min_num = INT32_MAX;
//     int i = 0 ;
//     for(; i<size ; i++){
//         if(min_num > array[i]){
//             min_num = array[i];
//         }
//     }
//     return min_num;
// }

// int main(){
//     int array[] = {2134,213,1234,234,123,3,4234,123,123};
//     cout<<"minimum number in the array : ";
//     cout<<array_minimum(array,9);

// }
// (Question)
// // REVERSING AN ARRAY
void reverse(int array[], int size){
    int i = 0;
    for(; i<= size/2  ; i++){
        int temp_num = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp_num;
    }
}

// int main(){
//     int size = 11;
//     int array[size] = {1,2,3,4,5,6,7,8,9,10,11};
//     cout<<"BEFORE REVERSING\n";
//     print_array(array,size);
//     reverse(array,size);
//     cout<<"AFTER REVERSING\n";
//     print_array(array,size);
// }

// (Question)
// //EXTREME PRINT
// void extreme_print_array(int array[], int size){
//     cout<<"EXTREMLY PRINTED ARRAY : | ";
//     for(int left=0,right=size - 1; left<right ; left++,right--){
//         cout<<array[left]<<" | "<<array[right]<<" | ";
//     }
// }
// int main() {
//     int size = 11;
//     int array[size] = {1,2,3,4,5,6,7,8,9,10,11};
//     extreme_print_array(array,size);
// }

// (Question)
// find that number which is not repeated twice unlike others
// int find_num(int array[], int size){
//     int num = 0;
//     int i = 0;
//     for(;i<size ; i++){
//         num = num ^ array[i];
//     }
//     return num;
// }

// int main(){
//     int size = 11;
//     int array[size] = {1,2,3,4,2,3,1,4,9,8,8};
//     cout<<find_num(array,size);
// }

// (Question)
// // printing pairs of elements in an array

// void print_pairs(int array[], int size){

//     int i = 0;
//     for(; i<size ; i++){
//         int j = 0;
//         for(; j < size ; j++){
//             cout<<"("<<array[i]<<","<<array[j]<<") ";
//         }
//     }
// }

// int main(){
//     int size = 3;
//     int array[size] = {1,2,3};
//     print_pairs(array,size);
// }

// (Question)
// sorting zeros and ones
// METHOD ONE
// void sort_zeros_and_ones(int array[], int size){
//     int ending = size - 1 ;
//     int i = 0;
    
//     while(i < ending){
//         if(array[i]){
//             swap(array[i],array[ending]);
//         }
//         while(array[ending]){
//             ending--;
//         }
//         i++;
//     }
    
// }

// int main(){
//     int size = 7;
//     int array[size] = {1,1,1,0,0,0,0};
//     sort_zeros_and_ones(array,size);
//     print_array(array,size);
// }

// METHOD 2
void sort_zeros_and_ones(int array[], int size){
    int zeros = 0,ones = 1;
    for (int i = 0 ;i< size ; i++){
        if(array[i]){
            ones++;
        }
        else{
            zeros++;
        }
    }
    for(int j = 0 ; j < size ; j++){
        if(j < zeros){
            array[j] = 0;
        }
        else{
            array[j]  = 1;
        }
    }

}


// MEHTHOD 3
// void zo(int array[] , int size){
//     int left = 0;
//     int index = 0;
//     while(index<size){
//         if(!array[index]){
//             swap(array[left],array[index]);
//             left++;
//         }
//         index++;
//     }
// }
// int main(){
//     int array[] = {0,1,0,1,1,1,0,1,0,1,0,0,0,0,1,1,1,1,0};
//     zo(array,sizeof(array)/sizeof(array[0]));
//     print_array(array,sizeof(array)/sizeof(array[0]));
//     return 0;
// }


int main(){
    int size = 15;
    int array[size] = {0,1,0,1,1,0,0,0,0,1,1,1,0,1,0};
    sort_zeros_and_ones(array,size);
    print_array(array,size);
}


