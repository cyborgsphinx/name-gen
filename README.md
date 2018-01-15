Name-Gen
========

Name-gen is a name generator for English-sounding names.
It works by taking phnemes that appear in English and combining them.

Building
--------

Name-gen uses cmake to generate build scripts (possibly overkill, but it works).

To use an out-of-tree build, do the following

    ~$ mkdir build
    ~$ cd build
    build$ cmake /path/to/name-gen/repo
    build$ make
    build$ bin/name-gen

Name length can be varied by passing a number as the second argument to `name-gen`.
