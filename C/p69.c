#include <stdio.h>

int main() {
    int usr =112 ;
    
    if (usr >=1 && usr<=10) {
        printf("you are loyal \n");
    }
    else if(usr>=11 && usr<=20 ){
        printf("you ar charming\n");
    }
    else if(usr>=21 && usr<=30) {
        printf("great leader \n");
    }
    else{
        printf("you are unique personality");
    }
    return 0;
}
