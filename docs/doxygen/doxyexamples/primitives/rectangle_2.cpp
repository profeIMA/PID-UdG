#include "WindowAddon.h"

int main(int argc, char **argv){
    Window w(201, 201); //White background color and black drawing color by default

    Point2D p1(50, 150);
    Point2D p2(150, 100);
    w.rectangle(p1, p2, BLACK); //thickness 1.0 by default

    w.waitWindowCloseButton();

    return 0;
}