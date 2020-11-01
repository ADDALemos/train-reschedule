//
// Created by Alexandre Lemos on 07/10/2020.
//

#ifndef TRAIN_RESCHEDULE_DISRUPTION_H
#define TRAIN_RESCHEDULE_DISRUPTION_H

#include "Instance.h"
#include<climits>
#include <random>
#include <sstream>
#include <math.h>
#include <chrono>
class Disruption {
    std::ofstream seedFile;
    bool live=true;

public:


    void blockTrain(Instance instance, double prob){
        for (int i = 0; i < ceil(prob*instance.train.size()); ++i) {//train
            //start
            //end
        }
    }

    void blockTrack(Instance instance, double prob){
        for (int i = 0; i < ceil(prob*instance.train.size()); ++i) {//train
            //section
            //start
            //end
        }
    }

    void slowDownTrain(){}

    bool isLive(){ return live;}
    void setLive(bool islive){live=islive;}
    /**
   * Generate a seed based on the clock
   * @return seed
   */
    unsigned int seedHandler() {
        unsigned int t = std::chrono::steady_clock::now().time_since_epoch().count();
        seedFile.open("../log/seed.txt", std::ios_base::app);
        seedFile << t << std::endl;
        seedFile.close();
        return t;
    }



};

#endif //TRAIN_RESCHEDULE_DISRUPTION_H
