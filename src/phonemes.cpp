#include "phonemes.h"

using std::string;

namespace phonemes {
    string get_part(unsigned val) {
        unsigned num_phonemes = 30 + 12 + 1;
        switch (val % num_phonemes) {
            case A: return "ay";
            case a: return "a";
            case b: return "b";
            case k: return "k";
            case d: return "d";
            case E: return "ee";
            case e: return "ea";
            case f: return "f";
            case g: return "g";
            case h: return "h";
            case I: return "igh";
            case i: return "i";
            case j: return "j";
            case l: return "l";
            case m: return "m";
            case n: return "n";
            case O: return "oa";
            case o: return "o";
            case p: return "p";
            case kw: return "qu";
            case r: return "r";
            case zh:
            case s: return "s";
            case t: return "t";
            case U: return "ew";
            case u: return "u";
            case v: return "v";
            case w: return "w";
            case ks: return "x";
            case y: return "y";
            case z: return "z";
            case OO:
            case oo: return "oo";
            case oi: return "oi";
            case ou: return "ou";
            case aw: return "aw";
            case ar: return "ar";
            case sh: return "sh";
            case hw: return "wh";
            case ch: return "ch";
            case th: return "th";
            case ng: return "ng";
            case er: return "er";
            default: return "e";
        }
    }
}
