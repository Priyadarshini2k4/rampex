#include <stdio.h>
int main() {
    int month=2;
    switch(month){
        case 1:
        case 3:
        case 5:
        printf("31 days");
        break;
        case 4:
        case 6:
        printf("30 days");
        break;
        case 2:
        printf("28 or 29 days");
        break;
        default:
        printf("Invalid month");
        break;
    }
    return 0;
}