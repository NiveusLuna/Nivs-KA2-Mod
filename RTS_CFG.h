///////////////////////////////////////////////////////////////////////////////
//
// RTS_CFG.h
//
// Runtime configuration file for real-time topdown strategy elements added
// to the engine.
//
// By the Mad Dr. I.  4/98.
//
///////////////////////////////////////////////////////////////////////////////

//
// Include the ART only parameters
//
#include "ART_CFG.h"

// include the parameters for the Admiral's Log
#include "ADLOG_CFG.h"

// include the network configuration
//#include "Network_CFG.h"

///////////////////////////////////////////////////////////////////////////////
// Interface Settings
///////////////////////////////////////////////////////////////////////////////

// INTRO MOVIE
#define cfgINTRO_MOVIE_NAME "Intro.bik"

// CAMERA CONTROL

// Where do we start the cinematic zoom?
float cfg_DEFAULT_TACTICAL_ZOOM = 10.0;

float OVERVIEW_PARABOLA_FOCUS = 200.0;
float OVERVIEW_MAX_HEIGHT  = 1850.0;
float OVERVIEW_INIT_HEIGHT = 500.0;
float OVERVIEW_MIN_HEIGHT  =  1.0;
float OVERVIEW_INIT_ROTATION = 0.0;
int SCROLL_BORDER_WIDTH = 8;
float SCROLL_COEFFICIENT = 90000.0;
float FASTSCROLL_COEFFICIENT = 0.005;
float ZOOM_SCROLL_COEFFICIENT = 0.01;
float ROTATION_SCROLL_COEFFICIENT = 0.01;
float CINEMATIC_ROTATION_COEFFECIENT = 0.035;
float KEYBOARD_SCROLL_RATE =  20.0;
float cfgMOUSE_HOLD_LEVEL	= 0.28;		// how long the mouse button needs to be held before it's considered a hold
int SCROLL_ACCELERATION = 3;				// Multiplier for each "step"
float MAX_SCROLL_SPEED = 2.0;				// The max speed we want to scroll
float INITIAL_SCROLL_SPEED = 0.5;			    // Initial speed
int cfgTACTICAL_WHERE_MODE = 1;				// use last selected end path or what you get from shift

// SHIP SELECTION
int SELECTION_RECTANGLE_COMMIT_AREA = 100;	// Define the area of the rectangle we need to form for the selection
											// rectangle to become the current action.

float STATION_PLACEMENT_GRID_SIZE = 50.0;	// The size of the grid squares in the placement map.

float cfgPATH_POINT_SELECTION_DISTANCE=15;	// How far from a path point we
											// can click and select it

int SNAP_TO_DISTANCE = 10;					// Distance where the panels snap to another panel or the edge.
int UNHIDE_DISTANCE = 15;					// Distance at which the interface auto-hide pops up.

// GRID ACTION FX
float GRID_FX_GROWTH_RATE = 0.83;
float GRID_FX_MAX_SIZE = 0.01; // old 50.0
float GRID_FX_MIN_SIZE = 0.005; // old 2.0
float GRID_FX_GROWTH_INTERVAL = 0.01;		// In seconds. Time to pass between growth.
float GRID_FX_ROTATION_SPEED = 2.0;

// DEBUG DISPLAY
int SHOW_QUADTREE = 0;						// Should we show the quadtree decompsition?
int SHOW_FOOTPRINTS_IN_EDIT_MODE = 1;		// Should we show footprints in edit mode?
int DEBUG_VECTORS_3D = 0;
int DEBUG_SHOW_AI_PATHS = 0;
int DEBUG_SHOW_AI_PATHS_RUNNING = 0;
int DEBUG_SHOW_CURVES = 1;
int DEBUG_SHOW_OBJ_POSTS = 1;
int DEBUG_SHOW_LOCAL_BOUNDING_BOX = 0;
int DEBUG_SHOW_OBJECT_BOUNDING_BOX = 0;
int DEBUG_SHOW_OBJECT_BOUNDING_SPHERE = 0;
int DEBUG_SHOW_BOUNDING_SQUARE = 0;
// DEBUG_DRAW can  be 0 - 3
//	0 means draw nothing, 
//	1 means draw just coords 
//	2 means draw everything but AI, 
//	3 means AI state only
int DEBUG_DRAW = 0;

///////////////////////////////////////////////////////////////////////////////
// Other...
///////////////////////////////////////////////////////////////////////////////

//
// DEFAULT MISSION START STARDATE (if not specified in the mission itself)
//

