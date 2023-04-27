#include "grafix.h"

typedef struct ButtonGUI{
    int x;
    int y;
    int width;
    int height;
    char* text;
    int isHover;
}Button;

extern struct ManageGUI{
    grafixWindow* window;
    grafixFont font;
    
    Button button[4];
}GUI;

extern grafixWindow* window;
extern grafixFont font;

extern grafixColor WHITE;
extern grafixColor YELLOW;

void drawButton(int x, int y, int width, int height, char* msg, int hover);
void manageHover(int x, int y);

void drawGUI();
void initGUI(grafixWindow* window);