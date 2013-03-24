#ifndef __OXC_PCH_H
#define __OXC_PCH_H

#include <algorithm>
#include <assert.h>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
//#include <cpuid.h>
#include <cstdarg>
#include <cstdlib>
#include <ctime>
//#include <direct.h>
#include <dirent.h>
//#include <emmintrin.h> // for SSE2 intrinsics; see http://msdn.microsoft.com/en-us/library/has3d153%28v=vs.71%29.aspx
#include <errno.h>
#include <exception>
#include <fstream>
#include <functional>
//#include <intrin.h>
#include <iomanip>
#include <iostream>
#include <iostream>
#include <limits>
#include <limits.h>
#include <list>
#include <locale>
#include <malloc.h>
#include <map>
#include <math.h>
#include <pwd.h>
#include <queue>
#include <SDL_endian.h>
#include <SDL_gfxPrimitives.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_keysym.h>
#include <SDL_mixer.h>
#include <SDL_opengl.h>
#include <SDL/SDL.h>
#include <SDL_syswm.h>
#include <SDL_types.h>
#include <set>
//#include <shlobj.h>
//#include <shlwapi.h>
#include <sstream>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <sys/param.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <typeinfo>
#include <unistd.h>
#include <utility>
#include <vector>
#ifdef _WIN32
#include <windows.h>
#endif
#include <yaml-cpp/yaml.h>

#include "./aresame.h"

#include "./Engine/State.h"
#include "./Basescape/TransferConfirmState.h"

