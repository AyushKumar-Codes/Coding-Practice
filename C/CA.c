#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define FILENAME "customers.dat"

struct customer {
    int id;
    char name[50];
    char mobile[20];
    int bmi;
    char address[100];
    int slot;
    char doj[20];
};
void display_slots() {
FILE *fp;
struct customer c;
int slots[5] = {15,15,15,15,15};
int i;
fp = fopen(FILENAME, "rb");
printf("\033[1;36m");
while (fread(&c, sizeof(c), 1, fp)) {
    if (c.slot >= 1 && c.slot <= 5) {
        slots[c.slot-1]--;
    }
}
printf("\t\t\t\t\t   _____________________________________\n");
printf("\t\t\t\t\t   Slot\tTiming\t\tAvailable\n");
printf("\t\t\t\t\t   _____________________________________\n");
for (i = 0; i < 5; i++) {
    printf("\t\t\t\t\t   %d\t%d-%d\t\t%d\n", i+1, i*2+8, (i+1)*2+8, slots[i]);
printf("\t\t\t\t\t   ----------------------------------\n");
}
fclose(fp);
}
int check_slots(int n) {
if ((n<1)||(n>5)){printf("\t\t\t\t\t   Give input between 1-5\n");return 1;}
FILE *fp;
struct customer c;
int slots[5] = {15,15,15,15,15};
int i;
fp = fopen(FILENAME, "rb");
printf("\033[1;36m");
while (fread(&c, sizeof(c), 1, fp)) {
    if (c.slot >= 1 && c.slot <= 5) {
        slots[c.slot-1]--;
    }
}
fclose(fp);
if (slots[n-1]<=0){
    printf("\n\t\t\t\t\t          Sorry this time slot is not free\n");
    return 1;
}
return 0;
}
void add_customer() {
    FILE *fp;
    struct customer c;

    fp = fopen(FILENAME, "ab");
    printf("\033[1;33m");
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\t\t\t\t\t   Enter customer ID: ");
    scanf("%d", &c.id);
    fflush(stdin);
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\t\t\t\t\t   Enter customer name: ");
    fgets(c.name,50,stdin);
    int len=strlen(c.name);
    c.name[len-1]='\0';
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\t\t\t\t\t   Enter customer mobile number: ");
    scanf("%s", c.mobile);
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\t\t\t\t\t   Enter Body Mass Index (BMI) of customer: ");
    scanf("%d",&c.bmi);
    fflush(stdin);
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\t\t\t\t\t   Enter Address of Customer: ");
    fgets(c.address,100,stdin);
    len=strlen(c.address);
    c.address[len-1]='\0';
    fflush(stdin);
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\t\t\t\t\t   Enter date of Joining of customer: ");
    fgets(c.doj,100,stdin);
     len=strlen(c.doj);
    c.doj[len-1]='\0';
    choose:
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\t\t\t\t\t\t      -----Slot Selection------ \n");
    printf("\t\t\t\t\t  _________________________________________________");
    printf("\n\n\t\t\t\t\t   Press 1 for checking the available slots or 0 to continue..");
    int s;
    scanf("%d",&s);
    if (s==1){display_slots();
    printf("\t\t\t\t\t   Enter slot number (1-5): ");
    scanf("%d", &c.slot);
    if(check_slots(c.slot)==1){goto choose;}
    }
    else if(s==0){
    printf("\t\t\t\t\t   Enter slot number (1-5): ");
    scanf("%d", &c.slot);
    if(check_slots(c.slot)==1){goto choose;}}
    else{printf("\n\t\t\t\t\t\t\t   Give valid input\n");
    goto choose;}
    fwrite(&c, sizeof(c), 1, fp);
    printf("\n\t\t\t\t\t      Customer added successfully. ^_^\n");
    printf("\n\t\t\t\t\t   Press a key to go back to Main Menu\n");
    getch();
    fclose(fp);
}