float cfgINITIAL_STARDATE = 0.0;	// stardate at mission start if not specified
float cfgSTARDATE_PER_SECOND = 1.0;		// for every "game second (more or less real time second), this many stardate intervals pass

//
// PARAMETERS FOR MULTIPLAYER MISSION TYPES
//

float cfgDEFEND_TIME = 60.0 * 60.0;		// how long does a defender need to hold out (if unspecified) in seconds -- 1 hour
float cfgLATINUM_COLLECT = 15000.0;		// how much latinum to collect to win a latinum collection game

//
// DIFFICULTY SETTINGS
//

// Damage coefficients for incoming damage for user in single player
float EASY_DAMAGE = 1.0;
float HARD_DAMAGE = 1.0;

// Mining rate cooefficients for user in single player
float EASY_MINING_MODIFIER = 1.0;
float HARD_MINING_MODIFIER = 1.0;

// AI special weapon fire rate
float EASY_SPECIAL_WEAPON_FIRE_MODIFIER = 1.0;
float DEFAULT_SPECIAL_WEAPON_FIRE_MODIFIER = 1.0;
float HARD_SPECIAL_WEAPON_FIRE_MODIFIER = 1.0;

// Build cost multiplier handicap for hard AI
float HARD_AI_COST_HANDICAP = 0.85;
float HARD_AI_SPEED_HANDICAP = 0.95;

float MEDIUM_AI_COST_HANDICAP = 1.0;
float MEDIUM_AI_SPEED_HANDICAP = 1.0;

float EASY_AI_COST_HANDICAP = 1.2;
float EASY_AI_SPEED_HANDICAP = 1.1;

// Percent chance that AI fleets will cloak for long moves in Instant Action
// and Multiplayer AI (provided they can!)
float HARD_AI_CLOAK_PERCENT = 100;
float MEDIUM_AI_CLOAK_PERCENT = 100;
float EASY_AI_CLOAK_PERCENT = 100;

// how far away must latinum resource bases be? (to keep them from building
// clusters of mining stations around clusters of nebulas
float cfgRESOURCE_LATINUM_SPACING = 500.0;

// how far should the transmuters park from the resource
float cfg8472_RESOURCE_DISTANCE = 400.0;

// what is too close to the resource?
float cfg8472_RESOURCE_INSIDE_DISTANCE = 300.0;

// how many freighters can we have around each resource?
int cfgFREIGHTERS_PER_MOON = 3;
int cfgFREIGHTERS_PER_NEBULA = 3;
int cfgFREIGHTERS_PER_PLANET = 5;

// Threat multiplier penalty for getting resources
float cfgRESOURCE_THREAT_PENALTY_COEFFICIENT = 1.0;

// if we start a planet base, build this far above the surface
float cfgPLANET_BASE_BUILD_BUFFER = 400.0;

// At what range of a move command will AI cloak in Instant Action and MP?
float cfg_MIN_MOVE_DISTANCE_FOR_CLOAK = 2000.0;

// At what range will the AI try to warp?
float cfg_MIN_MOVE_WARP_DISTANCE = 1300.0;

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// CLEAN TO HERE.
// I've eliminated unused parameters above this spot.
// Please clean more, and move this down as appropriate.
//
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


//
// DAMAGE MODEL
//

// Are we using the hitpoint system for damage allocation?
int USE_SYSTEM_HITPOINTS = 1;
int SYSTEM_HITPOINTS_BONUS = 0;
float SHIELD_DAMAGE_PROTECTION = 0.8;
// determines how important it is that a hardpoint be close to the targeting hardpoint
// increase to make distance less important
int cfgFACING_CONSTANT = 1;
// number between 0 and 1 inclusive determining how much to weigh the facing probabilities versus the
// predetermined probabilities
float cfgFACING_WEIGHT	= 0.9;

// The default for pre-loading is off for debug, on for release.
// If you want it different, uncomment these two.

// Should we demand load all ODFs?
int cfgDEMAND_LOAD_ODFS = 1;

// Reload object classes on editor instance creation?
// NOTE: When placing objects with this flag on, ALL OBJECTS of the same type
//		actually end up with different Object Classes, because they ALWAYS get reloaded.
//		Only turn this on if you're actually making changes to the odfs, not when building a mission.
int cfgRELOAD_OBJECT_CLASSES = 0;

// Should we go to windowed mode when we hit an assert?  Very useful for single monitor machines.
int cfgFLIP_TO_WINDOWED_ON_ASSERT = 1;

