#include "WindowAddon.h"

int main(int argc, char **argv){
    Window w(201, 201); //White background color and black drawing color by default

    Point2D p1(50, 150);
    Point2D p2(150, 100);
    w.filled_rounded_rectangle(p1, p2, 10, 10, BLACK);

    w.waitWindowCloseButton();

    return 0;
}