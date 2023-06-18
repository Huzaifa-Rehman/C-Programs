#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // initialize graphics window

    for (int i = 0; i <= 420; i = i + 10) {
        // clear screen
        cleardevice();
        // draw circle
        circle(i, 250, 50);
        // delay for animation
        delay(50);
    }

    getch();
    closegraph(); // close graphics window
    return 0;
}