// What's our default grid rendering state in tactical mode? 0=grid only, 1=grid+height bars, 2=none
int cfgTACTICAL_GRID_RENDER = 0;

// What's our default grid rendering state in strategic mode? 0=grid only, 1=grid+height bars, 2=none
int cfgSTRATEGIC_GRID_RENDER = 0;

// Should we show the framerate in the upper left corner?
int  FRAMERATE_DISPLAY = 0;

// At what size should we start scaling objects in strategic view?
float cfgMIN_STRATEGIC_VIEW_OBJECT_RADIUS = 25.0; // 1/4 grid square size

// What's the maximum strategic view scale factor?
float cfgMAX_STRATEGIC_VIEW_OBJECT_SCALE = 1.0;  // Grow by at most 75%

//       A    AAAAA
//      A A     A
//     A   A    A
//     AAAAA    A
//     A   A    A
//     A   A  AAAAA

// STRATEGIC AI

// Show this many goals in the minimap display
int cfg_AI_SHOW_GOALS_COUNT = 18;

// COMBAT

// Instead of standing perfectly still, should we circle in place near our
// weapon range?
int CIRCLE_IN_PLACE_DURING_COMBAT = 1;
float CIRCLE_RADIUS_DIVISOR = 6.0;

// PATHING

// How quickly do we rotate away from collision (1.57 is very quick)
float MAX_PREVENTION_ROTATION = 0.6;

// Cost of OFF-MAP pathing
int OFF_MAP_PATHING_COST = 90000;

// Path Planning
float HIGHEST_QUADTREE_GRID_RESOLUTION = 50.0;

// BUFFER FOR WARP FOOTPRINTS
float cfg_WARP_INHIBITION_BUFFER = 160.0;

// Should we use the full on path planning?
int USE_PATH_PLANNING = 1;

// A value for terrain impassability
int IMPASSABLE_TERRAIN = -1;

// Default value for terrain cost
int DEFAULT_TERRAIN_VALUE = 100;

// Warp inhibition cost
int cfg_WARP_INHIBITION_COST = DEFAULT_TERRAIN_VALUE * 4;

// Almost, but not quite impassable
int cfg_ALMOST_INTRAVERSIBLE = 99999; //300

// Do we want the extra special rubber banding effect to make paths nicer?
int PERFORM_RUBBER_BANDING = 1;

// In certain combat modes, we go extra slow
float COMBAT_SLOWDOWN = 1.0;

// The leader of a formation should slow down
float FORMATION_LEADER_SLOWDOWN = 1.0;

// Pathing cost for nebulae
float NEBULAE_PATHING_COST = 300.0;

// Extra distance for pathing around nebulae
float NEBULAE_PATHING_SAFETY_COEFFICIENT = 1.8;

// Pathing cost for asteroid belts
float ASTEROID_BELT_PATHING_COST = 1000.0;

// Pathing cost for blackholes
float BLACKHOLE_PATHING_COST = IMPASSABLE_TERRAIN;

// Extra distance for pathing around blackholes
float BLACKHOLE_PATHING_SAFETY_COEFFICIENT = 1.5;

// Do we default to formation move, or non-formation group move
int cfgDEFAULT_TO_FORMATION_MOVE = 1;

// How do we scale the planet radius for the gravity induced dewarping zone.
float cfgPLANET_DEWARP_RADIUS_MULTIPLIER = 8;
// Radius multiplier for black holes, since hey, they got gravity
float cfgBLACKHOLE_DEWARP_RADIUS_MULTIPLIER = 80.0;

// how far away from the outside of a planet should borg freighters mine?
float PLANET_MINING_RADIUS_OFFSET = 150;

// STRATEGIC AI PARAMETERS
float AI_GRID_SIZE = 400.0;
float AI_BASE_GRID_SIZE = 400;
#define EASY_AI "AI_Easy_Script.dsl"
#define MEDIUM_AI "AI_Medium_Script.dsl"
#define HARD_AI "AI_Hard_Script.dsl"

// Ship combat configuration
float SKINNY_SHIP_COMBAT_FLOOR = -250.0;
float SKINNY_SHIP_COMBAT_CEILING = 250.0;
float SHIP_COMBAT_FLOOR = -250.0;
float SHIP_COMBAT_CEILING = 250.0;
float DEEP_SPACE_SHIP_COMBAT_FLOOR = -250.0;
float DEEP_SPACE_SHIP_COMBAT_CEILING = 250.0;
float ANCHOR_PURSUIT_POINT_ANGLE = (3.14159/6);
//float ANCHOR_PURSUIT_POINT_ANGLE = 355;
float ANCHOR_RADIUS = 4.0;
float ANCHOR_PURSUIT_FORCE = 10.0;
float CENTER_OF_COMBAT_PERSISTENCE_CUTOFF = 12 * ANCHOR_RADIUS;
float DOGFIGHT_RANGE = 400.0;

