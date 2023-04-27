#include "gui.h"



grafixColor WHITE = (grafixColor){255,255,255};
grafixColor YELLOW = (grafixColor){255,255,0};
grafixColor tempColor;

void drawButton(int x, int y, int width, int height, char* msg, int hover){
    if(hover) tempColor = YELLOW; else tempColor = WHITE;

    drawGrafixRect(*window,x,y,width,height,tempColor,FM_OUTLINE,1);
    drawGrafixText(*window,font,x+10,y+10,msg,tempColor);
}

void manageHover(int x, int y){
    //generate button
    if(x >= 840 && y >= 700 && x<= 940 && y<=725){
        drawButton(840,700,100,25,"generate",1);
    }
}

void drawGUI(){
    drawGrafixLine(*window,800,0,800,800,WHITE);
    drawButton(840,700,100,25,"generate",0);
}

void initGUI(grafixWindow* winw){
    GUI.window = winw;
    createGrafixFont(&GUI.font,"./asserts/jbr.ttf",16);
    
    GUI.button[1].x = 840;

}