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



// int main(){
//     int size;
//     cout<<"ENTER THE SIZE OF ARRAY : ";
//     cin>>size;

//     int *array = new int[size];

//     int i = 0;
//     for(;i<size;i++){
//         cout<<"ENTER THE VALUE FOR POSITION ["<<i<<"]: ";
//         cin>>array[i];
//     }
//     print_array(array,size);
// }


// void print_array(vector<int>array, int size){
//     cout<<"THE ARRAY IS : | ";
//     int i = 0;
//     for(;i<size;i++){
//         cout<<array[i]<<" | ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int>array;
//     for(int i = 0; i<10 ; i++){
//         array.push_back(1);
//     }
//     print_array(array,array.size());
//     cout<<"TOTAL SIZE OF THE ARRAY IS "<<sizeof(array)<<" Bytes!";

// }

// (Question)
// DUTCH FLAG PROBLEM (RED WHITE BLUE)

// void sort_dutch(vector<int> &array){
//     int left = 0;
//     int right = array.size() - 1;
//     int index = 0;

//     while(index < right){
//         if(array[index] == 0){
//             swap(array[index],array[left]);
//             left++;
//             index++;
//         }
//         else if(array[index] == 2){
//             swap(array[index],array[right]);
//             right--;
//         }
//         else{
//             index++;
//         }
//     }

// }
// int main(){
//     vector<int> array = {0,0,1,1,1,1,1,0,0,0,0,1,1,1,2,2,2,2,0,1,0,1,1,1,2,1,0};
//     sort_dutch(array);
//     print_vector(array);
// }


// (Question)
// ARRAY ROTATE
// void rotate(vector<int> &array,int k){
//     // vector<int> copy = array;
//     int i = 0;
//     for( ; i < array.size() ; i++){
//         int newIndex = (k + i) % array.size();
//         int temp = 
//         array[newIndex] = copy[i];
//     }
// }

// int main(){
//     vector<int> array = {1,2,3,4,5,6};
//     rotate(array,2);
//     print_vector(array);
// }

// (Question)
// MISSING NUMBER
// #include <limits.h>

// int missing_num(vector<int> array){
//     int max = INT_MIN; (max nikal ne ki jarurat nahi hai size se kaam chalejayega)
//     int array_sum = 0;
//     int i = 0;
//     for(; i < array.size() ;i++){
//         if(array[i] > max)
//             max = array[i];
//         array_sum += array[i];
//     }
//     return ((max*(max + 1))/2) - array_sum;
// }

// int main(){
//     vector<int> array = {1,2,3,5,4,8,6};
//     cout<<missing_num(array);
// }

// (Question)
//// WHICH ROW HAS THE MOST ONES 
//// leet code ke question me function void nahi hai function vector<int> return karta hai!!!!!! (NNOOOOTTTEE KAARRR LLEEE!!!)
// void most_ones(vector<vector<int>> &matrix){
//     int max_index = 0;
//     int max_sum = 0;
//     int i = 0; 
//     for(; i < matrix.size() ; i++){
//         int sum_subarray = 0;
//         int j = 0;
//         for( ; j < matrix[i].size() ; j++){
//             sum_subarray += matrix[i][j];
//         }
        
//         if(sum_subarray > max_sum){
//             max_sum = sum_subarray;
//             max_index = i;
//         }
//     }

//     print_vector(matrix[max_index]);
// }

// int main(){
//     vector<vector<int>> array = {{1,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1},{1,1,0,0,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,1},{0,1,0,1,1,1,1,1,1,0,0,0,0,1,0}};
//     most_ones(array);
// }

// (Question)
// key pair problem

// void key_pair(vector<int> array,int target){
//     int left = 0;
//     int right = array.size() - 1;
//     int sum = -1;
//     int is = 0;
//     sort(array.begin(),array.end());
//     while(left < right){
//         sum = array[left]+ array[right];
//         if ( sum == target){
//             is = 1;
//             break;
//         }
//         else if (sum > target){
//             right--;
//         }
//         else if (sum < target){
//             left++;
//         }
//     }
//     if (is  == 1)
//         cout<<"\nsum hora hai";
//     else
//         cout<< "\nnahi hora hai";
// }

// int main(){
//     vector<int> array = {1,4,45,6,10,8};
//     key_pair(array,16);
// }

// (Question)
// finding duplicate of a number
// METHOD ONE
// int find_duplicate(vector<int> &array){
//     sort(array.begin(),array.end());
//     int i = 0;
//     for( ; i < array.size() - 1; i++){
//         if(array[i] == array[i+1]){
//             return array[i];
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> array = {1,3,4,2,2};
//     cout<<"THE REPETED NUMBER IS : "<<find_duplicate(array);
// }

