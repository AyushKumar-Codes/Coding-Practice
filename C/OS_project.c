#include <stdio.h>
#include <stdlib.h>

// Define the process structure
typedef struct Process {
    int id;
    int priority;
    int burst_time;
    int remaining_time;
    int age;
} Process;

// Define the queue structure
typedef struct Queue {
    Process *processes[100]; // Assuming a maximum of 100 processes
    int front, rear;
} Queue;

// Declare three queues: ready_queue, io_queue, and completed_queue
Queue ready_queue;
Queue io_queue;
Queue completed_queue;

// Declare global variables for context switching time, maximum completed processes, and aging time unit
int context_switch_time = 2; // Context switch time penalty
int max_completed_processes = 100; // Maximum completed processes
int aging_time_unit; // Aging time unit

// Function to enqueue a process into a queue
void enqueue(Queue *queue, Process *process) {
    if (queue->rear == 99) {
        printf("Queue is full.\n");
        return;
    }
    queue->processes[++queue->rear] = process;
}

// Function to dequeue a process from a queue
Process *dequeue(Queue *queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty.\n");
        return NULL;
    }
    return queue->processes[++queue->front];
}

// Function to implement the aging mechanism
void aging_mechanism() {
    // Increase the age of processes in the ready queue
    for (int i = ready_queue.front + 1; i <= ready_queue.rear; i++) {
        Process *process = ready_queue.processes[i];
        process->age += aging_time_unit; // Increase age by the specified time unit
    }

    // Check if any process needs to be moved to a higher-priority queue
    for (int i = ready_queue.front + 1; i <= ready_queue.rear; i++) {
        Process *process = ready_queue.processes[i];
        if (process->age >= 20 && process->priority == 2) {
            // Move the process to a higher-priority queue
            process->age = 0; // Reset the age
            process->priority = 1; // Move to a higher-priority queue
            // You may also need to adjust other properties if necessary
        }
    }
}

// Function to display the contents of a queue
void display_queue(Queue *queue, const char *queue_name) {
    printf("%-10s Queue: ", queue_name);
    for (int i = queue->front + 1; i <= queue->rear; i++) {
        printf("P%d (Priority %d) ", queue->processes[i]->id, queue->processes[i]->priority);
    }
    printf("\n\n");
}

// Function to display simulation results
void display_sim_results(int total_time, int num_processes) {
    printf("\nSimulation Results\n");
    printf("Total Execution Time: %d\n", total_time);
    printf("Number of Completed Processes: %d\n", num_processes);
    printf("Average Turnaround Time: %.2f\n", (float)total_time / num_processes);
}

// Function to simulate the scheduling of processes
void simulate(int num_processes) {
    // Declare an array to store the processes
    Process processes[num_processes];

    // Input process details from the user
    for (int i = 0; i < num_processes; i++) {
        processes[i].id = i + 1;
        printf("Enter priority for Process %d: ", i + 1);
        scanf("%d", &processes[i].priority);
        printf("Enter arrival time for Process %d: ", i + 1);
        scanf("%d", &processes[i].age);
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
        processes[i].remaining_time = processes[i].burst_time;
    }

    // Initialize the queues
    ready_queue.front = ready_queue.rear = -1;
    io_queue.front = io_queue.rear = -1;
    completed_queue.front = completed_queue.rear = -1;

    int total_time = 0;
    int completed_processes = 0;

    // Input the aging time unit from the user
    printf("Enter the aging time unit: ");
    scanf("%d", &aging_time_unit);

    printf("Simulation started...\n\n");

    // Main simulation loop
    while (completed_processes < num_processes && completed_processes < max_completed_processes) {
        aging_mechanism();

        // Add processes to the ready queue based on arrival time and age
        for (int i = 0; i < num_processes; i++) {
            if (processes[i].burst_time > 0 && total_time >= processes[i].age) {
                enqueue(&ready_queue, &processes[i]);
                processes[i].age += aging_time_unit;
            }
        }

        printf("\nTime %d\n", total_time);
        display_queue(&ready_queue, "Ready");
        display_queue(&io_queue, "I/O");
        display_queue(&completed_queue, "Completed");

        // Execute a process and handle completion or I/O operations
        if (ready_queue.front != ready_queue.rear) {
            Process *current_process = dequeue(&ready_queue);
            printf("Executing Process %d (Priority %d)\n", current_process->id, current_process->priority);
            int remaining_time = current_process->remaining_time - 1;

            if (remaining_time <= 0) {
                completed_processes++;
                current_process->remaining_time = 0;
                enqueue(&completed_queue, current_process);
            } else {
                current_process->remaining_time = remaining_time;
                enqueue(&io_queue, current_process);
            }

            total_time += context_switch_time;
        } else {
            // No process to execute, increment time by 1 unit
            total_time++;
        }
    }

    // Display simulation results
    display_sim_results(total_time, num_processes);
}

int main() {
    int num_processes;
    printf("Enter the number of processes: ");
    scanf("%d", &num_processes);

    printf("Enter the context switching time: ");
    scanf("%d", &context_switch_time);

    simulate(num_processes);

    return 0;
}
