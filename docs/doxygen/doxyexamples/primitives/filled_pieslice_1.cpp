#include "WindowAddon.h"

int main(int argc, char **argv){
    Window w(201, 201); //White background color and black drawing color by default
	
	w.filled_pieslice(101, 75, 50, 60, 60, BLACK);

    w.waitWindowCloseButton();

    return 0;
}