void delete_customer() {
    FILE *fp, *temp;
    struct customer c;
    int id, found = 0;

    fp = fopen(FILENAME, "rb");
    temp = fopen("temp.bin", "wb");
    printf("\033[1;34m");
    printf("\t\t\t\t\t  ___________________________________");
    printf("\n\t\t\t\t\t   Enter customer ID to delete: ");
    scanf("%d", &id);

    while (fread(&c, sizeof(c), 1, fp)) {
        if (c.id != id) {
            fwrite(&c, sizeof(c), 1, temp);
        } else {
            found = 1;
        }
    }

    if (found) {
        printf("\n\t\t\t\t\t   Customer deleted successfully. ^_^\n");
    } else {
        printf("\n\t\t\t\t\t   Customer not found. -_-\n");
    }

    fclose(fp);
    fclose(temp);

    remove(FILENAME);
    rename("temp.bin", FILENAME);
    printf("\n\n\t\t\t\t\t  Press a key to go back to Main Menu\n");
    getch();
}

void display_customers() {
    FILE *fp;
    struct customer c;
    int count=0;
    fp = fopen(FILENAME, "rb");
    printf("\033[1;30m");
    printf("____________________________________________________________________________________________________________________\n");
    printf("%-3s %-5s %-20s %-15s %-10s %-30s %-20s %-10s\n"," ","ID", "Name", "Mobile", "BMI", "Address", "Date of Joining", "Slot");
    printf("____________________________________________________________________________________________________________________\n");
    while (fread(&c, sizeof(c), 1, fp)) {
    printf("\n%-3s %-5d %-20s %-15s %-10d %-30s %-20s %-10d\n"," ",c.id, c.name, c.mobile, c.bmi, c.address, c.doj, c.slot);
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    count++;
    }
    if(count==0){
    printf("\n\n\t\t\t\t\t   No Record Added Yet -_-\n");}
    fclose(fp);
    printf("\n\n\t\t\t\t\t   Press a key to go back to Main Menu\n");
    getch();
}

