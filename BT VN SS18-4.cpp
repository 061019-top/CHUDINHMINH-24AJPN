#include <stdio.h>

// Dinh nghia cau truc Student
struct Student {
    int id;               
    char name[50];        
    int age;              
    char phoneNumber[15]; 
};

int main() {
    
    struct Student students[50];
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1; 
        printf("Nhap thong tin cho sinh vien %d:\n", students[i].id);
        printf("Ten: ");
        scanf("%49s", students[i].name); 
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("So dien thoai: ");
        scanf("%14s", students[i].phoneNumber); 
    }

    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien %d:\n", students[i].id);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

