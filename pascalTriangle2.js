// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: rowIndex = 3
// Output: [1,3,3,1]
// Example 2:

// Input: rowIndex = 0
// Output: [1]
// Example 3:

// Input: rowIndex = 1
// Output: [1,1]
 

// Constraints:

// 0 <= rowIndex <= 33

/**
 * @param {number} rowIndex
 * @return {number[]}
 */
 var getRow = function(rowIndex) {
    
    
    if(rowIndex===0){
        return [1];
       }
    if(rowIndex===1){
        return [1,1];
    }
    
    const result=[[1],[1,1]];
    
    while(result.length!=rowIndex+1){
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
        if(result.length==rowIndex+1){
           return row;
           }
       
          }
    

    
   
};