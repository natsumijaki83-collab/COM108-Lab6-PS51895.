#include <stdio.h>
#include <string.h>
int main(){
    char ho[50];
    char tenLot[50];
    char ten[50];
    char hoTen[150];

    printf("Nhap ho: ");
    gets(ho);

    printf("Nhap ten lot: ");
    gets(tenLot);

    printf("Nhap ten: ");
    gets(ten);

    sprintf(hoTen, "%s %s %s", ho, tenLot, ten);
    printf("Ho ten day du: %s\n", hoTen);

    return 0;
}