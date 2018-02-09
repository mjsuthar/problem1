# problem1
implement power function
/**
 * @input x : Integer
 * @input n : Integer
 * @input d : Integer
 * 
 * @Output Integer
 */
int powmod(int x, int n, int d) {
       long long int rem = 1;
    int flag = 0;
    
    if(x == 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    
    if(x < 0){
        x = abs(x);
        if(n%2 != 0){
            flag = 1;
        }
    }
    
    long long int demo = x%d;
    
    while(n != 0){
        if(n%2 != 0){
            rem = (rem*demo)%d;
        }
        
        demo = demo*demo;
        demo = demo%d;
        
        n = n/2;
      
    }
    
    if(flag == 1){
        return d-(int)rem;
    }
    
    return (int)rem;

}
