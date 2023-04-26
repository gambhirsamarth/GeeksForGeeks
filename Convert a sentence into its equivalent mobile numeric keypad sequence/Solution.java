class Solution 
{ 
    String printSequence(String S){ 
        String y="";

        int i=0;

        while(i<S.length()){

            if(S.charAt(i)=='A') y+="2";

            else if(S.charAt(i)=='B') y+="22";

            else if(S.charAt(i)=='C') y+="222";

            else if(S.charAt(i)=='D') y+="3";

            else if(S.charAt(i)=='E') y+="33";

            else if(S.charAt(i)=='F') y+="333";

            else if(S.charAt(i)=='G') y+="4";

            else if(S.charAt(i)=='H') y+="44";

            else if(S.charAt(i)=='I') y+="444";

            else if(S.charAt(i)=='J') y+="5";

            else if(S.charAt(i)=='K') y+="55";

            else if(S.charAt(i)=='L') y+="555";

            else if(S.charAt(i)=='M') y+="6";
            
            else if(S.charAt(i)=='N') y+="66";

            else if(S.charAt(i)=='O') y+="666";

            else if(S.charAt(i)=='P') y+="7";

            else if(S.charAt(i)=='Q') y+="77";

            else if(S.charAt(i)=='R') y+="777";

            else if(S.charAt(i)=='S') y+="7777";

            else if(S.charAt(i)=='T') y+="8";

            else if(S.charAt(i)=='U') y+="88";

            else if(S.charAt(i)=='V') y+="888";

            else if(S.charAt(i)=='W') y+="9";

            else if(S.charAt(i)=='X') y+="99";

            else if(S.charAt(i)=='Y') y+="999";

            else if(S.charAt(i)=='Z') y+="9999";

            else y+="0";

            i++;
        }
        return y;
    }
}
