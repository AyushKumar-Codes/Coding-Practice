#include <stdio.h>

void m() {
    int arr[5] = {3, 3, 3, 3, 3};
    arr[2]--;
    
    // Open the file for writing
    FILE *f = fopen("myarray.bin", "wb");
    if (f == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    // Write the array to the file
    fwrite(arr, sizeof(int), 5, f);
    
    // Close the file
    fclose(f);
}

void n() {
    int arr[5];
    
    // Open the file for reading
    FILE *f = fopen("myarray.bin", "rb");
    if (f == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    // Read the array from the file
    fread(arr, sizeof(int), 5, f);
    
    // Close the file
    fclose(f);
    
    // Access the values of the array
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main() {
    m();
    n();
    return 0;
}
