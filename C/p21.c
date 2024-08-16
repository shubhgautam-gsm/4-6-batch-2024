#include <stdio.h>

int main()
{
   
    char hp[10];
    char lenovo[10];
    char dell[10];
    
    printf("write mode for hp ");
    scanf("%s", &hp);
    
    printf("write mode for lenovo ");
    scanf("%s", &lenovo);

    printf("write mode for dell ");
    scanf("%s", &dell);
    
    printf("Screen mode of lenovo is: %s\n",lenovo);    
    printf("Screen mode of dell is: %s\n",dell);
    return 0;
}

 /* alternate
    printf("write mode for hp ");
    scanf("%s", &hp);
    printf("Screen mode of hp is: %s\n",hp);

    printf("write mode for lenovo ");
    scanf("%s", &lenovo);
    printf("Screen mode of lenovo is: %s\n",lenovo); 

    printf("write mode for dell ");
    scanf("%s", &dell);
    printf("Screen mode of dell is: %s\n",dell);
    */