// multiply times target radius to get radius for circling, cloverleaf
float cfgDOGFIGHT_RADIUS_MODIFIER = 3.0;
float cfgCLOVERLEAF_RADIUS_MODIFIER = 1.8;

//
// COLLISION AVOIDANCE & PATH FOLLOWING STUFF
//

// How far apart should ships be when moving in formation
float FORMATION_SPACING = 75.0;

// How much the last cycle's collision avoidance force should factor into
// this cycle's.  Must be less than 1.0, and should likely not be very close
// to 1.0.
float OLD_AVOIDANCE_FORCE_WEIGHT = 0.7;

//Obstacle avoidance is off by default
int OBSTACLE_AVOIDANCE = 0;

// How far ahead to project a collision
float COLLISION_LOOK_AHEAD_TIME = 1.4;

// How much wider than reality to pretend objects are for collision avoidance
float COLLISION_SAFETY_MARGIN = 1.2;

// We're adding a special repulsion on the y-axis for collision avoidance.
float Y_REPULSION = 0.5;

// When we're following a scripted 3D path, we know to advance to the next
// point when we're within this radius of the current point
float PATH_POINT_RADIUS = 35.0;
float PATH_POINT_RADIUS_SQUARED = PATH_POINT_RADIUS * PATH_POINT_RADIUS;


// We need an epsilon value for sending units to the right or bottom of the map
// to keep our position strictly LESS than the edge value
float MAP_EDGE_EPSILON = 0.1;

// We actually start keeping ships from the edge this many meters out
float MAP_EDGE_BUFFER = 100.0;

//
//     GAMEPLAY
//

// Transporter parameters.
float TRANSPORTER_RANGE = 500.0;
float TRANSPORTER_DELAY = 1.0;
float TRANSPORTER_ACTION_DELAY = 1.0;
int   TRANSPORTER_MAX = 5;

//fraction of the the build time it takes to decommission
float DECONSTRUCT_PERCENT_TIME = 0.3;

// Weapon parameters.
float BEAM_MISS_LIFETIME = 1.0;

// Use team color for normal weapons?
int NORMAL_WEAPON_TEAM_COLOR = 0;

// UI Limits for each resource
int MAX_DILITHIUM = 999999;
int MAX_CREW =		 999999;
int MAX_LATINUM =	 99999;
int MAX_METAL =		999999;
int MAX_OFFICERS =     9999;

int MAX_BIOMATTER = 9999999;
							
// default resource starting values
// these form the basis for a new bzn file created in edit mode
// they are ignored by multiplayer / instant actions --- see below
// they are ignored by single player - they get loaded from the map iteself
int STARTING_DILITHIUM =	10000;
int STARTING_CREW =			 10000;
int STARTING_CREW_CAPACITY = 999999;	// this is the number of crew you can accumulate if you have nothing (no starbases, no planets)
int STARTING_LATINUM =		1000;
int STARTING_METAL =	   15000;
int STARTING_BIOMATTER =		10000;

// the max value that officer capacity can be in a single player game, and default in multiplayer game.
int SINGLE_PLAYER_OFFICER_LIMIT = 9999;

// multiplayer starting resource possibilities
struct MP_Resource_Class
{
	char m_key[80];			// key for multilanguage lookup in the label.map file
//	int m_dilithium;
//	int m_metal;
//	int m_latinum;
//	int m_crew;
};

int MP_RESOURCE_MODES = 3;	// Note -- this cannot be more than 60 (and it may fail if over 8 depending on how win event handles are set up)

// we no longer define the resource amts here
// they're defined on a per race basis in the race odfs
MP_Resource_Class MP_STARTING_RESOURCE[MP_RESOURCE_MODES] = 
{
//  Key					Dilith			Metal		Latinum			Crew	
	"sr_normal",//		5000,			10000,		500,			9000,
	"sr_lots",	//		50000,			50000,		50000,			50000,
	"sr_unlimited",//		MAX_DILITHIUM,	MAX_CREW,	MAX_LATINUM,	MAX_CREW,
};


