Pattern : Two Pointer

Problem : Two Sum

Description :
  Given an array of integers and a target value,
  return the  the two numbers whose sum
  equals the target.

Example:
 Input: nums = [2,7,11,15], target = 9
 Output: [2,7] 

Approach : Two Pointer

Language : C++

#include<vector>
using namespace std;

class Solution{
public: 
      vector<int> twoSum(vector<int>& numbers, int target){

      int i = 0 ;
      int j = numbers.size() - 1 ;
      int sum = 0 ;

          while ( i < j ) {
          sum = numbers[i] + numbers[j] ;

              if ( sum == target ) 
                 return {numbers[i] , numbers[j]};

               else if ( sum < target )
                 i++;

               else 
                 j--; 
               
               }
    
            return{};
      }
   };          
      
Time Complexity: O(n)
Space Complexity: O(1)



