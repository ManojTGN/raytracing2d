#include "grafix.h"
#include "light.h"

#define WIDTH 800
#define HEIGHT 800

int main(){
    
    grafixWindow window;
    grafixEvent* event;int eventSize;

    createGrafixWindow(&window,WIDTH,HEIGHT,"RayTracing2d");
    showGrafixWindow(window);
    
    Light light = { WIDTH/2,HEIGHT/2,800,(grafixColor){255,255,255},0};
    initLight(&light);

    while(!isGrafixWindowEnded(window)){
        fillGrafixWindow(window,(grafixColor){0,0,0});

        drawLight(window,light);

        manageGrafixEvent(window,&event,&eventSize);
        for(int i = 0; i < eventSize; i++){
            if(event[i].type == WM_DESTROY){
                endGrafixWindow(window);
            }
        }

        printf("%d\r",getGrafixFPS(window));
        updateGrafixWindow(window);
        updateGrafixTime(window);
        tickGrafix(window,10);
    }

    return 0;
}   