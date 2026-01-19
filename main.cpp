#include <graphics.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

// Window dimensions
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

/**
 * Draws the array elements as bars on the screen.
 * @param arr The array to visualize
 * @param n Size of the array
 * @param comp1 Index of the first element being compared (highlighted)
 * @param comp2 Index of the second element being compared (highlighted)
 */
void drawArray(int arr[], int n, int comp1 = -1, int comp2 = -1) {
    cleardevice(); // Clear the screen

    int barWidth = SCREEN_WIDTH / n;

    for (int i = 0; i < n; i++) {
        // Default color is white
        int color = WHITE;

        // Highlight the elements currently being compared/swapped in red
        if (i == comp1 || i == comp2) {
            color = RED;
        }

        setcolor(color);
        setfillstyle(SOLID_FILL, color);

        // Draw bar: (left, top, right, bottom)
        // We subtract the value from SCREEN_HEIGHT to draw from bottom up
        bar(i * barWidth, SCREEN_HEIGHT - arr[i], (i + 1) * barWidth - 2, SCREEN_HEIGHT);
    }
}

/**
 * Implementation of Bubble Sort with visualization
 */
void bubbleSortVisualized(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            // Visualize current comparison
            drawArray(arr, n, j, j + 1);
            delay(10); // Pause for 10ms to make animation visible

            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Visualize after swap
                drawArray(arr, n, j, j + 1);
                delay(10);
            }
        }
    }
    // Final draw to show sorted state in white
    drawArray(arr, n);
}

int main() {
    // Initialize the graphics system
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Dataset size
    const int n = 100;
    int arr[n];

    // Seed for random values
    srand(time(0));

    // Initialize array with random heights (up to screen height)
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (SCREEN_HEIGHT - 50) + 10;
    }

    outtextxy(20, 20, (char*)"Press any key to start Bubble Sort Visualization...");
    getch();

    bubbleSortVisualized(arr, n);

    outtextxy(20, 20, (char*)"Sorting Complete! Press any key to exit.");
    getch();
    closegraph();

    return 0;
}
