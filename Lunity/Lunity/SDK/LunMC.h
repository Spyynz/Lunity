#pragma once
#include "TextHolder.h"
#include "../BigHead.h"
struct Vector3 { float x, y, z; };
// Created with ReClass.NET 1.2 by KN4CK3R

class ClientInstance
{
public:
	char pad_0000[88]; //0x0000
	class MinecraftGame* MinecraftGame; //0x0058
	class MinecraftGame* MinecraftGame2; //0x0060
	class Minecraft* Minecraft; //0x0068
	char pad_0070[24]; //0x0070
	class LoopbackPacketSender* LoopbackPacketSender; //0x0088
	class HolographicPlatform* HolographicPlatform; //0x0090
	class VoiceSystem* VoiceSystem; //0x0098
	class VanillaMoveInputHandler* VanillaMoveInputHandler; //0x00A0
	char pad_00A8[8]; //0x00A8
	class MinecraftKeyboardManager* MinecraftKeyboardManager; //0x00B0
	class HitDetectSystem* HitDetectSystem; //0x00B8
	class PrivateKeyManager* PrivateKeyManager; //0x00C0
	class UserAuthentication* UserAuthentication; //0x00C8
	class SceneFactory* SceneFactory; //0x00D0
	char pad_00D8[24]; //0x00D8
	class LocalPlayer* LocalPlayer; //0x00F0
	char pad_00F8[248]; //0x00F8
}; //Size: 0x01F0

