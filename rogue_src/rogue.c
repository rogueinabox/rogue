/*
 * Rogue definitions and variable declarations
 *
 * @(#)rogue.h	5.42 (Berkeley) 08/06/83
 *
 * Rogue: Exploring the Dungeons of Doom
 * Copyright (C) 1980-1983, 1985, 1999 Michael Toy, Ken Arnold and Glenn Wichman
 * All rights reserved.
 *
 * See the file LICENSE.TXT for full copyright and licensing information.
 */
 
#include <stdbool.h>
 
/* 
 * Flags configurable with command line parameters
 */
bool USE_MONSTERS;              /* Whether to enable monsters */
bool ENABLE_SECRETS;            /* Whether to enable secret (i.e. hidden) doors and corridors */
bool ENABLE_DARKROOMS;          /* Whether to enable dark rooms generation (default chance: rnd(10) < level-1) */
bool ENABLE_MAZES;              /* Whether to enable mazes (default chance: 1/15 prob of a dark room to be a maze instead) */
bool MOREMAZES;              	/* Whether to replace gone rooms (long passageways) with mazes (requires MAZES enabled. default chance: rnd(4) gone rooms per level) */
bool ALLMAZES;              	/* Whether to replace all rooms with mazes */
unsigned int AMULETLEVEL;       /* Level where the amulet of Yendor will spawn */
unsigned int STARTLEVEL;        /* Level where the player will spawn */
unsigned int HUNGERTIME;        /* Number of actions it takes for the rogue to become faint */
unsigned int MAXTRAPS;          /* Maximum number of traps */