// METHOD 2
// int find_duplicate(vector<int> array){
//     int size = array.size();
//     for(int i = 0 ; i < size ; i++){
//         swap(array[i],array[array[i]]);
//         array[array[i] - 1] *= -1;
//         if(array[array[i]] + array[i] == 0){
//             return array[i];
//         }
//     }
// }

// int main(){
//     vector<int> array = {1,3,4,2,2};
//     // cout<<"THE REPETED NUMBER IS : "<<find_duplicate(array);
//     cout<<find_duplicate(array);
//     // print_vector(array);
// }


// (Question)
// finding pivot index
// int piviot_index(vector<int> array){

//     vector<int> left_sums(array.size(),0);
//     vector<int> right_sums(array.size(),0);

//     int array_size = array.size();
//     for(int i = 1 ; i < array_size ; i++){
//         right_sums[i] = right_sums[i - 1] +  array[i - 1];
//         left_sums[array_size - i - 1] = left_sums[array_size - i] + array[array_size - i];
//         if(right_sums[i] ==  left_sums[i]){
//             return i;
//         }
//     }
//     int j = 0;
//     for( ; j < array_size ; j++){
//         if(left_sums[j] == right_sums[j]){
//             return j;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> array = {2,1,-1};
//     cout<<"THE PIVIOT INDEX IS : "<<piviot_index(array)<<endl;
// }


// (Question)
// wave print of matrix (ise leet code pe dalna hai!!!!!!!!!!!!!!)
// void wave_print(vector<vector<int>> &mat){
//     int total_row = mat.size();
//     int row = 0;
//     int total_col = mat[row].size();
//     for( ;row < total_col ; row++){
//         for(int col = 0 ; col < total_row ; col++){
//             if(row % 2 == 0){
//                 cout<<mat[col][row]<<" | ";
//             }
//             else{
//                 cout<<mat[total_row - col - 1][row]<<" | ";
//             }
//         }   
//     }
// }

// int main(){
//     vector<vector<int>> mat = {{1,2,3,4,21},{5,6,7,8,22},{9,10,11,12,23},{12,14,15,16,24},{17,18,19,20,25}};
//     wave_print(mat);
// }

// (Question)
// spiral printing
// void spiral_print(vector<vector<int>> matrix){
//     int total_col = matrix[0].size() - 1;
//     int total_row  = matrix.size() - 1;
//     int print_number = 0;
//     int last_index1 = 0;
//     int last_index2 = 0;
//     int last_index3 = 0;
//     int last_index4 = 0;
//     for(int i =0 ; i < matrix.size() ; i++){
//         if(print_number%2 == 0){
//             if((print_number % 4) == 0){
//                 // ----->
//                 int j = 0;
//                 for( ; j< total_col ; j++){
//                     cout<<matrix[i][j];
//                 }
//                 last_index1 = j;

//             }
//             else{
//                 int j = total_col ;
//                 for( ; j >= 0  ; j--){
//                     cout<<matrix[last_index2][j];
//                 }
//                 last_index3 = j;
//             }
//         }
//         else{
//             //down
//             if(((print_number) % 2)){
//                 int j = 1 ;
//                 for( ; j< total_row ; j++){
//                     cout<<matrix[j][last_index1];
//                 }
//                 last_index2 = j;
//             }
//             else{
//                 // up
//                 int j = total_row ;
//                 for( ; j >= 0  ; j--){
//                     cout<<matrix[last_index2][j];
//                 }
//                 last_index3 = j;
//             }
//         }
//         print_number++;
//     } 
// }

// int main(){
//     vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{12,14,15,16},{17,18,19,20}};
//     spiral_print(mat);
// }

// (Question)
// sprial print bubbar method (samajhle!!!!)

vector<int> spiral_print(vector<vector<int>> array){
    vector<int> ans ;
    int row = array.size();
    int col = array[0].size();

    int total_elements = row*col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    int count = 0;
    while(count < total_elements){

        for(int i = startingCol ; i<=endingCol && count < total_elements; i++){
            ans.push_back(array[startingRow][i]);
            count++;
        }
        startingRow++;

        for(int i = startingRow ; i<= endingRow && count < total_elements; i++){
            ans.push_back(array[i][endingCol]);
            count++;
        }
        endingCol--;
        
        for(int i = endingCol ; i>= startingCol && count < total_elements; i--){
            ans.push_back(array[endingRow][i]);
            count++;
        }
        endingRow--;
        
        for(int i = endingRow; i>= startingRow && count < total_elements; i--){
            ans.push_back(array[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
        

int main(){
    // vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    print_vector(spiral_print(mat));
}

