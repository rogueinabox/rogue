/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#ifdef PACKAGE_NAME
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE_NAME
#else
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE
#endif
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int scoreboard_flag;	/**< @brief Display scoreboard and exit (default=off).  */
  const char *scoreboard_help; /**< @brief Display scoreboard and exit help description.  */
  int display_death_flag;	/**< @brief Display a death screen and exit (default=off).  */
  const char *display_death_help; /**< @brief Display a death screen and exit help description.  */
  char * load_game_arg;	/**< @brief Loads a saved game from the given path.  */
  char * load_game_orig;	/**< @brief Loads a saved game from the given path original value given at command line.  */
  const char *load_game_help; /**< @brief Loads a saved game from the given path help description.  */
  int seed_arg;	/**< @brief Sets the random seed.  */
  char * seed_orig;	/**< @brief Sets the random seed original value given at command line.  */
  const char *seed_help; /**< @brief Sets the random seed help description.  */
  int disable_monsters_flag;	/**< @brief Disables monsters (default=off).  */
  const char *disable_monsters_help; /**< @brief Disables monsters help description.  */
  int disable_secrets_flag;	/**< @brief Disables secrets (i.e. hidden doors and corridors) (default=off).  */
  const char *disable_secrets_help; /**< @brief Disables secrets (i.e. hidden doors and corridors) help description.  */
  int disable_darkrooms_flag;	/**< @brief Disable dark rooms generation (default chance: rnd(10) < level-1) (default=off).  */
  const char *disable_darkrooms_help; /**< @brief Disable dark rooms generation (default chance: rnd(10) < level-1) help description.  */
  int disable_mazes_flag;	/**< @brief Disable mazes (default chance: 1/15 prob of a dark room to be a maze instead) (default=off).  */
  const char *disable_mazes_help; /**< @brief Disable mazes (default chance: 1/15 prob of a dark room to be a maze instead) help description.  */
  int more_mazes_flag;	/**< @brief Replace gone rooms (long passageways) with mazes (requires MAZES enabled. default chance: rnd(4) gone rooms per level) (default=off).  */
  const char *more_mazes_help; /**< @brief Replace gone rooms (long passageways) with mazes (requires MAZES enabled. default chance: rnd(4) gone rooms per level) help description.  */
  int all_mazes_flag;	/**< @brief Replace all rooms with mazes (default=off).  */
  const char *all_mazes_help; /**< @brief Replace all rooms with mazes help description.  */
  int amulet_level_arg;	/**< @brief Sets the level where the amulet will spawn (default='26').  */
  char * amulet_level_orig;	/**< @brief Sets the level where the amulet will spawn original value given at command line.  */
  const char *amulet_level_help; /**< @brief Sets the level where the amulet will spawn help description.  */
  int start_level_arg;	/**< @brief Sets the level where the player will spawn (default='1').  */
  char * start_level_orig;	/**< @brief Sets the level where the player will spawn original value given at command line.  */
  const char *start_level_help; /**< @brief Sets the level where the player will spawn help description.  */
  int hungertime_arg;	/**< @brief Sets the number of actions after which the rogue becomes faint (default='1300').  */
  char * hungertime_orig;	/**< @brief Sets the number of actions after which the rogue becomes faint original value given at command line.  */
  const char *hungertime_help; /**< @brief Sets the number of actions after which the rogue becomes faint help description.  */
  int max_traps_arg;	/**< @brief Sets the maximum number of traps (default='0').  */
  char * max_traps_orig;	/**< @brief Sets the maximum number of traps original value given at command line.  */
  const char *max_traps_help; /**< @brief Sets the maximum number of traps help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int scoreboard_given ;	/**< @brief Whether scoreboard was given.  */
  unsigned int display_death_given ;	/**< @brief Whether display-death was given.  */
  unsigned int load_game_given ;	/**< @brief Whether load-game was given.  */
  unsigned int seed_given ;	/**< @brief Whether seed was given.  */
  unsigned int disable_monsters_given ;	/**< @brief Whether disable-monsters was given.  */
  unsigned int disable_secrets_given ;	/**< @brief Whether disable-secrets was given.  */
  unsigned int disable_darkrooms_given ;	/**< @brief Whether disable-darkrooms was given.  */
  unsigned int disable_mazes_given ;	/**< @brief Whether disable-mazes was given.  */
  unsigned int more_mazes_given ;	/**< @brief Whether more-mazes was given.  */
  unsigned int all_mazes_given ;	/**< @brief Whether all-mazes was given.  */
  unsigned int amulet_level_given ;	/**< @brief Whether amulet-level was given.  */
  unsigned int start_level_given ;	/**< @brief Whether start-level was given.  */
  unsigned int hungertime_given ;	/**< @brief Whether hungertime was given.  */
  unsigned int max_traps_given ;	/**< @brief Whether max-traps was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
