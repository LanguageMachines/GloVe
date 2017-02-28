#ifndef COMMON_H
#define COMMON_H

#define HASHFN  bitwisehash

static const int MAX_STRING_LENGTH = 1000;
static const int SEED =	1159241;
static const int TSIZE = 1048576;

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

typedef struct hashrec {
    char	*word;
    long long id;
    struct hashrec *next;
} HASHREC;

/* Efficient string comparison */
inline int scmp( char *s1, char *s2 ) {
  while (*s1 != '\0' && *s1 == *s2) {s1++; s2++;}
  return(*s1 - *s2);
}

#endif
