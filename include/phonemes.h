#include <string>

namespace phonemes {
    // list found at http://www.auburn.edu/academic/education/reading_genie/spellings.html
    enum phoneme {
        A, a, b, k, d,
        E, e, f, g, h,
        I, i, j, l, m,
        n, O, o, p, kw,
        r, s, t, U, u,
        v, w, ks, y, z,
        OO, oo, oi, ou,
        aw, ar, sh, hw,
        ch, th, ng, zh,
        er
    };

    std::string get_part(unsigned);
};
