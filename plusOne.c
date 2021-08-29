// Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

// The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

// You may assume the integer does not contain any leading zero, except the number 0 itself.

 

// Example 1:

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Example 2:

// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Example 3:

// Input: digits = [0]
// Output: [1]
 

// Constraints:

// 1 <= digits.length <= 100
// 0 <= digits[i] <= 9



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
//     *returnSize=digitsSize;
//     int *retarr;
//        // newDigits = (int*)malloc(sizeof(int)*(digitsSize+1));
//      retarr=(int*)malloc(*(returnSize)*sizeof(int*));
//         for(int i=0;i<digitsSize;i++){
//                 retarr[i]=digits[i];
  
//         }
//     if(digits[digitsSize-1]==9){
//         retarr[digitsSize-1]=0;
//     }
//     else{
//         retarr[digitsSize-1]=digits[digitsSize-1]+1;
//     }
//     int extra[digitsSize+1];
//     if(retarr[0]==0){
//      for(int i=0;i<digitsSize;i++){
//          extra[i+1]=retarr[i];
      
//      }
        
//        extra[0]=1;
//         for(int i=0;i<=digitsSize;i++){
//             // printf("%d",extra[i]);
//         }
        
//         for(int i=0;i<=digitsSize;i++){
//             retarr[i]=extra[i];
//             // printf("%d",retarr[i]);
//         }
//     }
        

   
//     return retarr;
   
        *returnSize=digitsSize;
    int *retarr;
        retarr=malloc(sizeof(int)*(*returnSize));
    
    int i,flag=0;
    int count=1;
    
    
    if(digits[digitsSize-1]==9){
        flag=1;
    }
    
    for(int i=digitsSize-1;i>=0;i--){
        
        if(digits[i]!=9){
            flag=0;
        }
        
        if(flag){
            retarr[i]=0;
        }
        else{
            retarr[i]=digits[i]+count;
            count=0;
        }
    }
    
    if(flag){
        *returnSize=digitsSize+1;
        retarr=realloc(retarr,sizeof(int)*(*returnSize));
        retarr[0]=1;
        retarr[digitsSize]=0;
    }
    
    return retarr;
}