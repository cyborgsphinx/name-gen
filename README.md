Name-Gen
========

Name-gen is a name generator for English-sounding names.
It works by taking phnemes that appear in English and combining them.

Running
-------

name-gen requires a lua interpreter or jit to run.
Its use is as follows:

    # for a name with the default number of phonemes
    $ lua name-gen.lua
    # for a name with 5 phonemes
    $ lua name-gen.lua 5

You should be able to use `luajit` in place of `lua` if that's your preference.

Notes
-----

This really should have been a simple script in the first place, but I got caught up in writing it that I didn't think about HOW I would write it.
