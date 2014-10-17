#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    
    mPoint.setPosition(ofPoint(0, 0));
    mPoint.setDuration(1.0);
    mPoint.setRepeatType(LOOP_BACK_AND_FORTH);
    mPoint.setCurve(SWIFT_GOOGLE);
    mPoint.animateTo(ofPoint(ofGetWidth(),
                             ofGetHeight()));
    
    mColor.setColor(ofColor::blueSteel);
    mColor.animateTo(ofColor::darkSalmon);
    mColor.setRepeatType(LOOP_BACK_AND_FORTH);
    mColor.setCurve(BLINK_5);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    float dt = ofGetLastFrameTime();
    mPoint.update(dt);
    mColor.update(dt);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(mColor.getCurrentColor());
    ofSetColor(ofColor::chartreuse);
    
    mPoint.draw();
    
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
void ofApp::windowResized(int w, int h){
    mPoint.setPosition(ofPoint(0,0));
    mPoint.animateTo(ofPoint(ofGetWidth(),
                             ofGetHeight()));
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