// This is for the pull down in the MP Setup screen.
// this sets the maximum officer capacity available to all players in the game.
// this forces a limit to the size of each players armada, so that a reasonable constant speed can be maintained.
struct MP_Officer_Limit_Class
{
	char m_key[80];			// key for multilanguage lookup in the label.map file
	int m_officer_limit;
};
int MP_OFFICER_LIST_SIZE = 4;
MP_Officer_Limit_Class MP_OFFICER_LIMIT[MP_OFFICER_LIST_SIZE] = 
{
	"credits_20",			SINGLE_PLAYER_OFFICER_LIMIT,
	"credits_22",			SINGLE_PLAYER_OFFICER_LIMIT / 2,
	"credits_24",			SINGLE_PLAYER_OFFICER_LIMIT + 200,
	"credits_26",			MAX_OFFICERS
};



int DRAW_PIZZA_BOX = 0;

float cfgSCREEN_WIDTH =	1600.0;
float cfgSCREEN_HEIGHT = 1200.0;

int cfgRESIZEABLE_WINDOW = 1;



// How far away should we look for ships to snap to in Tactical View?
float cfgTACTICAL_SNAP_DISTANCE = 800.0;

// should we fade out craft that get too close to the camera?
int cfgFADE_OUT_ENABLED = 0;
// ratio of radius/distance at which fade out begins
float cfgFADE_OUT_MIN_FOV = 0.9;
// ratio of radius/distance at which fade out is maximum
float cfgFADE_OUT_MAX_FOV = 0.99;
// maximum degree of fade-out (1.0 = invisible, 0.0 = opaque)
float cfgFADE_OUT_MAX = 0.9;

// How far you have to be from your anchor to try warping at all
float cfgTOO_CLOSE_TO_WARP = 1300.0;

// Bonus points to be added to winner(s) game score
float cfgWINNERS_BONUS = 5000;

//
// PLANET CONSTANTS
//
int cfgPOP_SPARSE	= 2000;
int cfgPOP_LIGHT	= 12500;
int cfgPOP_MEDIUM	= 25000;
int cfgPOP_HEAVY	= 50000;
float cfgPLANET_CIVILIAN_RATE_MODIFIER = 2.5;

// PLANET CONSTANTS

// How often should we take snapshots of strength for the timeline?
// in seconds
// this is just the initial sample rate, it decreases as the game plays
float cfgTIMELINE_FREQ = 0.5;


// How much time should there be between 2 ferengi traders going to one trading station?
float cfgTSTATION_TIME_BETWEEN_FERENGI = 2;
// extra time added per ferengi trader that a team has killed
float cfgKILL_FERENGI_TIME_ADD = 5;

float cfgBIOMATTER_RECYCLE_FRACTION = 0.5;

// these aren't bad either:  gvomar06.wav,gvomar60.wav,gvomar62.wav
#define cfgSOUND_VOICE_SAMPLE "KirkSel1.wav"
#define cfgSOUND_EFFECTS_SAMPLE "ptorp.wav"
#define cfgSOUND_BUTTON_SAMPLE "federation_click.wav"
#define cfgSOUND_SHELL_BUTTON_HOVER "cardassian_rollover.wav"
#define cfgSOUND_SHELL_BUTTON_CLICK "cardassian_click.wav"
#define cfgSOUND_INGAME_CHAT_SEND "Chatsend.ogg"
#define cfgSOUND_INGAME_CHAT_RECEIVE "Chatreceive.ogg"
#define cfgSOUND_SHELL_MUSIC "Shell.ogg"
#define cfgSOUND_LOADING_MUSIC "Loading.mp3"
#define cfgSOUND_INGAME_CHEAT "cheater.ogg"

#define SYSTEM_REPAIR_SPARK_SPRITE "xempty"

#define cfgBUTTON_COLOR "deb31e"; 
#define cfgTEXT_COLOR "deb31e";

int GAME_OPTIONS_RANDOM_MAP = 1;
int GAME_OPTIONS_MOTHERSHIP = 0;
int GAME_OPTIONS_OFFICERS = 1;
int GAME_OPTIONS_WARP = 1;
int GAME_OPTIONS_MAP_DEPTH = 0;

int cfgCINEMATIC_WINDOW_ENABLED = 1;

int cfgSINGLE_PLAYER_ENABLED = 0;
int DISABLE_HEIGHT_CHANGE = 1;

float REPAIR_SHIP_DISTANCE = 150;
float BASE_CREW_PER_SEC = 15;
float BASE_SHIELD_REPAIR_RATE = 40;
float BASE_REPAIR_RATE = 75; 

#define cfgDEFAULT_MAP "mp08walr.bzn";
#define cfgDEFAULT_MAP_TITLE "KA2: Warzone";


