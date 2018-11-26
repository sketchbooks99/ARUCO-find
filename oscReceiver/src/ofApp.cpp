#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofxSubscribeOsc(PORT, "/aruco/ids", ids);
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    ids.clear();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    for(int i=0; i<ids.size(); i++) {
        int posx = i % 10;
        int posy = i / 10;
//        ofDrawBitmapString(ofToString(ids[i]), 30+30*posx, 10+30*posy);
        this->drawMarkers(ids[i], 30+30*posx, 100+30*posy);
    }
    
    ofSetColor(255, 0, 0);
    ofDrawBitmapString(ofToString(ofGetFrameRate()), 30, 150);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------
void ofApp::drawMarkers(int markerId, int x, int y) {
    ofColor color;
    std::string str;
    switch(markerId) {
        case 64:
            color = ofColor::red;
            str = "64 red";
            break;
        case 76:
            color = ofColor::blue;
            str = "76 blue";
            break;
        case 125:
            color = ofColor::purple;
            str = "125 purple";
            break;
        case 175:
            color = ofColor::yellow;
            str = "175 yellow";
            break;
        case 177:
            color = ofColor::green;
            str = "177 green";
            break;
        case 181:
            color = ofColor::gray;
            str = "181 gray";
            break;
        case 233:
            color = ofColor::pink;
            str = "233 pink";
            break;
        case 299:
            color = ofColor::orange;
            str = "299 orange";
            break;
        case 341:
            color = ofColor::magenta;
            str = "341 magenta";
            break;
        case 428:
            color = ofColor::maroon;
            str = "428 maroon";
            break;
        case 461:
            color = ofColor::sienna;
            str = "461 sienna";
            break;
        case 477:
            color = ofColor::silver;
            str = "477 silver";
            break;
        case 618:
            color = ofColor::crimson;
            str = "618 crimson";
            break;
        case 684:
            color = ofColor::wheat;
            str = "684 wheat";
            break;
        case 717:
            color = ofColor::darkRed;
            str = "717 darkRed";
            break;
        case 760:
            color = ofColor::darkBlue;
            str = "760 darkBlue";
            break;
        case 791:
            color = ofColor::cyan;
            str = "791 cyan";
            break;
        case 838:
            color = ofColor::darkGreen;
            str = "838 darkGreen";
            break;
        case 882:
            color = ofColor::aqua;
            str = "882 aqua";
            break;
        case 908:
            color = ofColor::azure;
            str = "908 azure";
            break;
        case 977:
            color = ofColor::brown;
            str = "977 brown";
            break;
        case 982:
            color = ofColor::chocolate;
            str = "982 chocolate";
            break;
        case 985:
            color = ofColor::fireBrick;
            str = "985 fireBrick";
            break;
        case 1005:
            color = ofColor::honeyDew;
            str = "1005 honeyDew";
            break;
    }
    
    ofSetColor(color);
    ofDrawCircle(x,y,10);
    ofDrawBitmapString(str, x-10, y+100);
}
