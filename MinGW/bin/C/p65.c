#include <stdio.h>

int main() {
    char marks[] = "a";
    
    if (marks <40) {
        printf("you are fail\n");
    }
    else if(marks>=40 && marks<=100){
        printf("you ar pass\n");
    }
    else{
        printf("write proper marks\n");
    }
    return 0;
}
