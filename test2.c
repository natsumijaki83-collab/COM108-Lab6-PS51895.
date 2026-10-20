#include <stdio.h>
#include <string.h>
int main(){
    int soNA=0, soPA=0;
    char nguyenAm[6] = "ueaoi";
    char chuoi[50] = "Nguyen Thi Thu Ha";
    for(int i=0;i<strlen(chuoi);i++){
        if(strchr(nguyenAm, chuoi[i]) != NULL){
            
            soNA++;
        }else{
            soPA++;
        }
    }
    printf("So nguyen am: %d\n", soNA);
    printf("So phu am: %d\n", soPA);
    return 0;
}