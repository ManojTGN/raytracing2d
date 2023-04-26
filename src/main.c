#include "grafix.h"

int main(){
    
    grafixWindow window;
    grafixEvent* event;int eventSize;

    createGrafixWindow(&window,1000,800,"RayTracing2d");
    showGrafixWindow(window);
    
    while(!isGrafixWindowEnded(window)){
        
        fillGrafixWindow(window,(grafixColor){0,0,0});

        manageGrafixEvent(window,&event,&eventSize);
        for(int i = 0; i < eventSize; i++){
            if(event[i].type == WM_DESTROY){
                endGrafixWindow(window);
            }
        }

        updateGrafixWindow(window);
        updateGrafixTime(window);
        tickGrafix(window,20);
    }

    return 0;
}   