#include "./Engine/ShaderMove.h"
#include "./Engine/Flc.h"
#include "./Engine/Logger.h"
#include "./Engine/Surface.h"
#include "./Engine/Exception.h"
#include "./Engine/Sound.h"
#include "./Engine/GMCat.h"
#include "./Engine/GraphSubset.h"
#include "./Engine/CrossPlatform.h"
#include "./Engine/CatFile.h"
#include "./Engine/Screen.h"
#include "./Engine/Game.h"
#include "./Engine/SurfaceSet.h"
#include "./Engine/LocalizedText.h"
#include "./Engine/FastLineClip.h"
#include "./Engine/Scalers/scalebit.h"
#include "./Engine/Scalers/hqx.h"
#include "./Engine/Scalers/common.h"
#include "./Engine/Scalers/scale2x.h"
#include "./Engine/Scalers/scale3x.h"
#include "./Engine/ShaderRepeat.h"
#include "./Engine/SoundSet.h"
#include "./Engine/Action.h"
#include "./Engine/OpenGL.h"
#include "./Engine/InteractiveSurface.h"
#include "./Engine/ShaderDraw.h"
#include "./Engine/Options.h"
#include "./Engine/Timer.h"
#include "./Engine/Zoom.h"
#include "./Engine/Font.h"
#include "./Engine/FixedFloat.h"
#include "./Engine/RNG.h"
#include "./Engine/ShaderRotate.h"
#include "./Engine/Palette.h"
#include "./Engine/Music.h"
#include "./Engine/Language.h"
#include "./Engine/ShaderDrawHelper.h"
#include "./dirent.h"
#include "./Battlescape/PathfindingNode.h"
#include "./Battlescape/PrimeGrenadeState.h"
#include "./Battlescape/UnitInfoState.h"
#include "./Battlescape/MedikitState.h"
#include "./Battlescape/UnitDieBState.h"
#include "./Battlescape/BattleAIState.h"
#include "./Battlescape/CannotReequipState.h"
#include "./Battlescape/ActionMenuItem.h"
#include "./Battlescape/PatrolBAIState.h"
#include "./Battlescape/WarningMessage.h"
#include "./Battlescape/PathfindingOpenSet.h"
#include "./Battlescape/TileEngine.h"
#include "./Battlescape/BattlescapeOptionsState.h"
#include "./Battlescape/ScannerView.h"
#include "./Battlescape/Inventory.h"
#include "./Battlescape/BattlescapeGame.h"
#include "./Battlescape/MiniMapState.h"
#include "./Battlescape/UnitWalkBState.h"
#include "./Battlescape/BriefingState.h"
#include "./Battlescape/BattlescapeGenerator.h"
#include "./Battlescape/BattlescapeState.h"
#include "./Battlescape/NextTurnState.h"
#include "./Battlescape/UnitPanicBState.h"
#include "./Battlescape/UnitFallBState.h"
#include "./Battlescape/UnitSprite.h"
#include "./Battlescape/MiniMapView.h"
#include "./Battlescape/ProjectileFlyBState.h"
#include "./Battlescape/ExplosionBState.h"
#include "./Battlescape/MedikitView.h"
#include "./Battlescape/InventoryState.h"
#include "./Battlescape/PromotionsState.h"
#include "./Battlescape/InfoboxOKState.h"
#include "./Battlescape/Explosion.h"
#include "./Battlescape/ScannerState.h"
#include "./Battlescape/AggroBAIState.h"
#include "./Battlescape/BattlescapeMessage.h"
#include "./Battlescape/Position.h"
#include "./Battlescape/Pathfinding.h"
#include "./Battlescape/AbortMissionState.h"
#include "./Battlescape/Camera.h"
#include "./Battlescape/NoContainmentState.h"
#include "./Battlescape/DebriefingState.h"
#include "./Battlescape/ActionMenuState.h"
#include "./Battlescape/BattleState.h"
#include "./Battlescape/InfoboxState.h"
#include "./Battlescape/Projectile.h"
#include "./Battlescape/BulletSprite.h"
#include "./Battlescape/Map.h"
#include "./Battlescape/UnitTurnBState.h"
#include "./Ufopaedia/ArticleStateBaseFacility.h"
#include "./Ufopaedia/ArticleStateItem.h"
#include "./Ufopaedia/ArticleStateCraftWeapon.h"
#include "./Ufopaedia/ArticleStateArmor.h"
#include "./Ufopaedia/Ufopaedia.h"
#include "./Ufopaedia/ArticleStateText.h"
#include "./Ufopaedia/ArticleStateTextImage.h"
#include "./Ufopaedia/ArticleStateUfo.h"
#include "./Ufopaedia/ArticleStateCraft.h"
#include "./Ufopaedia/UfopaediaSelectState.h"
#include "./Ufopaedia/ArticleState.h"
#include "./Ufopaedia/ArticleStateVehicle.h"
#include "./Ufopaedia/UfopaediaStartState.h"
#include "./Basescape/TransferBaseState.h"
#include "./Basescape/BuildFacilitiesState.h"
#include "./Basescape/ResearchState.h"
#include "./Basescape/BasescapeState.h"
#include "./Basescape/SelectStartFacilityState.h"
#include "./Basescape/BaseView.h"
#include "./Basescape/ManufactureState.h"
#include "./Basescape/PlaceFacilityState.h"
#include "./Basescape/StoresState.h"
#include "./Basescape/NewManufactureListState.h"
#include "./Basescape/ManufactureInfoState.h"
#include "./Basescape/ResearchInfoState.h"
#include "./Basescape/CraftEquipmentState.h"
#include "./Basescape/SoldiersState.h"
#include "./Basescape/PurchaseState.h"
#include "./Basescape/CraftsState.h"
#include "./Basescape/TransferItemsState.h"
#include "./Basescape/SoldierInfoState.h"
#include "./Basescape/CraftInfoState.h"
#include "./Basescape/DismantleFacilityState.h"
#include "./Basescape/SoldierArmorState.h"
#include "./Basescape/ManufactureStartState.h"
#include "./Basescape/SellState.h"
#include "./Basescape/CraftArmorState.h"
#include "./Basescape/CraftWeaponsState.h"
#include "./Basescape/MiniBaseView.h"
#include "./Basescape/NewResearchListState.h"
#include "./Basescape/BaseInfoState.h"
#include "./Basescape/TransfersState.h"
#include "./Basescape/PlaceLiftState.h"
#include "./Basescape/CraftSoldiersState.h"
#include "./Basescape/MonthlyCostsState.h"
#include "./Basescape/PlaceStartFacilityState.h"
#include "./Geoscape/NewPossibleManufactureState.h"
#include "./Geoscape/LowFuelState.h"
#include "./Geoscape/UfoDetectedState.h"
#include "./Geoscape/MultipleTargetsState.h"
#include "./Geoscape/GeoscapeCraftState.h"
#include "./Geoscape/Polygon.h"
#include "./Geoscape/AlienBaseState.h"
#include "./Geoscape/BaseNameState.h"
#include "./Geoscape/GeoscapeState.h"
#include "./Geoscape/BaseDestroyedState.h"
#include "./Geoscape/VictoryState.h"
#include "./Geoscape/FundingState.h"
#include "./Geoscape/Globe.h"
#include "./Geoscape/BaseDefenseState.h"
#include "./Geoscape/CraftPatrolState.h"
#include "./Geoscape/CraftErrorState.h"
#include "./Geoscape/Cord.h"
#include "./Geoscape/BuildNewBaseState.h"
#include "./Geoscape/TargetInfoState.h"
#include "./Geoscape/UfoLostState.h"
#include "./Geoscape/MonthlyReportState.h"
#include "./Geoscape/GraphsState.h"
#include "./Geoscape/ResearchCompleteState.h"
#include "./Geoscape/AlienTerrorState.h"
#include "./Geoscape/NewPossibleResearchState.h"
#include "./Geoscape/Polyline.h"
#include "./Geoscape/ProductionCompleteState.h"
#include "./Geoscape/AbandonGameState.h"
#include "./Geoscape/SelectDestinationState.h"
#include "./Geoscape/UfoHyperDetectedState.h"
#include "./Geoscape/ConfirmNewBaseState.h"
#include "./Geoscape/InterceptState.h"
#include "./Geoscape/DefeatState.h"
#include "./Geoscape/ConfirmCydoniaState.h"
#include "./Geoscape/DogfightState.h"
#include "./Geoscape/PsiTrainingState.h"
#include "./Geoscape/AllocatePsiTrainingState.h"
#include "./Geoscape/GeoscapeOptionsState.h"
#include "./Geoscape/ConfirmLandingState.h"
#include "./Geoscape/ConfirmDestinationState.h"
#include "./Geoscape/ItemsArrivingState.h"
#include "./Ruleset/RuleInventory.h"
#include "./Ruleset/RuleUfo.h"
#include "./Ruleset/RuleResearch.h"
#include "./Ruleset/ArticleDefinition.h"
#include "./Ruleset/Unit.h"
#include "./Ruleset/Ruleset.h"
#include "./Ruleset/RuleCraftWeapon.h"
#include "./Ruleset/MapData.h"
#include "./Ruleset/SoldierNamePool.h"
#include "./Ruleset/Armor.h"
#include "./Ruleset/RuleSoldier.h"
#include "./Ruleset/MapDataSet.h"
#include "./Ruleset/RuleAlienMission.h"
#include "./Ruleset/UfoTrajectory.h"
#include "./Ruleset/RuleCraft.h"
#include "./Ruleset/RuleCountry.h"
#include "./Ruleset/MapBlock.h"
#include "./Ruleset/RuleBaseFacility.h"
#include "./Ruleset/RuleRegion.h"
#include "./Ruleset/RuleItem.h"
#include "./Ruleset/RuleManufacture.h"
#include "./Ruleset/AlienRace.h"
#include "./Ruleset/City.h"
#include "./Ruleset/AlienDeployment.h"
#include "./Ruleset/RuleTerrain.h"
#include "./Interface/ToggleTextButton.h"
#include "./Interface/TextButton.h"
#include "./Interface/TextEdit.h"
#include "./Interface/Bar.h"
#include "./Interface/Cursor.h"
#include "./Interface/FpsCounter.h"
#include "./Interface/ArrowButton.h"
#include "./Interface/Window.h"
#include "./Interface/Text.h"
#include "./Interface/NumberText.h"
#include "./Interface/ImageButton.h"
#include "./Interface/TextList.h"
#include "./lodepng.h"
#include "./Menu/SaveState.h"
#include "./Menu/DeleteGameState.h"
#include "./Menu/ErrorMessageState.h"
#include "./Menu/NewBattleState.h"
#include "./Menu/StartState.h"
#include "./Menu/NoteState.h"
#include "./Menu/TestState.h"
#include "./Menu/OptionsControlsState.h"
#include "./Menu/LoadState.h"
#include "./Menu/SavedGameState.h"
#include "./Menu/OptionsState.h"
#include "./Menu/LanguageState.h"
#include "./Menu/NewGameState.h"
#include "./Menu/MainMenuState.h"
#include "./Resource/ResourcePack.h"
#include "./Resource/XcomResourcePack.h"
#include "./Savegame/MovingTarget.h"
#include "./Savegame/SavedBattleGame.h"
#include "./Savegame/ResearchProject.h"
#include "./Savegame/Ufo.h"
#include "./Savegame/Node.h"
#include "./Savegame/Tile.h"
#include "./Savegame/TerrorSite.h"
#include "./Savegame/Waypoint.h"
#include "./Savegame/Base.h"
#include "./Savegame/AlienBase.h"
#include "./Savegame/Transfer.h"
#include "./Savegame/GameTime.h"
#include "./Savegame/CraftWeapon.h"
#include "./Savegame/Craft.h"
#include "./Savegame/CraftWeaponProjectile.h"
#include "./Savegame/BaseFacility.h"
#include "./Savegame/ItemContainer.h"
#include "./Savegame/BattleItem.h"
#include "./Savegame/AlienMission.h"
#include "./Savegame/Vehicle.h"
#include "./Savegame/Country.h"
#include "./Savegame/BattleUnit.h"
#include "./Savegame/Region.h"
#include "./Savegame/SavedGame.h"
#include "./Savegame/WeightedOptions.h"
#include "./Savegame/Production.h"
#include "./Savegame/Target.h"
#include "./Savegame/SerializationHelper.h"
#include "./Savegame/Soldier.h"
#include "./Savegame/AlienStrategy.h"
#include "./Savegame/EquipmentLayoutItem.h"

#endif