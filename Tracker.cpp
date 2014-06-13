#include "NiTE.h"

class Tracker{
	private:
	bool running;
	int maxUsers;
	nite::UserTracker userTracker;
	nite::Status niteRc;
	nite::UserTrackerFrameRef userTrackerFrame;
	const nite::Array<nite::UserData>* users;
	public:
	Tracker(int maxUsers){
		
		this->maxUsers=maxUsers;
		nite::NiTE::initialize();
		niteRc = userTracker.create();
		if (niteRc != nite::STATUS_OK)
		{
			printf("Couldn't create user tracker\n");
			
		}
		niteRc = userTracker.readFrame(&userTrackerFrame);
		if (niteRc != nite::STATUS_OK)
		{
			printf("Get next frame failed\n");
			
		}
		users = &userTrackerFrame.getUsers();
		
	}
	
	void loop(){
		
		niteRc = userTracker.readFrame(&userTrackerFrame);
		if (niteRc != nite::STATUS_OK)
		{
			printf("Get next frame failed\n");
			
		}

		users = &userTrackerFrame.getUsers();
		for (int i = 0; i < users->getSize(); ++i)
		{
			const nite::UserData& user = (*users)[i];
			if (user.isNew())
			{
				userTracker.startSkeletonTracking(user.getId());
			}
			
		}
			
	}
	int getUsersCount(){
		return users->getSize();
	}
	bool isUserTracked(int i){
		return ((*users)[i].getSkeleton().getState() == nite::SKELETON_TRACKED);
	}
	float getUserSkeletonHeadConf(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_HEAD).getPositionConfidence();
	}
	float getUserSkeletonHeadX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_HEAD).getPosition().x;
	}
	float getUserSkeletonHeadY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_HEAD).getPosition().y;
	}
	float getUserSkeletonHeadZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_HEAD).getPosition().z;
	}
	float getUserSkeletonNeckX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_NECK).getPosition().x;
	}
	float getUserSkeletonNeckY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_NECK).getPosition().y;
	}
	float getUserSkeletonNeckZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_NECK).getPosition().z;
	}
	float getUserSkeletonL_ShX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_SHOULDER).getPosition().x;
	}
	float getUserSkeletonL_ShY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_SHOULDER).getPosition().y;
	}
	float getUserSkeletonL_ShZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_SHOULDER).getPosition().z;
	}
	float getUserSkeletonR_ShX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_SHOULDER).getPosition().x;
	}
	float getUserSkeletonR_ShY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_SHOULDER).getPosition().y;
	}
	float getUserSkeletonR_ShZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_SHOULDER).getPosition().z;
	}
	float getUserSkeletonL_ElbowX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_ELBOW).getPosition().x;
	}
	float getUserSkeletonL_ElbowY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_ELBOW).getPosition().y;
	}
	float getUserSkeletonL_ElbowZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_ELBOW).getPosition().z;
	}
	float getUserSkeletonR_ElbowX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_ELBOW).getPosition().x;
	}
	float getUserSkeletonR_ElbowY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_ELBOW).getPosition().y;
	}
	float getUserSkeletonR_ElbowZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_ELBOW).getPosition().z;
	}
	float getUserSkeletonL_HandX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_HAND).getPosition().x;
	}
	float getUserSkeletonL_HandY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_HAND).getPosition().y;
	}
	float getUserSkeletonL_HandZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_HAND).getPosition().z;
	}
	float getUserSkeletonR_HandX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_HAND).getPosition().x;
	}
	float getUserSkeletonR_HandY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_HAND).getPosition().y;
	}
	float getUserSkeletonR_HandZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_HAND).getPosition().z;
	}
	float getUserSkeletonTorsoX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_TORSO).getPosition().x;
	}
	float getUserSkeletonTorsoY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_TORSO).getPosition().y;
	}
	float getUserSkeletonTorsoZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_TORSO).getPosition().z;
	}
	float getUserSkeletonL_HipX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_HIP).getPosition().x;
	}
	float getUserSkeletonL_HipY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_HIP).getPosition().y;
	}
	float getUserSkeletonL_HipZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_HIP).getPosition().z;
	}
	float getUserSkeletonR_HipX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_HIP).getPosition().x;
	}
	float getUserSkeletonR_HipY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_HIP).getPosition().y;
	}
	float getUserSkeletonR_HipZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_HIP).getPosition().z;
	}
	float getUserSkeletonL_KneeX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_KNEE).getPosition().x;
	}
	float getUserSkeletonL_KneeY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_KNEE).getPosition().y;
	}
	float getUserSkeletonL_KneeZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_KNEE).getPosition().z;
	}
	float getUserSkeletonR_KneeX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_KNEE).getPosition().x;
	}
	float getUserSkeletonR_KneeY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_KNEE).getPosition().y;
	}
	float getUserSkeletonR_KneeZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_KNEE).getPosition().z;
	}
	float getUserSkeletonL_FootX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_FOOT).getPosition().x;
	}
	float getUserSkeletonL_FootY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_FOOT).getPosition().y;
	}
	float getUserSkeletonL_FootZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_LEFT_FOOT).getPosition().z;
	}
	float getUserSkeletonR_FootX(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_FOOT).getPosition().x;
	}
	float getUserSkeletonR_FootY(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_FOOT).getPosition().y;
	}
	float getUserSkeletonR_FootZ(int i){
		return (*users)[i].getSkeleton().getJoint(nite::JOINT_RIGHT_FOOT).getPosition().z;
	}
	void shutdown(void){
		nite::NiTE::shutdown();
	}
};

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
