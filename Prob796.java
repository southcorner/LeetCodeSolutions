class Solution {

    public boolean rotateString(String A, String B) {
        int l1 =  A.length(),l2 =  B.length();
        
        if(A.equals(B)) {
            return true;
        }
        
        if(l1 == l2) {
            int i = 0;
            
            while(i < l1) {
                if(A.charAt(i) == B.charAt(0)){
                    int j = (i+1)%l1, x=1;
                    
                    while(j!=i){
                        if(A.charAt(j) != B.charAt(x)){
                            break;
                        }
                        x++;
                        j = (j+1)%l1;
                    }
                    
                    if(j == i){
                        return true;
                    }
                }
                i++;
            }
            return false;
            
        }

        else {
            return false;
        }        
    }
}