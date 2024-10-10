#include<stdio.h>
#include<math.h>
int main(){
    int n=3;
    
    if(n==2){
        printf("not a prime");
    }
    else{
        
    for(int i=2;i<=pow(n,0.5);i++){
        if(n%i==0){
            printf("not a prime");
            break;
            
            
            
            
        }
        printf("prime");
       
    }
    
    
    }
    
    return 0;
}