class LocalPlayer
{
public:
	char pad_0008[368]; //0x0008
	bool OnGround; //0x0178
	char pad_0179[439]; //0x0179
	class MultiPlayerLevel* MultiPlayerLevel; //0x0330
	char pad_0338[120]; //0x0338
	char Type[8]; //0x03B0
	char pad_03B8[160]; //0x03B8
	Vector3 Pos; //0x0458
	Vector3 Pos2; //0x0464
	int N000006E7; //0x0470
	float HitboxWidth; //0x0474
	float HitboxHeight; //0x0478
	Vector3 Pos3; //0x047C
	char pad_0488[888]; //0x0488

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
	virtual void setPos(Vector3* pos);
	virtual Vector3* getPos();
	virtual void Function12();
	virtual void Function13();
	virtual void Function14();
	virtual void Function15();
	virtual void setRot();
	virtual void Function17();
	virtual void Function18();
	virtual void Function19();
	virtual void Function20();
	virtual void Function21();
	virtual void Function22();
	virtual void Function23();
	virtual void Function24();
	virtual void Function25();
	virtual void Function26();
	virtual void Function27();
	virtual void Function28();
	virtual void Function29();
	virtual void Function30();
	virtual void Function31();
	virtual void chorusFruitTeleport();
	virtual void Function33();
	virtual void Function34();
	virtual void Function35();
	virtual void Function36();
	virtual void Function37();
	virtual void Function38();
	virtual void Function39();
	virtual void Function40();
	virtual void Function41();
	virtual void Function42();
	virtual void Function43();
	virtual void Function44();
	virtual void Function45();
	virtual void Function46();
	virtual void Function47();
	virtual void Function48();
	virtual void Function49();
	virtual void Function50();
	virtual void Function51();
	virtual void Function52();
	virtual void Function53();
	virtual void Function54();
	virtual void Function55();
	virtual void Function56();
	virtual void Function57();
	virtual void Function58();
	virtual void Function59();
	virtual void Function60();
	virtual void Function61();
	virtual void Function62();
	virtual void Function63();
	virtual void Function64();
	virtual void Function65();
	virtual void Function66();
	virtual void Function67();
	virtual void Function68();
	virtual void Function69();
	virtual void Function70();
	virtual void Function71();
	virtual void Function72();
	virtual void Function73();
	virtual void Function74();
	virtual void Function75();
	virtual void Function76();
	virtual void Function77();
	virtual void Function78();
	virtual void Function79();
	virtual void Function80();
	virtual void Function81();
	virtual void Function82();
	virtual void Function83();
	virtual void Function84();
	virtual void Function85();
	virtual void Function86();
	virtual void Function87();
	virtual void Function88();
	virtual void Function89();
	virtual void Function90();
	virtual void Function91();
	virtual void Function92();
	virtual void Function93();
	virtual void Function94();
	virtual void Function95();
	virtual void Function96();
	virtual void Function97();
	virtual void Function98();
	virtual void Function99();
	virtual void Function100();
	virtual void Function101();
	virtual void Function102();
	virtual void Function103();
	virtual void Function104();
	virtual void Function105();
	virtual void Function106();
	virtual void Function107();
	virtual void Function108();
	virtual void Function109();
	virtual void Function110();
	virtual void Function111();
	virtual void Function112();
	virtual void Function113();
	virtual void Function114();
	virtual void Function115();
	virtual void Function116();
	virtual void Function117();
	virtual void Function118();
	virtual void Function119();
	virtual void Function120();
	virtual void Function121();
	virtual void Function122();
	virtual void Function123();
	virtual void Function124();
	virtual void Function125();
	virtual void Function126();
	virtual void Function127();
	virtual void Function128();
	virtual void Function129();
	virtual void Function130();
	virtual void Function131();
	virtual void Function132();
	virtual void Function133();
	virtual void Function134();
	virtual void Function135();
	virtual void Function136();
	virtual void Function137();
	virtual void Function138();
	virtual void Function139();
	virtual void Function140();
	virtual void Function141();
	virtual void Function142();
	virtual void Function143();
	virtual void Function144();
	virtual void Function145();
	virtual void Function146();
	virtual void Function147();
	virtual void Function148();
	virtual void Function149();
	virtual void Function150();
	virtual void Function151();
	virtual void Function152();
	virtual void Function153();
	virtual void Function154();
	virtual void Function155();
	virtual void Function156();
	virtual void Function157();
	virtual void Function158();
	virtual void Function159();
	virtual void Function160();
	virtual void Function161();
	virtual void Function162();
	virtual void Function163();
	virtual void Function164();
	virtual void Function165();
	virtual void Function166();
	virtual void Function167();
	virtual void Function168();
	virtual void Function169();
	virtual void Function170();
	virtual void Function171();
	virtual void Function172();
	virtual void Function173();
	virtual void Function174();
	virtual void Function175();
	virtual void Function176();
	virtual void Function177();
	virtual void Function178();
	virtual void Function179();
	virtual void Function180();
	virtual void Function181();
	virtual void Function182();
	virtual void Function183();
	virtual void Function184();
	virtual void Function185();
	virtual void Function186();
	virtual void Function187();
	virtual void Function188();
	virtual void Function189();
	virtual void Function190();
	virtual void Function191();
	virtual void Function192();
	virtual void Function193();
	virtual void Function194();
	virtual void Function195();
	virtual void Function196();
	virtual void Function197();
	virtual void Function198();
	virtual void swing();
	virtual void Function200();
	virtual void Function201();
	virtual void Function202();
	virtual void Function203();
	virtual void Function204();
	virtual void Function205();
	virtual void Function206();
	virtual void Function207();
	virtual void Function208();
	virtual void Function209();
	virtual void Function210();
	virtual void Function211();
	virtual void Function212();
	virtual void Function213();
	virtual void Function214();
	virtual void Function215();
	virtual void Function216();
	virtual void Function217();
	virtual void Function218();
	virtual void Function219();
	virtual void Function220();
	virtual void Function221();
	virtual void Function222();
	virtual void Function223();
	virtual void Function224();
	virtual void Function225();
	virtual void Function226();
	virtual void Function227();
	virtual void Function228();
	virtual void Function229();
	virtual void Function230();
	virtual void Function231();
	virtual void Function232();
	virtual void Function233();
	virtual void Function234();
	virtual void Function235();
	virtual void Function236();
	virtual void Function237();
	virtual void Function238();
	virtual void Function239();
	virtual void Function240();
	virtual void Function241();
	virtual void Function242();
	virtual void Function243();
	virtual void Function244();
	virtual void Function245();
	virtual void Function246();
	virtual void Function247();
	virtual void Function248();
	virtual void Function249();
	virtual void Function250();
	virtual void Function251();
	virtual void Function252();
	virtual void Function253();
	virtual void Function254();
	virtual void Function255();
	virtual void Function256();
	virtual void Function257();
	virtual void Function258();
	virtual void Function259();
	virtual void Function260();
	virtual void Function261();
	virtual void Function262();
	virtual void Function263();
	virtual void Function264();
	virtual void Function265();
	virtual void Function266();
	virtual void Function267();
	virtual void Function268();
	virtual void Function269();
	virtual void Function270();
	virtual void Function271();
	virtual void Function272();
	virtual void Function273();
	virtual void Function274();
	virtual void Function275();
	virtual void Function276();
	virtual void Function277();
	virtual void Function278();
	virtual void Function279();
	virtual void Function280();
	virtual void Function281();
	virtual void Function282();
	virtual void Function283();
	virtual void Function284();
	virtual void Function285();
	virtual void Function286();
	virtual void Function287();
	virtual void Function288();
	virtual void Function289();
	virtual void Function290();
	virtual void Function291();
	virtual void Function292();
	virtual void Function293();
	virtual void Function294();
	virtual void Function295();
	virtual void Function296();
	virtual void Function297();
	virtual void Function298();
	virtual void Function299();
	virtual void Function300();
	virtual void Function301();
	virtual void Function302();
	virtual void Function303();
	virtual void Function304();
	virtual void Function305();
	virtual void Function306();
	virtual void Function307();
	virtual void Function308();
	virtual void Function309();
	virtual void Function310();
	virtual void Function311();
	virtual void Function312();
	virtual void Function313();
	virtual void Function314();
	virtual void Function315();
	virtual void Function316();
	virtual void Function317();
	virtual void Function318();
	virtual void Function319();
	virtual void Function320();
	virtual void Function321();
	virtual void Function322();
	virtual void Function323();
	virtual void Function324();
	virtual void Function325();
	virtual void Function326();
	virtual void Function327();
	virtual void Function328();
	virtual void Function329();
	virtual void Function330();
	virtual void Function331();
	virtual void Function332();
	virtual void Function333();
	virtual void Function334();
	virtual void Function335();
	virtual void Function336();
	virtual void Function337();
	virtual void Function338();
	virtual void Function339();
	virtual void Function340();
	virtual void Function341();
	virtual void Function342();
	virtual void Function343();
	virtual void Function344();
	virtual void Function345();
	virtual void Function346();
	virtual void Function347();
	virtual void Function348();
	virtual void Function349();
	virtual void Function350();
	virtual void Function351();
	virtual void Function352();
	virtual void Function353();
	virtual void Function354();
	virtual void Function355();
	virtual void Function356();
	virtual void Function357();
	virtual void Function358();
	virtual void Function359();
	virtual void Function360();
	virtual void Function361();
	virtual void Function362();
	virtual void Function363();
	virtual void Function364();
	virtual void Function365();
	virtual void Function366();
	virtual void Function367();
	virtual void Function368();
	virtual void Function369();
	virtual void Function370();
	virtual void Function371();
	virtual void Function372();
	virtual void Function373();
	virtual void Function374();
	virtual void Function375();
	virtual void Function376();
	virtual void Function377();
	virtual void Function378();
	virtual void Function379();
	virtual void Function380();
	virtual void Function381();
	virtual void Function382();
	virtual void Function383();
	virtual void Function384();
	virtual void Function385();
	virtual void Function386();
	virtual void Function387();
	virtual void Function388();
	virtual void Function389();
	virtual void Function390();
	virtual void Function391();
	virtual void Function392();
	virtual void Function393();
	virtual void Function394();
	virtual void Function395();
	virtual void Function396();
	virtual void Function397();
	virtual void Function398();
	virtual void Function399();
	virtual void Function400();
	virtual void Function401();
	virtual void Function402();
	virtual void Function403();
	virtual void Function404();
	virtual void Function405();
	virtual void Function406();
	virtual void Function407();
	virtual void Function408();
	virtual void Function409();
	virtual void Function410();
	virtual void Function411();
	virtual void Function412();
	virtual void Function413();
	virtual void Function414();
	virtual void Function415();
	virtual void Function416();
	virtual void Function417();
	virtual void Function418();
	virtual void Function419();
	virtual void Function420();
	virtual void Function421();
	virtual void Function422();
	virtual void Function423();
	virtual void Function424();
	virtual void Function425();
	virtual void Function426();
	virtual void Function427();
	virtual void Function428();
	virtual void Function429();
	virtual void Function430();
	virtual void Function431();
	virtual void Function432();
	virtual void Function433();
	virtual void Function434();
	virtual void Function435();
	virtual void Function436();
	virtual void Function437();
	virtual void Function438();
	virtual void Function439();
	virtual void Function440();
	virtual void Function441();
	virtual void Function442();
	virtual void Function443();
	virtual void Function444();
	virtual void Function445();
	virtual void Function446();
	virtual void Function447();
	virtual void Function448();
	virtual void Function449();
	virtual void Function450();
	virtual void Function451();
	virtual void Function452();
	virtual void Function453();
	virtual void Function454();
	virtual void Function455();
	virtual void Function456();
	virtual void Function457();
	virtual void Function458();
	virtual void Function459();
	virtual void Function460();
	virtual void Function461();
	virtual void Function462();
	virtual void Function463();
	virtual void Function464();
	virtual void Function465();
	virtual void Function466();
	virtual void Function467();
	virtual void Function468();
	virtual void Function469();
	virtual void Function470();
	virtual void Function471();
	virtual void Function472();
	virtual void Function473();
	virtual void Function474();
	virtual void Function475();
	virtual void Function476();
	virtual void Function477();
	virtual void Function478();
	virtual void Function479();
	virtual void Function480();
	virtual void Function481();
	virtual void Function482();
	virtual void Function483();
	virtual void Function484();
	virtual void Function485();
	virtual void Function486();
	virtual void Function487();
	virtual void Function488();
	virtual void Function489();
	virtual void Function490();
	virtual void Function491();
	virtual void Function492();
	virtual void Function493();
	virtual void Function494();
	virtual void Function495();
	virtual void Function496();
	virtual void Function497();
	virtual void Function498();
	virtual void Function499();
	virtual void Function500();
	virtual void Function501();
	virtual void Function502();
	virtual void Function503();
	virtual void Function504();
	virtual void Function505();
	virtual void Function506();
	virtual void Function507();
	virtual void Function508();
	virtual void Function509();
	virtual void Function510();
	virtual void Function511();
	virtual void Function512();
	virtual void Function513();
	virtual void Function514();
	virtual void Function515();
	virtual void Function516();
	virtual void Function517();
	virtual void Function518();
	virtual void Function519();
	virtual void Function520();
	virtual void Function521();
	virtual void Function522();
	virtual void Function523();
	virtual void Function524();
	virtual void Function525();
	virtual void Function526();
	virtual void Function527();
	virtual void Function528();
	virtual void Function529();
}; //Size: 0x0800

