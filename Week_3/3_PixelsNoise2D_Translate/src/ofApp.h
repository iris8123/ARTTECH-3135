#pragma once


#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void draw() override;
    void keyPressed(int key) override;

    ofPixels pixels;
    ofTexture texture;

    float scale = 0.01;
};
