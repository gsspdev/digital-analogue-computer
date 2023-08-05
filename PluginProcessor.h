// Path: PluginProcessor.h

#include <cstdio>
#import <stdio.h>
#import <stdlib.h>

class IOPort(bool isOn, double volts) {
    public:
    bool isActive() {
        return active;
    };
    float getOutput() {
        return outAmp;
    };
    

    private:
    bool active = &isOn;
    double initAmp = &volts;
    double outAmp;

    fn attenuate(double initAmp) {
        double coeff = 0.5;
        return amp * coeff;
    };
    
    if (active) {
        outAmp = attenuate(initAmp);
    } else {
        outAmp = 0;
    };
    

};

int main() {
    IOPort port1(bool true, double 4.6);
    IOPort port2(bool false, double 5.4);
    IOPort port3(bool true, double 7.2);
    IOPort port4(bool false, 10);

    printf("Port 1 is outputting %f\n", port1.getOutput());
    printf("Port 2 is outputting %f\n", port2.getOutput());
    printf("Port 3 is outputting %f\n", port3.getOutput());
    printf("Port 4 is outputting %f\n", port4.getOutput());

    printf("Port 1 is outputting %f\n", port1.getOutput());
    printf("Port 2 is outputting %f\n", port2.getOutput());
    printf("Port 3 is outputting %f\n", port3.getOutput());
    printf("Port 4 is outputting %f\n", port4.getOutput());
}