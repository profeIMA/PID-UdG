#include "WindowAddon.h"

int main(int argc, char **argv){
    Window w(201, 201); //White background color and black drawing color by default

    Point2D c(101, 101);
    w.filled_circle(c, 35, BLACK);

    w.waitWindowCloseButton();

    return 0;
}