#include <stdio.h>


//declare function() using data type int,float,double,char,string
// return value of function try to run this it run correctly 
// use for printing and return values 
int add(int a,int b) {
    a=5;
    b=10;
    return a+b;
    
};
int main(){
    int a,b;
    printf("%d",add(a,b));
};

// usign void data it will return nothing so give error
// use when only print something
void add(int a,int b) {
    a=5;
    b=10;
    return a+b;
    
};
int main(){
    int a,b;
    printf("%d",add(a,b));
};