void search_customer() {
    FILE *fp;
    struct customer c;
    int choice;
    char search[50];
    printf("\033[1;31m");
    fp = fopen(FILENAME, "rb");
    choose:
    printf("\t\t\t\t\t   _____________________________\n");
    printf("\t\t\t\t\t   1. Search by ID\n");
    printf("\t\t\t\t\t   ----------------------------\n");
    printf("\t\t\t\t\t   2. Search by name\n");
    printf("\t\t\t\t\t   ----------------------------\n");
    printf("\t\t\t\t\t   3. Search by mobile number\n");
    printf("\t\t\t\t\t   _____________________________\n");
    printf("\t\t\t\t\t   Enter your choice: ");
    scanf("%d", &choice);
    printf("\t\t\t\t\t   _____________________________\n");
    int record_found=0;
    switch (choice) {
        case 1:
            printf("\t\t\t\t\t   Enter customer ID: ");
            int count=0;
            scanf("%d", &choice);
                     printf("______________________________________________________________________________________________________________________\n");
                    printf("%-3s %-5s %-20s %-15s %-10s %-30s %-20s %-10s\n"," ", "ID", "Name", "Mobile", "BMI", "Address", "Date of Joining", "Slot");
                     printf("______________________________________________________________________________________________________________________\n\n");
            while (fread(&c, sizeof(c), 1, fp)) {
                if (c.id == choice) {
                    printf("%-3s %-5d %-20s %-15s %-10d %-30s %-20s %-10d\n"," ", c.id, c.name, c.mobile, c.bmi, c.address, c.doj, c.slot);
                    printf("---------------------------------------------------------------------------------------------------------------------\n");
                count++;
                }
            }

            if (count==0) {
                printf("\t\t\t\t\t   Customer not found. -_-\n");
            }

            break;

        case 2:
            printf("\t\t\t\t\t   Enter customer name: ");
            fflush(stdin);
            fgets(search,50,stdin);
            int len = strlen(search);
            search[len-1]='\0';
            record_found=0;
                     printf("______________________________________________________________________________________________________________________\n");
                    printf("%-3s %-5s %-20s %-15s %-10s %-30s %-20s %-10s\n"," ", "ID", "Name", "Mobile", "BMI", "Address", "Date of Joining", "Slot");
                     printf("______________________________________________________________________________________________________________________\n\n");
            while (fread(&c, sizeof(c), 1, fp)) {
                if (strcmp(c.name, search) == 0) {
                    printf("%-3s %-5d %-20s %-15s %-10d %-30s %-20s %-10d\n"," ", c.id, c.name, c.mobile, c.bmi, c.address, c.doj, c.slot);
                    printf("---------------------------------------------------------------------------------------------------------------------\n");
                    record_found=1;
                }
            }

              if (record_found==0) {
            printf("\n\t\t\t\t\t   No customers found. -_-\n");
        }
        record_found=0;
        break;

    case 3:
        printf("\t\t\t\t\t   Enter customer mobile number: ");
        scanf("%s", search);
        record_found=0;
                printf("______________________________________________________________________________________________________________________\n");
                printf("%-3s %-5s %-20s %-15s %-10s %-30s %-20s %-10s\n"," ", "ID", "Name", "Mobile", "BMI", "Address", "Date of Joining", "Slot");
                printf("______________________________________________________________________________________________________________________\n\n");
        while (fread(&c, sizeof(c), 1, fp)) {
            if (strcmp(c.mobile, search) == 0) {
                printf("%-3s %-5d %-20s %-15s %-10d %-30s %-20s %-10d\n"," ", c.id, c.name, c.mobile, c.bmi, c.address, c.doj, c.slot);
                printf("---------------------------------------------------------------------------------------------------------------------\n");
                record_found=1;
            }
        }

        if (record_found==0) {
            printf("\n\n\t\t\t\t\t   Customer not found. -_-\n");
        }

        break;

    default:
        printf("\n\t\t\t\t\t   Invalid choice.\n");
        goto choose;
        break;

}
    printf("\n\n\t\t\t\t\t   Press a key to go back to Main Menu\n");
    getch();

fclose(fp);
}

int main() {
int choice;
    system("color 6f");
do {
    printf("\033[3;35m");
    printf("\t\t\t\t\t   ======================================");
    printf("\n\t\t\t\t\t  || FITNESS CLUB MANAGEMENT SYSTEM    ||\n");
    printf("\t\t\t\t\t   ======================================");
    printf("\n\t\t\t\t\t   1. Add customer\n");
    printf("\t\t\t\t\t   ----------------------------------\n");
    printf("\t\t\t\t\t   2. Delete customer\n");
    printf("\t\t\t\t\t   ----------------------------------\n");
    printf("\t\t\t\t\t   3. Display all customers\n");
    printf("\t\t\t\t\t   ----------------------------------\n");
    printf("\t\t\t\t\t   4. Search customer\n");
    printf("\t\t\t\t\t   ----------------------------------\n");
    printf("\t\t\t\t\t   5. Display slot timings\n");
    printf("\t\t\t\t\t   ----------------------------------\n");
    printf("\t\t\t\t\t   0. Exit\n");
    printf("\t\t\t\t\t   ----------------------------------\n");
    printf("\t\t\t\t\t   Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add_customer();
            break;

        case 2:
            delete_customer();
            break;

        case 3:
            display_customers();
            break;

        case 4:
            search_customer();
            break;

        case 5:
            display_slots();
            printf("\n\n\t\t\t\t\t   Press a key to go back to Main Menu\n");
            getch();
            break;

        case 0:
            printf("\t\t\t\t\t   Exiting program... ^_^\n");
            break;

        default:
            printf("\t\t\t\t\t   ----------------------------------\n");
            printf("\t\t\t\t\t\t    Invalid choice. -_-\n");
            break;
    }
} while (choice != 0);

return 0;
}
