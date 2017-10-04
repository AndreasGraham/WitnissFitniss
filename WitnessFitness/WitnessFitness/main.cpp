
#include "Exercises.h"
#include "sfwdraw.h"
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>


//Exercise UP[20];
//Exercise SUP[20];
//Exercise SLB[20];
//Exercise LB[20];
//Exercise SCO[20];
//Exercise CO[20];
#include <ctime>
#include <iostream>

using namespace std;

	Exercise UP[20];

	Exercise SUP[20];

	Exercise SLB[20];
	Exercise LB[20];
	Exercise SCO[20];
	Exercise CO[20];

	
	/*std::string a = "MEOW";
	std::string b = "MEOWMEOW";
	std::string c = "MEOWMEOWMEOW";*/

	
	/*pushies.DisplayStretch();*/

int main() {

	
	
	

		//Display
		sfw::initContext(800, 600, "WitnissdaFitniss");
		// Colors
		sfw::setBackgroundColor(0xb7d7e5FF); 


		//Loads the image - does not display - inage is INT
		
		//push ups with mango photo
		unsigned int imgBot = sfw::loadTextureMap("res/pushupdown.png");
		unsigned int imgMid = sfw::loadTextureMap("res/pushupmid.png");
		unsigned int imgTop = sfw::loadTextureMap("res/pushuptop.png");

		std::string PU = "push up";

		int g[3];
		g[0] = imgBot;
		g[1] = imgMid;
		g[2] = imgTop;
		Exercise pushies(PU, g);

		// Bridge Pose
		unsigned int BP0 = sfw::loadTextureMap("res/BP0.png");
		unsigned int BP1 = sfw::loadTextureMap("res/BP1.png");
		unsigned int BP2 = sfw::loadTextureMap("res/BP2.png");
		std::string BridgePose = "Bridge Pose";

		int BP[3];
		BP[0] = BP0;
		BP[1] = BP1;
		BP[2] = BP2;
		Exercise BridgePose(BridgePose, BP);

		//Cow Pose
		unsigned int CP0 = sfw::loadTextureMap("res/CP0.png");
		unsigned int CP1 = sfw::loadTextureMap("res/CP1.png");
		unsigned int CP2 = sfw::loadTextureMap("res/CP2.png");
		std::string CowPose = "Cow Pose";

		int CP[3];
		CP[0] = CP0;
		CP[1] = CP1;
		CP[2] = CP2;
		Exercise CowPose(CowPose, CP);

		//Cat Pose
		unsigned int CaP0 = sfw::loadTextureMap("res/CaP0.png");
		unsigned int CaP1 = sfw::loadTextureMap("res/CaP1.png");
		unsigned int CaP2 = sfw::loadTextureMap("res/CaP2.png");
		std::string CatPose = "Cat Pose";

		int CaP[3];
		CaP[0] = CaP0;
		CaP[1] = CaP1;
		CaP[2] = CaP2;
		Exercise CatPose(CatPose,CaP);
		
		//Dolphin Pose
		unsigned int DP0 = sfw::loadTextureMap("res/DP0.png");
		unsigned int DP1 = sfw::loadTextureMap("res/DP1.png");
		unsigned int DP2 = sfw::loadTextureMap("res/DP2.png");
		std::string DolphinPose = "Dolphin Pose";

		int DP[3];
		DP[0] = DP0;
		DP[1] = DP1;
		DP[2] = DP2;
		Exercise DolphinPose(DolphinPose, DP);

		// Lower Back
		unsigned int LB0 = sfw::loadTextureMap("res/TR0.png");
		unsigned int LB1 = sfw::loadTextureMap("res/TR1.png");
		unsigned int LB2 = sfw::loadTextureMap("res/TR2.png");
		std::string LowerBack = "Lower Back";

		int LB[3];
		LB[0] = LB0;
		LB[1] = LB1;
		LB[2] = LB2;
		Exercise LowerBack(LowerBack, LB);

		//Truck Rotation
		unsigned int TR0 = sfw::loadTextureMap("res/TR0.png");
		unsigned int TR1 = sfw::loadTextureMap("res/TR1.png");
		unsigned int TR2 = sfw::loadTextureMap("res/TR2.png");
		std::string TrunkRotation = "Trunk Rotation";

		int TR[3];
		TR[0] = TR0;
		TR[1] = TR1;
		TR[2] = TR2;
		Exercise LowerBack(TrunkRotation, TR);

		//CobraPose
		unsigned int CobPos0 = sfw::loadTextureMap("res/CobPos0.png");
		unsigned int CobPos1 = sfw::loadTextureMap("res/CobPos1.png");
		unsigned int CobPos2 = sfw::loadTextureMap("res/CobPos2.png");
		std::string CobraPose = "Cobra Pose";

		int CobPos[3];
		CobPos[0] = CobPos0;
		CobPos[1] = CobPos1;
		CobPos[2] = CobPos2;
		Exercise CobPos(CobraPose, CobPos);

		//Corpse Pose
		unsigned int CorpPos0 = sfw::loadTextureMap("res/CorpPos0.png");
		unsigned int CorpPos1 = sfw::loadTextureMap("res/CorpPos1.png");
		unsigned int CorpPos2 = sfw::loadTextureMap("res/CorpPos2.png");
		std::string CorpsePose = "Corpse Pose";

		int Corpse[3];
		Corpse[0] = CorpPos0;
		Corpse[1] = CorpPos1;
		Corpse[2] = CorpPos2;
		Exercise CropsePose(CorpsePose, Corpse);

		//Quad Stretch
		unsigned int QS0 = sfw::loadTextureMap("res/QS.png");
		unsigned int QS1 = sfw::loadTextureMap("res/QS1.png");
		unsigned int QS2 = sfw::loadTextureMap("res/QS2.png");
		std::string QdStretch = "Quad Stretch";

		int Quad[3];
		Quad[0] = QS0;
		Quad[1] = QS1;
		Quad[2] = QS2;
		Exercise QuadStretch(QdStretch, Quad);

		//Hamstring/CalfStretch
		unsigned int HamS0 = sfw::loadTextureMap("res/HS0.png");
		unsigned int HamS1 = sfw::loadTextureMap("res/HS1.png");
		unsigned int HamS2 = sfw::loadTextureMap("res/HS2.png");
		std::string Hams = "Ham String";

		int HamStr[3];
		HamStr[0] = HamS0;
		HamStr[1] = HamS1;
		HamStr[2] = HamS2;
		Exercise CropsePose(Hams, HamStr);

		//Side Leg Stretch H
		unsigned int SLSH0 = sfw::loadTextureMap("res/SLSH0.png");
		unsigned int SLSH1 = sfw::loadTextureMap("res/SLSH1.png");
		unsigned int SLSH2 = sfw::loadTextureMap("res/SLSH2.png");
		std::string SideLegStretchH = "Side Leg High";

		int SideLegH[3];
		SideLegH[0] = SLSH0;
		SideLegH[1] = SLSH1;
		SideLegH[2] = SLSH2;
		Exercise SideLegHigh(SideLegStretchH, SideLegH);

		//Side Leg Stretch Low
		unsigned int SLSL0 = sfw::loadTextureMap("res/SLSL0.png");
		unsigned int SLSL1 = sfw::loadTextureMap("res/SLSL1.png");
		unsigned int SLSL2 = sfw::loadTextureMap("res/SLSL2.png");
		std::string SideLegStretchL = "Side Leg Low";

		int SideLegL[3];
		SideLegL[0] = SLSL0;
		SideLegL[1] = SLSL1;
		SideLegL[2] = SLSL2;
		Exercise SideLegHigh(SideLegStretchL, SideLegL);

		//Step Forward Calf Stretch
		unsigned int SFC0 = sfw::loadTextureMap("res/SFC0.png");
		unsigned int SFC1 = sfw::loadTextureMap("res/SFC1.png");
		unsigned int SFC2 = sfw::loadTextureMap("res/SFC2.png");
		std::string StepForwardCalf = "Step Forward Calf Stretch";

		int Calf[3];
		Calf[0] = SFC0;
		Calf[1] = SFC1;
		Calf[2] = SFC2;
		Exercise CalfStretch(StepForwardCalf, Calf);

		//Head Tilt Forward
		unsigned int HTF0 = sfw::loadTextureMap("res/HTF0.png");
		unsigned int HTF1 = sfw::loadTextureMap("res/HTF1.png");
		unsigned int HTF2 = sfw::loadTextureMap("res/HTF2.png");
		std::string HeadTiltF = "Head Tilt Forward";

		int HeadTF[3];
		HeadTF[0] = HTF0;
		HeadTF[1] = HTF1;
		HeadTF[2] = HTF2;
		Exercise HeadTiltForward(HeadTiltF, HeadTF);

		//Head Tilt Sideways
		unsigned int HTS0 = sfw::loadTextureMap("res/HTS0.png");
		unsigned int HTS1 = sfw::loadTextureMap("res/HTS1.png");
		unsigned int HTS2 = sfw::loadTextureMap("res/HTS2.png");
		std::string HeadTiltS = "Head Tilt SideWays";

		int HeadTS[3];
		HeadTS[0] = HTS0;
		HeadTS[1] = HTS1;
		HeadTS[2] = HTS2;
		Exercise HeadTiltSideways(HeadTiltS, HeadTS);

		//sideways arms swing
		unsigned int SAS0 = sfw::loadTextureMap("res/SAS0.png");
		unsigned int SAS1 = sfw::loadTextureMap("res/SAS1.png");
		unsigned int SAS2 = sfw::loadTextureMap("res/SAS2.png");
		std::string SideArmSwing = "Side Arm Swing";

		int SideAS[3];
		SideAS[0] = SAS0;
		SideAS[1] = SAS1;
		SideAS[2] = SAS2;
		Exercise SidewaysArmSwing(SideArmSwing, SideAS);

		//Shoulder Amrs behind back REach
		unsigned int SAB0 = sfw::loadTextureMap("res/SAB0.png");
		unsigned int SAB1 = sfw::loadTextureMap("res/SAB1.png");
		unsigned int SAB2 = sfw::loadTextureMap("res/SAB2.png");
		std::string SideArmReach = "Head Tilt Forward";

		int SideArm[3];
		SideArm[0] = SAB0;
		SideArm[1] = SAB1;
		SideArm[2] = SAB2;
		Exercise SideArms(SideArmReach, SideArm);

		//// Update the rendering context- use as driver for the game loop. Returns false if the window should close.
		while (sfw::stepContext())
		{
			pushies.DisplayStretch();
		}
		//{
		//	Timer -= sfw::getDeltaTime();
		//	//counting down from timer
		//	if (Timer <= 0) //if timer is lessthanorequalto 0; increment img index(array position); 
		//	{
		//		ImgIndx++;
		//		//time between frames
		//		Timer = .5f;  
		//		if (ImgIndx > 2) //When the array is finished it loobs
		//		{
		//			ImgIndx = 0;
		//		}
		//	}

		//	//draws the array of images to screen
		//	sfw::drawTexture(disp[ImgIndx], 400, 300, 300, 400);



		//}
		

		sfw::termContext();




	while (true) {};
	//Exercise 

}