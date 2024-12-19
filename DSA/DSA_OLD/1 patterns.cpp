#include <iostream>
using namespace std;
void printNum(int num){
    cout<<num;
}
void printChar(char c){
    cout<<c;
}

// // DECIMAL TO BINARY (Question)
// int deciToBinary(int num){
//     int binary = 0;
//     int placeValue = 1;
//     while(num>0){  
//         binary = binary + (num%2)*placeValue;
//         num = num /2;
//         placeValue *= 10;
//     }
//     return binary;
// }
// int main(){
//     cout<<deciToBinary(7);
//     return 0;
// }

// BINARY TO DECIMAL (Question)
// int binaryTODecimal(int num){
//     int ans = 0;
//     int mul = 1;
//     while(num){
//         ans = ans + (num & 1)*mul;
//         mul = mul * 2;
//         num = num /10;
//     }
//     cout<<ans;
// }

// int main(){
//     binaryTODecimal(1111);
// }

// EVEN PRINTING (Question)
// int main(){
//     for(int i=0 ; i<=100 ; i += 2){
//         printNum(i);
//     }
//     return 0;
// }

// PATTERNS (Question)
// int main(){
//     for(int row = 0; row!=5 ; row++){
//         for(int col = 0 ; col!=5; col++){
//             if (row==0 || row==4){
//                 cout<<"* ";
//             }
//             else{
//                 if (col==0 || col==4){
//                     cout<<"* ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){ (Question)
//     for(int row = 0 ; row<=10 ; row += 1){
//         for(int col=0 ; col<=row ; col +=1){
//             printChar('*');
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){ (Question)
//     for(int row = 0 ; row<10 ; row += 1){
//         for(int col=0 ; col<(10-row) ; col +=1){
//             printNum(col+1);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*N = 5
  *
 ***
*****
 ***
  *
*/

// int main(){ //inverted pyramid (Question)
//     int n = 4;
//     for(int row = 0 ; row <n ; row++){
//         for(int col = 0 ; col < row ; col++){
//             cout<<" ";
//         }
//         for(int col = 0 ; col < n-row ; col++){
//             cout<<"* ";
//         }
//         cout<<""<<endl;
//     }
// }
 
// int main(){  //diamond pattern (Question)
//     int n = 10/2;
//     for(int row = 0 ; row < n ; row++){
//         for(int spc = 0 ; spc < n-row ; spc++){
//             cout<<" ";
//         }
//         for(int chr = 0 ; chr < row ; chr++){
//             cout<<"* ";
//         }
//         cout<<""<<endl;
//     }
//     for(int row = n ; row > 0 ; row--){
//         for(int spc = 0 ; spc < n-row ; spc++){
//             cout<<" ";
//         }
//         for(int chr = 0 ; chr < row ; chr++){
//             cout<<"* ";
//         }
//         cout<<""<<endl;
//     }
// }

// int main(){ //unique pattern1 (Question)
//     int n = 20/2;
//     for(int row = 0 ; row < n ; row++){
//         for(int spc = 0 ; spc < n-row ; spc++){
//             cout<<" ";
//         }
//         for(int chr = 0 ; chr < row ; chr++){
//             if (chr == 0 || (chr == row-1))
//                 cout<<"* ";
//             else
//                 cout<<"  ";
//         }
//         cout<<""<<endl;
//     }
//     for(int row = n ; row > 0 ; row--){
//         for(int spc = 0 ; spc < n-row ; spc++){
//             cout<<" ";
//         }
//         for(int chr = 0 ; chr < row ; chr++){
//             if (chr == 0 || (chr == row-1))
//                 cout<<"* ";
//             else
//                 cout<<"  ";
//         }
//         cout<<""<<endl;
//     }
// }


// int main(){  //unique pattern 2 (Question)
//     int n = 20/2;
//     for(int row = 0 ; row < n ; row++){
//         for(int spc = 0 ; spc < n-row ; spc++){
//             cout<<"* ";
//         }
//         for(int chr = 0 ; chr < row ; chr++){
//             cout<<"    ";
//         }
//         for(int chr2 = 0 ; chr2 < n-row ; chr2++){
//             cout<<"* ";
//         }
//         cout<<""<<endl;
//     }
//     for(int row1 = n-1 ; row1 > 0 ; row1--){
//         for(int spc2 = 0 ; spc2 <= n-row1 ; spc2++){
//             cout<<"* ";
//         }
//         for(int chr4 = 0 ; chr4 < 2*(row1-1) ; chr4++){
//             cout<<"  ";
//         }
//         for(int spc2 = 0 ; spc2 <= n-row1 ; spc2++){
//             cout<<"* ";
//         }
//         cout<<""<<endl;
//     }
// }

// #include <iostream> (Question)
// using namespace std;

// int main(){
//     int n = 5;
//     for(int row = 1 ; row <= n ; row++){
//         for(int col =  0 ; col < row ; col++){
//             if (row==1 || row==n){
//                 cout<<col+1;
//             }
//             else{
//                 if (col==0 || row == (col+1)){
//                     cout<<col+1<<" ";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }
// (Question)
// int main(){
//     char chr = 'A';
//     int n = 5;
//     for(int row = 0 ; row < 5 ; row++){
//         for(int col=0 ; col < row ; col++){
//             cout<<chr+1;
//         }
//     }
// }
// (Question)
// #include <iostream>
// using namespace std;

// int main(){
//     char chr = 'A';
//     int n = 5;
//     for(int row = 0; row < 5; row++){
//         for(int col = 0; col <= row; col++){
//             cout<<static_cast<char>(chr + col)<<" ";
//         }
//         for(int col2 = row ; col2>0 ; col2--){
//             cout<< static_cast<char>(chr+col2-1)<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// or or or or or or or or or or or or or or
// (Question)
// #include <iostream>
// using namespace std;

// int main(){
//     char chr = 'A';
//     int n = 5;
//     for(int row = 0; row < 5; row++){
//         for(int col = 0; col <= row; col++){
//             char chr2 = (chr + col);
//             cout<< chr2 <<" ";
//         }
//         for(int col2 = row ; col2>0 ; col2--){
//             char chr3 = (chr + col2-1);
//             cout<< chr3 <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// (Question)

// int main(){
//     int n = 10;
//     for(int row=0 ; row < n ; row++){
//         for(int col=row+1 ; col <= n ; col++){
//             if ((row == 0) || (row == n-1)){
//                 cout<<col;
//             }
//             else{
//                 if ((col == row+1) || (col==n)){
//                     cout<<col;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// (Question)

// int main(){ // plaindrome
//     int n = 10;
//     for(int row = 0 ;  row < n ; row++){
//         for(int space1 = 0 ; space1 < n-row-1 ; space1++){
//             cout<<"  ";
//         }
//         for(int p1 = 1 ; p1 <= row+1 ; p1++){
//             cout<<p1<<" ";
//         }
//         for(int p2 = row ; p2 > 0 ; p2--){
//             cout<<p2<<" ";
//         }
//         for(int space2 = 0 ; space2 < n-row-1 ; space2++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// (Question)

// int main(){  //foylds triangle
//     int n=5;
//     int num = 1;
//     for(int row = 1 ; row <=n ; row++){
//         for(int col = 1 ; col<=row ; col++){
//             cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
// }

// (Question)

// int main(){
//     int n = 5;
//     int start = 8,end = 8;
//     for(int row = 1 ; row <= n ; row++){
        
//         for(int col = 0 ; col < 17; col++){
//             int condition2 = (start == col || end == col || (col<end && col >start));
//             if(row%2){
//                 if (!(col%2) && condition2){
//                     cout<<row;
//                 }
//                 else{
//                     cout<<"*";
//                 }
//             }
//             else if (!(row%2)){
//                 if(col%2 && condition2){
//                     cout<<row;
//                 }
//                 else{
//                     cout<<"*";
//                 }
//             }
//         }
//         start = start - 1;
//         end = end + 1;
        
//         cout<<endl;
//     }
// }

// (Question)

// fancy pattern 2
// int main(){
//     int n;
//     cin>>n;
//     int count = 1;
//     for (int i = 0; i < n; i++){
//         for(int j = 0 ;j < 2*i + 1 ; j++ ){
//             if (j%2){
//                 cout<<"*";
//             }
//             else{
//                 cout<<count++;
//             }
//         }
//         cout<<endl;
//     }
//     count = n - 4;
//     for (int i = 0; i < n ; i++){
//         int j = 2*i + 1;
//         int start = count - j;
//         for(; j > 0 ; j-- ){
//             if (j%2){
//                 cout<<count++;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

// }

// (Question)

// pascals triangle
// int fact(int n){
//     int num = 1;
//     for(int i = 1 ; i <= n ; i++){
//         num = num * i;
//     }
//     return num;
// }

// int main(){
//     int n = 10;
//     for(int i = 0 ; i < n ; i++){

        
//         for(int j = 0 ; j < i + 1  ; j++){
//             cout<< fact(i)/(fact(j)*fact(i-j)) <<" ";
//         }
//         cout<<endl;
//     }
// }

// (Question)

// setting the kth bit

// int main(){
//     int num = 14;
//     int set = 2;

//     int setted = num | (1<<2);

//     cout<<setted;

//     return 0;
// }

// count set bit
// (Question)

// int count_set(int n){
//     int count = 0;
//     while(n){
//         if(n & 1){
//             count++;
//         }
//         n = n >> 1;
//     }
//     return count;
// }

// int main(){
//     int num = 90;
//     cout<<"TOTAL NUMBERS OF 1 IN THE GIVEN NUMBER IS "<<count_set(num);
// }

// print digits of a number

// int main(){
//     int num = 12345;
//     int divider = 10;
//     while (num ){
//         cout<<num %10 <<endl;
//         num = num /10;
//     }
// }




















