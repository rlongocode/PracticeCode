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
public class Main {

    public static void main(String[] args) {
        
        System.out.println(getMinSteps(6));
        
    }
    
    static int getMinSteps(int n){
        
        if(n==1){
            return 0;
        }
        
        int result = getMinSteps(n - 1);
        
        if(n%2 == 0){
            result = Math.min(result,getMinSteps(n/2));
        }
            
        if(n%3 == 0){
            result = Math.min(result,getMinSteps(n/3));
        }
        
        return result + 1;
        
    }
    
}

/*

Problem: Cant process large numbers/

*/