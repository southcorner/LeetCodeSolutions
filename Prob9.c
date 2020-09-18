

bool isPalindrome(int x){
    long int rev = 0;
    int num = x;
    if(x < 0){
        return false;
    }
    while(x != 0) {
        if(rev*10 > INT_MAX){
            return false;
        }
        rev = rev*10 + x%10;        
        x/=10;
    }
    if(num == rev){
        return true;
    }
        return false;    
}