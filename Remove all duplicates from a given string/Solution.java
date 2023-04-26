class Solution {
    String removeDuplicates(String str) {
        // create two boolean arrays to keep track of whether a character has been seen before
        boolean smallHash[] = new boolean[26];
        boolean capsHash[] = new boolean[26];
        
        // convert the input string to a character array
        char[] chArray = str.toCharArray();
        
        // create a StringBuilder object to store the characters without duplicates
        StringBuilder sbWithOutDup = new StringBuilder();
        
        // variable to store the index of the current character in the boolean arrays
        int idxFromChar;
        
        // loop through each character in the character array
        for (char ch : chArray) {
            // if the character is a lowercase letter
            if (ch >= 'a' && ch <= 'z') {
                // calculate the index of the character in the boolean array
                idxFromChar = ch - 'a';
                // if the character has not been seen before
                if (!smallHash[idxFromChar]) {
                    // add the character to the StringBuilder object
                    sbWithOutDup.append(ch);
                    // set the corresponding entry in the boolean array to true
                    smallHash[idxFromChar] = true;
                }
            }
            // if the character is an uppercase letter
            else {
                // calculate the index of the character in the boolean array
                idxFromChar = ch - 'A';
                // if the character has not been seen before
                if (!capsHash[idxFromChar]) {
                    // add the character to the StringBuilder object
                    sbWithOutDup.append(ch);
                    // set the corresponding entry in the boolean array to true
                    capsHash[idxFromChar] = true;
                }
            }
        }
        
        // convert the StringBuilder object to a String and return it
        return new String(sbWithOutDup);
    }
}
