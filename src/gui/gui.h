#include "grafix.h"

extern grafixWindow* window;
extern grafixFont font;

extern grafixColor WHITE;
extern grafixColor YELLOW;

void drawButton(int x, int y, int width, int height, char* msg, int hover);
void manageHover(int x, int y);

void drawGUI();
void initGUI(grafixWindow* window);