#include "Tracker.h"

 
 
extern "C" {
    Tracker* Tracker_new(){ return new Tracker(15); }
    void loop(Tracker* tracker){ tracker->loop();}
    int getUsersCount(Tracker* tracker){ return tracker->getUsersCount();}
    bool isUserTracked(Tracker* tracker,int i){ return tracker->isUserTracked(i);}
	float getUserSkeletonHeadConf(Tracker* tracker,int i){ return tracker->getUserSkeletonHeadConf(i);}
	float getUserSkeletonHeadX(Tracker* tracker,int i){ return tracker->getUserSkeletonHeadX(i);}
	float getUserSkeletonHeadY(Tracker* tracker,int i){ return tracker->getUserSkeletonHeadY(i);}
	float getUserSkeletonHeadZ(Tracker* tracker,int i){ return tracker->getUserSkeletonHeadZ(i);}
	
	float getUserSkeletonNeckX(Tracker* tracker,int i){ return tracker->getUserSkeletonNeckX(i);}
	float getUserSkeletonNeckY(Tracker* tracker,int i){ return tracker->getUserSkeletonNeckY(i);}
	float getUserSkeletonNeckZ(Tracker* tracker,int i){ return tracker->getUserSkeletonNeckZ(i);}
	
	float getUserSkeletonL_ShX(Tracker* tracker,int i){ return tracker->getUserSkeletonL_ShX(i);}
	float getUserSkeletonL_ShY(Tracker* tracker,int i){ return tracker->getUserSkeletonL_ShY(i);}
	float getUserSkeletonL_ShZ(Tracker* tracker,int i){ return tracker->getUserSkeletonL_ShZ(i);}
	
	float getUserSkeletonR_ShX(Tracker* tracker,int i){ return tracker->getUserSkeletonR_ShX(i);}
	float getUserSkeletonR_ShY(Tracker* tracker,int i){ return tracker->getUserSkeletonR_ShY(i);}
	float getUserSkeletonR_ShZ(Tracker* tracker,int i){ return tracker->getUserSkeletonR_ShZ(i);}
	
	float getUserSkeletonL_ElbowX(Tracker* tracker,int i){ return tracker->getUserSkeletonL_ElbowX(i);}
	float getUserSkeletonL_ElbowY(Tracker* tracker,int i){ return tracker->getUserSkeletonL_ElbowY(i);}
	float getUserSkeletonL_ElbowZ(Tracker* tracker,int i){ return tracker->getUserSkeletonL_ElbowZ(i);}
	
	float getUserSkeletonR_ElbowX(Tracker* tracker,int i){ return tracker->getUserSkeletonR_ElbowX(i);}
	float getUserSkeletonR_ElbowY(Tracker* tracker,int i){ return tracker->getUserSkeletonR_ElbowY(i);}
	float getUserSkeletonR_ElbowZ(Tracker* tracker,int i){ return tracker->getUserSkeletonR_ElbowZ(i);}
	
	float getUserSkeletonL_HandX(Tracker* tracker,int i){ return tracker->getUserSkeletonL_HandX(i);}
	float getUserSkeletonL_HandY(Tracker* tracker,int i){ return tracker->getUserSkeletonL_HandY(i);}
	float getUserSkeletonL_HandZ(Tracker* tracker,int i){ return tracker->getUserSkeletonL_HandZ(i);}
	
	float getUserSkeletonR_HandX(Tracker* tracker,int i){ return tracker->getUserSkeletonR_HandX(i);}
	float getUserSkeletonR_HandY(Tracker* tracker,int i){ return tracker->getUserSkeletonR_HandY(i);}
	float getUserSkeletonR_HandZ(Tracker* tracker,int i){ return tracker->getUserSkeletonR_HandZ(i);}
	
	float getUserSkeletonTorsoX(Tracker* tracker,int i){ return tracker->getUserSkeletonTorsoX(i);}
	float getUserSkeletonTorsoY(Tracker* tracker,int i){ return tracker->getUserSkeletonTorsoY(i);} 
	float getUserSkeletonTorsoZ(Tracker* tracker,int i){ return tracker->getUserSkeletonTorsoZ(i);}
	
	float getUserSkeletonL_HipX(Tracker* tracker,int i){ return tracker->getUserSkeletonL_HipX(i);}
	float getUserSkeletonL_HipY(Tracker* tracker,int i){ return tracker->getUserSkeletonL_HipY(i);}
	float getUserSkeletonL_HipZ(Tracker* tracker,int i){ return tracker->getUserSkeletonL_HipZ(i);}
	
	float getUserSkeletonR_HipX(Tracker* tracker,int i){ return tracker->getUserSkeletonR_HipX(i);}
	float getUserSkeletonR_HipY(Tracker* tracker,int i){ return tracker->getUserSkeletonR_HipY(i);}
	float getUserSkeletonR_HipZ(Tracker* tracker,int i){ return tracker->getUserSkeletonR_HipZ(i);}
	
	float getUserSkeletonL_KneeX(Tracker* tracker,int i){ return tracker->getUserSkeletonL_KneeX(i);}
	float getUserSkeletonL_KneeY(Tracker* tracker,int i){ return tracker->getUserSkeletonL_KneeY(i);}
	float getUserSkeletonL_KneeZ(Tracker* tracker,int i){ return tracker->getUserSkeletonL_KneeZ(i);}
	
	float getUserSkeletonR_KneeX(Tracker* tracker,int i){ return tracker->getUserSkeletonR_KneeX(i);}
	float getUserSkeletonR_KneeY(Tracker* tracker,int i){ return tracker->getUserSkeletonR_KneeY(i);}
	float getUserSkeletonR_KneeZ(Tracker* tracker,int i){ return tracker->getUserSkeletonR_KneeZ(i);}
	
	float getUserSkeletonL_FootX(Tracker* tracker,int i){ return tracker->getUserSkeletonL_FootX(i);}
	float getUserSkeletonL_FootY(Tracker* tracker,int i){ return tracker->getUserSkeletonL_FootY(i);}
	float getUserSkeletonL_FootZ(Tracker* tracker,int i){ return tracker->getUserSkeletonL_FootZ(i);}
	
	float getUserSkeletonR_FootX(Tracker* tracker,int i){ return tracker->getUserSkeletonR_FootX(i);}
	float getUserSkeletonR_FootY(Tracker* tracker,int i){ return tracker->getUserSkeletonR_FootY(i);}
	float getUserSkeletonR_FootZ(Tracker* tracker,int i){ return tracker->getUserSkeletonR_FootZ(i);}
	
	void shutdown(Tracker* tracker){tracker->shutdown();}
	
}