class MultiPlayerLevel
{
public:
	char pad_0000[2128]; //0x0000
	int N000008BE; //0x0850
	int LookingBlockSide; //0x0854
	int LookingBlockX; //0x0858
	int LookingBlockY; //0x085C
	int LookingBlockZ; //0x0860
	char pad_0864[12]; //0x0864
	class Actor* LookingActor; //0x0870
	char pad_0878[1936]; //0x0878
}; //Size: 0x1008

class Actor
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class MinecraftGame
{
public:
	char pad_0000[48]; //0x0000
	class MinecraftGraphics* MinecraftGraphics; //0x0030
	class MinecraftGraphics* MinecraftGraphics2; //0x0038
	class NullFrameBuilder* NullFrameBuilder; //0x0040
	char pad_0048[8]; //0x0048
	class GameArguments* GameArguments; //0x0050
	class GameRenderer* GameRenderer; //0x0058
	char pad_0060[24]; //0x0060
	class TextureGroup* TextureGroup; //0x0078
	class TextureGroup* TextureGroup2; //0x0080
	class FontRepository* FontRepository; //0x0088
	class FontRepository* FontRepository2; //0x0090
	class BitmapFont* leBetterFont; //0x0098
	class BitmapFont* theBetterFont; //0x00A0
	char pad_00A8[1896]; //0x00A8
}; //Size: 0x0810

