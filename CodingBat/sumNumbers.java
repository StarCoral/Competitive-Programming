// String-3 > sumNumbers
/* Given a string, return the sum of the numbers appearing in the string, ignoring all other characters.
 * A number is a series of 1 or more digit chars in a row. 
 * (Note: Character.isDigit(char) tests if a char is one of the chars '0', '1', .. '9'.
 * Integer.parseInt(string) converts a string to an int.)
 *
 *
 *  sumNumbers("abc123xyz") → 123
 *  sumNumbers("aa11b33") → 44
 *  sumNumbers("7 11") → 18
 *
 */

public int sumNumbers(String str) {
  char[] ch = str.toCharArray();
  int sum = 0 , num = 0;
  
  for(char c : ch)
  {
    int digit = c;
    digit -=  48;
    
    if(digit >= 0 && digit <= 9)
      num = num*10 + digit;
    else
    {
      sum += num;
      num =0;
    }
  }
  return sum+num;
  
}
