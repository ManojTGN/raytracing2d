#include "grafix.h"
#include "gui/gui.h"

int main(){
    
    grafixWindow window;
    grafixEvent* event;int eventSize;

    createGrafixWindow(&window,1000,800,"RayTracing2d");
    showGrafixWindow(window);
    
    initGUI(&window);
    while(!isGrafixWindowEnded(window)){
        fillGrafixWindow(window,(grafixColor){0,0,0});

        drawGUI();

        manageGrafixEvent(window,&event,&eventSize);
        for(int i = 0; i < eventSize; i++){
            if(event[i].type == WM_DESTROY){
                endGrafixWindow(window);
            }else if(event[i].type == WM_MOUSEMOVE){
                manageHover(event[i].cursorX,event[i].cursorY);
            }
        }

        updateGrafixWindow(window);
        updateGrafixTime(window);
        tickGrafix(window,20);
    }

    return 0;
}   