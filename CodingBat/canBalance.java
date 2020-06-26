//  Array-3 > canBalance
/*  Given a non-empty array,
 *  return true if there is a place to split the array so that the sum of the numbers on one side is equal to the sum of the numbers on the other side.
 *
 *
 *  canBalance([1, 1, 1, 2, 1]) → true
 *  canBalance([2, 1, 1, 2, 1]) → false
 *  canBalance([10, 10]) → true
 *
 */
 
 
 public boolean canBalance(int[] nums) {
  int right = 0 , left = 0;
  
  for(int n : nums)
  {
    right +=n;
  }
  
  for(int i = 0 ; i < nums.length -1 ; i++)
  {
    left  += nums[i];
    right -= nums[i];
    
    if(left == right)
      return true;
  }
  return false;
}
