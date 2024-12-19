#include <stdio.h>
#include <string.h>

// Dinh nghia cau truc Student
struct Student {
    int id;              
    char name[50];        
    int age;              
    char phoneNumber[15]; 
};

int main() {
    struct Student students[50] = {
        {1, "Chu", 18, "0123456789"},
        {2, "Dinh", 19, "0123456790"},
        {3, "Minh", 20, "0123456791"},
        {4, "Hay", 21, "0123456792"},
        {5, "Cuoi", 22, "0123456793"}
    };

    int id;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Nhap ten moi: ");
            scanf("%49s", students[i].name); 
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ID: %d\n", id);
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

