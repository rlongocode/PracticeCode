
import java.util.Arrays;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ricar
 */

public class MainTabulation{

    public static void main(String[] args) {
        
        int n = 2000;
        System.out.println(getMinStepsTabulation(n));
        
    }
    
    static int getMinStepsTabulation(int n){
        int [] results = new int[n + 1];
        Arrays.fill(results, n);
        
        results[1] = 0;
        
        for(int i = 1; i < n; i++){
            results[i+1] = Math.min(results[i+1], results[i]+1);
            if ( i * 2 <= n){
                results[i*2] = Math.min(results[i] + 1, results[i * 2]);
            }
            if ( i * 3 <= n){
                results[i*3] = Math.min(results[i] + 1, results[i * 3]);
            }
        }
        return results[n];
    }
}
    
