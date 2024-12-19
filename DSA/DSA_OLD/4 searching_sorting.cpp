#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_array(int array[], int size){
    cout<<"THE ARRAY IS : | ";
    int i = 0;
    for(;i<size;i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}

void print_vector(vector<int> array){
    int i = 0 ; 
    cout<<"VECTOR : | ";
    for(; i < array.size() ; i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}

void print(const std::string& str) {
  cout << str <<endl;
}

// LINEAR SEARCH   1
int BinarySearch(int array[] , int size , int target){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = (start + end) / 2; //some flaw in this line
        if(array[mid] == target){
            return mid;
        }
        else if (target > array[mid]){
            start = mid + 1;   
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


// int main(){
//     int size = 9;
//     int array[size]  = {10,20,30,40,50,60,70,80,90};
//     cout<<binarySearchIndexes(array,size,0, size - 1,70);
//     return 0;
// }

//(Question) 
// finding first occurance of a number is sorted array  2
int firstOccurance(int array[] , int size , int target){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start <= end){
        int mid = (start + end) / 2; //some flaw in this line
        if(array[mid] == target){
            ans = mid ;
            end = mid - 1;
        }
        else if (target > array[mid]){
            start = mid + 1;   
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

// int main(){
//     int array[]  = {10,20,30,30,30,30,40,50};
//     int size = sizeof(array)/sizeof(array[0]);
//     cout<<firstOccurance(array,size,30);
//     return 0;
// }

//(Question)
// finding last occurance of a number is sorted array (logic!!!)  3
int lastOccurance(int array[] , int size , int target){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start <= end){
        int mid = (start + end) / 2; //some flaw in this line
        if(array[mid] == target){
            ans = mid ;
            start = mid + 1;
        }
        else if (array[mid] < target){
            start = mid + 1;   
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

// int main(){
//     int array[]  = {10,20,30,30,30,30,40,50};
//     int size = sizeof(array)/sizeof(array[0]);
//     cout<<lastOccurance(array,size,30);
//     return 0;
// }

// finding total occurance of a number  4
// int main(){
//     int array[]  = {10,20,30,30,30,30,40,50};
//     int size = sizeof(array)/sizeof(array[0]);
//     int firstOccur = firstOccurance(array,size,30);
//     int lastOccur = lastOccurance(array,size,30);
//     cout<<lastOccur - firstOccur + 1;
//     return 0;
// }

//(Question)
// (very imp!!!) find missing element in sorted array 5 (geeks for geeks)
// int missingNumber(int array[] , int size){ //revise karle ye wala
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;
//     while(start <= end){
//         int mid = (start + end) / 2; //some flaw in this line
//         if(array[mid] - mid == 2){
//             ans = array[mid];
//             end = mid - 1;
//         }
//         else if(array[mid] - mid == 1){
//             start = mid + 1;
//         }
//     }
//     if(!(ans + 1)){
//         return size + 1;
//     }
//     return ans - 1;
// }
// int main(){
//     int array[]  = {1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(array)/sizeof(array[0]);
//     cout<<missingNumber(array,size);
//     return 0;
// }

//(Question)
// finding peak element in mountian array 6
int peakIndex(int array[] , int size){
    int s = 0;
    int e = size - 1;
    while(s < e){
        int mid = (s + e)/ 2;
        if(array[mid] < array[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}
// int main(){
//     int array[]  = {10,20,30,60,40,5};
//     int size = sizeof(array)/sizeof(array[0]);
//     cout<<peakIndex(array,size);
//     return 0;
// }

//(Question)
// LEVEL 2
// search in rotated and sorted array (leetcode) 7
int binarySearchIndexes(int array[], int size , int start, int end,int target){  //revise revise revise revise revise revise revise 
    while(start <= end){
        int mid = (start + end) / 2; //some flaw in this line
        if(array[mid] == target){
            return mid;
        }
        else if (target > array[mid]){
            start = mid + 1;   
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int maximumSearchBinary(int array[],int size){
    int s = 0;
    int e = size - 1;
    while(s <= e){
        int mid = (s + e) / 2;
        if(s == e){
            return e;
        }
        if(((mid - 1) >=0) && array[mid] < array[mid - 1]){
            return mid - 1;
        }
        else if(((mid + 1) <= size - 1) && array[mid] > array[mid + 1]){
            return mid;
        }
        else if(array[0] > array[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int searchElement(int array[], int size, int target){
    int piviotElement = maximumSearchBinary(array,size);
    cout<<"maximum element : "<<array[piviotElement]<<endl;
    if((array[0] <= target) && (target <= array[piviotElement])){
        cout<<"here1";
        binarySearchIndexes(array,size,0,piviotElement,target);
    }
    else if((array[size - 1] <= target) && (target >= array[piviotElement])){
        cout<<"here2";
        binarySearchIndexes(array,size,0,piviotElement,target);
    }
}

// int main(){
//     int array[]  = {12,13,14,15,16,2,3,4,5,6,7,8};
//     int size = sizeof(array)/sizeof(array[0]);
//     cout<<searchElement(array,size,5);
//     return 0;
// }

//(Question)
// square root of a number (leet code) 8
// int squareRoot(int number){
//     int start = 0;
//     int end = number ;
//     int ans = - 1; 

//     if (number == 1){
//         return 1;
//     }

//     while( start <= end){
//         long long int mid = start + (end -start) /2 ;
//         if((mid * mid) ==  number){
//             return mid;
//         }
//         else if((mid * mid) <  number){
//             ans = mid;
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     return number /ans;
// }

// int main(){
//     int number = 68;
//     cout<<squareRoot(number);
// }

// square root with 3 decimal places 8 (hw)
//(Question)
// divisor and quotient  9

int Quotient( int divisor , int dividend){
    int start = 0;
    int end = dividend;
    int ans = -1;
    while(start <= end){
        long long int  mid = start + (end -start) /2;
        if(mid * divisor == dividend){
            return mid;
        }
        else if(mid * divisor < dividend){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int divisor = -7;
    int dividend = 35;
    int answer = Quotient(abs(divisor),abs(dividend));
    if((divisor < 0 && dividend > 0) ||(divisor > 0 && dividend < 0)){
        answer *= -1;
    }
    cout<<"The answer is "<<answer;
}

//(Question)
// divisor and quotient (exact answer number with decimals up to 3 places) 10

// ((vimp!!!)) binary search on nearly sorted array (57:54)
// alwyas compare mid for number at array[mid-1], array[mid] ,array[mid+1] and always go -2 or +2 for mid for left and right respectively


// Find odd occuring elements in an array 11 (ye karna baki hai) (shayad leet code ka question hai)
