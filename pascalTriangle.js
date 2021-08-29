// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]
 

// Constraints:

// 1 <= numRows <= 30


/**
 * @param {number} numRows
 * @return {number[][]}
 */
 var generate = function(numRows) {
    if(numRows<=1){
        return [[1]];
       }
    if(numRows===2){
        return [[1],[1,1]];
    }
    
    const result=[[1],[1,1]];
    
    while(result.length!=numRows){
            let previous=result[result.length-1];
            
        let row=[];
        for(var i=0;i<=previous.length;i++){
            if(i==0){
               row.push(1);
               }
            else if(i==previous.length){
                    row.push(1);
                    }
            else{
                row.push(previous[i-1]+previous[i]);
            }
            
        }
      
        result.push(row);
          }
    
    return result;
};