#include <stdio.h>

int main() {
    char str1[10], str2[10];
    int i, length1 = 0, length2 = 0;

    printf("Enter the LOCK 1: ");
    scanf("%s", str1);

    for(i = 0; str1[i] != '\0'; i++) {
        length1++;
    }
    printf("Length of LOCK 1 is: %d\n", length1);

    printf("Enter the LOCK 2: ");
    scanf("%s", str2);

    for(i = 0; str2[i] != '\0'; i++) {
        length2++;
    }
    printf("Length of LOCK 2: %d\n", length2);

printf("\n Here is the comparison of PASSWORDS");
    
    
    if(length1>length2){
        printf("\n LOCK 1 > LOCK 2"); }
        else if(length2>length1){
            printf("\n LOCK 2 > LOCK 1, LOCK 2 IS STRONGER THAN LOCK 1");
        }
        else{
            printf("\nEqual LOCK"); }
       return 0; 
}
