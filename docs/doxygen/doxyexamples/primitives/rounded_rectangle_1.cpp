#include "WindowAddon.h"

int main(int argc, char **argv){
    Window w(201, 201); //White background color and black drawing color by default

    w.rounded_rectangle(50, 150, 150, 100, 10, 10, BLACK); //thickness 1.0 by default

    w.waitWindowCloseButton();

    return 0;
}