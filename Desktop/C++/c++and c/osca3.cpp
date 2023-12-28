//#include <stdio.h>
//#include <stdlib.h>
//
//// Define process structure
//struct Process {
//    int id;
//    int arrival_time;
//};
//
//// Function to simulate mode switching
//void switchToKernelMode() {
//    // Set the mode bit to 0 (kernel mode)
//    // Implement any necessary hardware-level switching here
//    printf("Switching to Kernel Mode\n");
//}
//
//void switchToUserMode() {
//    // Set the mode bit to 1 (user mode)
//    // Implement any necessary hardware-level switching here
//    printf("Switching to User Mode\n");
//}
//
//// Function to simulate user process
//void binarySearch(struct Process processes[], int n, int target) {
//    switchToUserMode();
//    // Implement Binary Search algorithm here
//    // ...
//    switchToKernelMode();
//}
//
//// Function to simulate privileged process
//void mergeSort(struct Process processes[], int n) {
//    switchToKernelMode();
//    // Implement Merge Sort algorithm here
//    // ...
//    switchToUserMode();
//}
//
//int main() {
//    int n = 8; // Number of processes
//
//    struct Process processes[n] = {
//        {1, 59},
//        {2, 91},
//        {3, 23},
//        {4, 101},
//        {5, 35},
//        {6, 79},
//        {7, 68},
//        {8, 11}
//    };
//
//    int target = 6; // Target process for binary search
//
//    // Implement code for mode switching and process execution here
//    // ...
//
//    return 0;
//}


//#include <stdio.h>
//
//// Define a process struct
//struct Process {
//    int id;
//    int arrival_time;
//    int mode;
//};
//
//// Define functions to simulate user and privileged processes
//void userProcess(struct Process process);
//void privilegedProcess(struct Process processes[], int num_processes);
//
//int main() {
//    // Define an array of processes
//    struct Process processes[] = {
//        {1, 59, 1},
//        {2, 91, 1},
//        {3, 23, 1},
//        {4, 101, 1},
//        {5, 35, 1},
//        {6, 79, 1},
//        {7, 68, 1},
//        {8, 11, 1}
//    };
//    
//    // Simulate the behavior of the operating system
//    for (int i = 0; i < sizeof(processes) / sizeof(processes[0]); i++) {
//        if (processes[i].mode == 1) {
//            // Execute user process
//            userProcess(processes[i]);
//        } else {
//            // Execute privileged process
//            privilegedProcess(processes, sizeof(processes) / sizeof(processes[0]));
//        }
//    }
//    
//    return 0;
//}
//
//void userProcess(struct Process process) {
//    // Simulate user mode behavior, e.g., binary search
//    printf("User Process %d: Searching for P6\n", process.id);
//    // Implement binary search logic here
//    // Switch to kernel mode when necessary
//}
//
//
//void privilegedProcess(struct Process processes[], int num_processes) {
//    // Simulate kernel mode behavior, e.g., sorting processes by arrival time
//    printf("Kernel Mode: Sorting processes by arrival time\n");
//    // Implement sorting logic here
//}




#include <stdio.h>
#include <stdlib.h>

// Enumeration for process mode
enum Mode {
    KERNEL_MODE,  // 0 for Kernel Mode
    USER_MODE     // 1 for User Mode
};

// Structure to represent a process
struct Process {
    int id;
    int arrivalTime;
    enum Mode mode;
};

// Function to simulate kernel mode (privileged process execution)
void kernelMode(struct Process processes[], int n) {
    printf("Kernel Mode: Sorting processes by arrival time\n");
    // Implement merge sort (privileged operation) to sort the processes
    // This is where you can implement the sorting algorithm
    // For simplicity, we'll just print the sorted order here
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (processes[i].arrivalTime > processes[j].arrivalTime) {
                // Swap the processes
                struct Process temp = processes[i];
                processes[i] = processes[j];
                processes[j] = temp;
            }
        }
    }
    // Print the sorted order
    printf("Sorted Process Order (by arrival time):\n");
    for (int i = 0; i < n; i++) {
        printf("P%d ", processes[i].id);
    }
    printf("\n");
}

// Function to simulate user mode (searching for Process P6)
void userMode(struct Process processes[], int n) {
    printf("User Mode: Searching for Process P6\n");
    int searchId = 6; // Process P6
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (processes[i].id == searchId) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Process P6 found in the list.\n");
    } else {
        printf("Process P6 not found in the list.\n");
    }
}

int main() {
    // Define the processes with their arrival times and modes
    struct Process processes[] = {
        {1, 59, KERNEL_MODE},
        {2, 91, KERNEL_MODE},
        {3, 23, USER_MODE},
        {4, 101, KERNEL_MODE},
        {5, 35, USER_MODE},
        {6, 79, KERNEL_MODE},
        {7, 68, KERNEL_MODE},
        {8, 11, USER_MODE}
    };
    int n = sizeof(processes) / sizeof(processes[0]);

    // Simulate dual-mode operation
    int modeBit = KERNEL_MODE; // Start in Kernel Mode

    // Check the mode bit and perform operations accordingly
    for (int i = 0; i < n; i++) {
        if (processes[i].mode == modeBit) {
            kernelMode(processes, n); // Privileged operation (sorting)
        } else {
            userMode(processes, n); // User operation (searching)
        }
    }

    // The above code simulates the switching between user and kernel modes based on the process mode.

    return 0;
}



