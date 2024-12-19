#include <stdio.h>

// Dinh nghia cau truc Student
struct Student {
    char name[50];        
    int age;              
    char phoneNumber[15]; 
};

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("Ten: ");
        scanf("%49s", students[i].name); 
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("So dien thoai: ");
        scanf("%14s", students[i].phoneNumber);  
    }

    
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien %d:\n", i ++);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

