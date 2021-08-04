
/*
    Minimum Steps to Minimize n to 1
    
    Given an integer n, return the minimum steps to minimize n to 1

    Available steps are: 
    - Decrement n by 1
    - If n is divisible by 2, then divide n by 2
    - If n is divisible by 3, then divide n by 3

    Examples:
    10 => 3 steps (10 => 9 => 3 => 1)
    15 => 4 steps (15 => 5 => 4 => 2 => 1)
    6  => 2 steps (6  => 3 => 1) or (6 => 2 => 1) 
 */

/**
 * @author Ricardo Longo
 */
public class MainMemoization{

    public static void main(String[] args) {
        
        int n = 2000;
        System.out.println(getMinStepsMemoization(n, new int[n+1]));
        
    }
    
    static int getMinStepsMemoization(int n, int [] memo){
        
        if(memo[n] != 0){
            return memo[n];
        }
        
        
        if(n==1){
            return 0;
        }
        
        int result = getMinStepsMemoization(n - 1,memo);
        
        if(n%2 == 0){
            result = Math.min(result,getMinStepsMemoization(n/2,memo));
        }
            
        if(n%3 == 0){
            result = Math.min(result,getMinStepsMemoization(n/3,memo));
        }
        
        memo[n] = result + 1;
        return memo[n];
        
    }
    
}

/*

Problem: Memoization uses recursion so we can have an stackoverflow. 

*/