#ifndef COMMON_H
#define COMMON_H

static const int MAX_STRING_LENGTH = 1000;

typedef long double real;

typedef struct cooccur_rec {
    long int word1;
    long int word2;
    real val;
} CREC;

typedef struct cooccur_rec_id {
    long int word1;
    long int word2;
    real val;
    long int id;
} CRECID;

#endif
