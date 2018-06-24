This is a custom build of the game Rogue for the rogueinabox library.


# Features
- a command count at the bottom of the screen, which make it easy to tell when a command has been completely elaborated
by the game
- several command line arguments to control:
    - the random seed
    - the presence of monsters
    - the presence of hidden tiles
    - the presence of dark rooms
    - the presence of mazes
    - the starting level
    - the level where the amulet will be
    - the hunger time
    - the number of traps


# Build instructions

```
$ make
```

This creates the executable file "rogue".


# Troubleshooting

### Errors regarding autotools
It may be useful to re-generate all the autotools configuration files. Execute:

```
$ make autoreconf
$ make
```

### Compilation error involving illegal regex

`Unescaped left brace in regex is illegal here in regex; marked by <-- HERE in m/\${ <-- HERE ([^ \t=:+{}]+)}/ at /usr/bin/automake-1.14 line 3930.
make: *** [Makefile:307: Makefile.in] Error 1`
  
This is caused by using automake-1.14 in conjunction with a recent version of perl (5.22 or newer). Chances are that newer 
autotools are also present, so try to to execute the commands above in 'Errors regarding autotools'. If that does not help, 
automake-1.14 must be patched to work with perl, which can be done issuing the following command:
  
```
$ sudo patch -b $(which automake-1.14) < automake-1.14-with-perl-5.22+.patch
```
