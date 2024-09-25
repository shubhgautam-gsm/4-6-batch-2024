#include <stdio.h>
#include <string.h>

int main() { 
    char chor[20];
    char chorname[20]="geet";
    char name[15]="mitesh";
    char mitesh[2][20] = {"xyzaxiskotak", "123abcpqr"};

   //local
   {
        char name[15]="hitesh";
        char hitesh[2][20] = {"xyzaxis", "123abc"};
        printf("hu %s %s mari detail \n",name, hitesh[0]);
    }
    {
        char name[15]="hiren";
        char hiren[2][20] = {"xyz123", "passwordtod"};
          printf("hu %s %s mari detail \n",name, hiren[1]);
    }
    
    
    strcpy(chor, mitesh[0]);
    printf("hu %s mai aa ni chori kari %s password \n",chorname,chor);

    return 0;
}
