#include <ScriptObject.h>
#include <Actor/Player.h>

using namespace Sapphire;

class HouFurOrchestrion :
  public Sapphire::ScriptAPI::EventScript
{
public:
  HouFurOrchestrion() :
    Sapphire::ScriptAPI::EventScript( 721226 )
  {
  }

  void Scene00000( Entity::Player& player )
  {
    eventMgr().playScene( player, getId(), 0, HIDE_HOTBAR, { 1 } );
  }

  void onTalk( uint32_t eventId, Entity::Player& player, uint64_t actorId ) override
  {
    Scene00000( player );
  }
};

EXPOSE_SCRIPT( HouFurOrchestrion );