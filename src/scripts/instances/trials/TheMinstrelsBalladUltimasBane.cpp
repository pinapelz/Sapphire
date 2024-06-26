#include <ScriptObject.h>
#include <Territory/InstanceContent.h>

using namespace Sapphire;

class TheMinstrelsBalladUltimasBane : public Sapphire::ScriptAPI::InstanceContentScript
{
public:
  TheMinstrelsBalladUltimasBane() : Sapphire::ScriptAPI::InstanceContentScript( 20013 )
  { }

  void onInit( InstanceContent& instance ) override
  {
    instance.addEObj( "unknown_0", 2002745, 4391076, 4391963, 4, { 7.000000f, 0.000000f, 0.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_1", 2002746, 4391074, 4391964, 4, { -7.000000f, 0.000000f, 0.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_2", 2002747, 4976890, 4391965, 4, { 0.000000f, -0.131581f, -18.566719f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_3", 2002748, 4391072, 4391966, 4, { 17.676531f, -0.144861f, 0.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_4", 2002749, 4976892, 4391967, 4, { 0.000000f, 0.000000f, 17.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_5", 2002750, 4976891, 4391968, 4, { -17.000000f, 0.000000f, 0.000000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance", 2000182, 4391941, 4391942, 5, { -6.677185f, 0.068419f, 12.835030f }, 1.000000f, 0.000000f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.addEObj( "Exit", 2000139, 0, 4391943, 4, { 0.000000f, 0.000000f, -16.316700f }, 1.000000f, 0.000000f, 0); 

  }

  void onUpdate( InstanceContent& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( InstanceContent& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( TheMinstrelsBalladUltimasBane );