class MinecraftGraphics
{
public:
	char pad_0008[8]; //0x0008
	class ShaderGroup* ShaderGroup; //0x0010
	char pad_0018[2032]; //0x0018

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0808

class ShaderGroup
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class NullFrameBuilder
{
public:
	char pad_0000[1024]; //0x0000
}; //Size: 0x0400

class GameArguments
{
public:
	char pad_0000[1032]; //0x0000
}; //Size: 0x0408

class GameRenderer
{
public:
	char pad_0000[2056]; //0x0000
}; //Size: 0x0808

class TextureGroup
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class FontRepository
{
public:
	char pad_0008[256]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0108

class MinecraftUIRenderContext
{
public:
	char pad_0008[56]; //0x0008

	virtual ~MinecraftUIRenderContext();
	virtual float getLineLength(BitmapFont* font, TextHolder* str, float textSize, bool unknown);
	virtual float getTextAlpha();
	virtual void setTextAlpha(float alpha);
	virtual __int64 drawDebugText(const float* pos, TextHolder* text, float* color, float alpha, unsigned int textAlignment, const float* textMeasureData, const void* caretMeasureData);
	virtual __int64 drawText(BitmapFont* font, const float* pos, TextHolder* text, float* color, float alpha, unsigned int textAlignment, const float* textMeasureData, const uintptr_t* caretMeasureData);
	virtual void flushText(float timeSinceLastFlush); // time used for ticking the obfuscated text
	virtual __int64 drawImageNOTIMPLEMENTED(); // didnt bother putting in the parameters
	virtual __int64 drawNinesliceNOTIMPLEMENTED();
	virtual __int64 flushImagesNOTIMPLEMENTED();
	virtual __int64 beginSharedMeshBatchNOTIMPLEMENTED();
	virtual __int64 endSharedMeshBatchNOTIMPLEMENTED();
	virtual void drawRectangle(const float* pos, const float* color, float alpha, int lineWidth); // line width is guessed
	virtual void fillRectangle(const float* pos, const float* color, float alpha);
}; //Size: 0x0040

class UserAuthentication
{
public:
	char pad_0000[72]; //0x0000
}; //Size: 0x0048

class BitmapFont
{
public:
	char pad_0000[72]; //0x0000
}; //Size: 0x0048

class LoopbackPacketSender
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class HolographicPlatform
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class VoiceSystem
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class VanillaMoveInputHandler
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class MinecraftKeyboardManager
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class HitDetectSystem
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class PrivateKeyManager
{
public:
	char pad_0000[24]; //0x0000
}; //Size: 0x0018

class SceneFactory
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class Minecraft
{
public:
	char pad_0000[192]; //0x0000
	class NetworkHandler* NetworkHandler; //0x00C0
	class LoopbackPacketSender* LoopbackPacketSender; //0x00C8
	char pad_00D0[56]; //0x00D0
}; //Size: 0x0108

class NetworkHandler
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class N00000D28
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008

class N00000D51
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008