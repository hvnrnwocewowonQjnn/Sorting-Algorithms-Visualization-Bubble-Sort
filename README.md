# Bubble Sort Algorithm Visualizer

A real-time graphical application built in **C++** using the **graphics.h** library. This project animates the Bubble Sort algorithm, converting abstract logic into a clear visual experience through dynamic bar charts and color transitions.



## 🚀 Features

* **Real-Time Animation:** Watch the sorting process as it happens with adjustable delay timings.
* **Visual Feedback:** Uses color transitions (Red/White) to highlight elements currently being compared or swapped.
* **Dynamic Scaling:** Automatically adjusts bar widths based on the dataset size to utilize the full screen width.
* **Educational Tool:** Designed to help students and developers visualize $O(n^2)$ time complexity and the "bubbling" nature of the algorithm.

## 🛠️ Requirements

To run this project, you need a C++ compiler and the `graphics.h` library (BGI).

### For Modern Systems (Windows):
Since `graphics.h` is deprecated, it is recommended to use the **WinBGIm** library:
1. Download `graphics.h` and `winbgim.h`.
2. Link the `libbgi.a` library in your compiler settings.
3. Add the following linker flags: 
   `-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32`

## 📂 Project Structure

* `main.cpp`: Contains the core logic for the Bubble Sort algorithm and the rendering loop.
* `drawArray()`: Handles the graphical mapping of array values to vertical bars.
* `bubbleSortVisualized()`: The main algorithm logic integrated with visual updates.

## 🖥️ Usage

1. **Compile and Run:** Launch the executable.
2. **Start:** Press any key on the graphics window to initiate the shuffle and sort.
3. **Observe:** * **White Bars:** Static data.
   * **Red Bars:** Current elements being compared ($arr[j]$ and $arr[j+1]$).
4. **Completion:** Once sorted, the bars will stabilize, and the program will wait for a keypress to exit.

## 📈 Algorithmic Insight

Bubble Sort works by repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order. 

**Complexity:**
* **Worst Case:** $O(n^2)$
* **Best Case (Optimized):** $O(n)$
* **Space Complexity:** $O(1)$

## 🔗 Link to Resume
This project demonstrates proficiency in:
* Algorithmic efficiency and data ordering.
* Graphical UI development in C++.
* Real-world data organization problem-solving.
