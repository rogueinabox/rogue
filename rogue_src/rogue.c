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
unsigned int AMULETLEVEL;       /* Level where the amulet of Yendor will spawn */
unsigned int STARTLEVEL;        /* Level where the player will spawn */
unsigned int HUNGERTIME;        /* Number of actions it takes for the rogue to become faint */
unsigned int MAXTRAPS;          /* Maximum number of traps */
