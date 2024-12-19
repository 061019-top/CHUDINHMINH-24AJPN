#include <stdio.h>

// Dinh nghia cau truc Student
struct Student {
    char name[50];        
    int age;              
    char phoneNumber[15];  
};

int main() {
    struct Student student1;

    printf("Nhap ten: ");
    scanf("%49s", student1.name); 
    printf("Nhap tuoi: ");
    scanf("%d", &student1.age);
    printf("Nhap so dien thoai: ");
    scanf("%14s", student1.phoneNumber); 
    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s\n", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("So dien thoai: %s\n", student1.phoneNumber);

    return 0;
}

