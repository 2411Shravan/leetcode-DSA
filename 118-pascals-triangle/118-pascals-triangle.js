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