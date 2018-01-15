#include "phonemes.h"

using std::string;

#define ADD(c) out += c; break

namespace phonemes {
    string get_part(unsigned val) {
        unsigned num_phonemes = 30 + 12 + 1;
        string out;
        switch (val % num_phonemes) {
            case A:
                ADD("ay");
                //out += "ay"; break;
            case a:
                ADD('a');
            case b:
                ADD('b');
            case k:
                ADD('k');
            case d:
                ADD('d');
            case E:
                ADD("ee");
            case e:
                ADD("ea");
            case f:
                ADD('f');
            case g:
                ADD('g');
            case h:
                ADD('h');
            case I:
                ADD("igh");
            case i:
                ADD('i');
            case j:
                ADD('j');
            case l:
                ADD('l');
            case m: ADD('m');
            case n: ADD('n');
            case O: ADD("oa");
            case o: ADD('o');
            case p:
                    ADD('p');
            case kw: ADD("qu");
            case r: ADD('r');
            case zh:
            case s: ADD('s');
            case t: ADD('t');
            case U: ADD("ew");
            case u: ADD('u');
            case v: ADD('v');
            case w: ADD('w');
            case ks: ADD('x');
            case y: ADD('y');
            case z: ADD('z');
            case OO:
            case oo: ADD("oo");
            case oi: ADD("oi");
            case ou: ADD("ou");
            case aw: ADD("aw");
            case ar: ADD("ar");
            case sh: ADD("sh");
            case hw: ADD("wh");
            case ch: ADD("ch");
            case th: ADD("th");
            case ng: ADD("ng");
            case er: ADD("er");
            default: ADD('e');
        }
        return out;
    }
}
