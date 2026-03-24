//
// Created by Amel on 3/18/2026.
//

#ifndef SEDMICA4NTP_STRUKTURE_H
#define SEDMICA4NTP_STRUKTURE_H

struct Tacka{
    int x;
    int y;
};
struct trougao
{
    Tacka A;
    Tacka B;
    Tacka C;
};
struct kruznica
{
    int cx;
    int cy;
    double r;
    Tacka O;
};
#endif //SEDMICA4NTP_STRUKTURE_H