#include "WindowAddon.h"

int main(int argc, char **argv){
    Window w(201, 201); //White background color and black drawing color by default
	
	Point2D c(101, 101);
    w.text(c, "Your text goes here", TEXT_ALIGN_CENTER); //Using w drawing parameters (in this case, the default font)

    w.waitWindowCloseButton();

    return 0;
}