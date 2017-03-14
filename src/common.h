#ifndef COMMON_H
#define COMMON_H

#define HASHFN  bitwisehash

static const int MAX_STRING_LENGTH = 1000;
static const int SEED =	1159241;
static const int TSIZE = 1048576;

typedef double real;
typedef long long voc_t; // originally it was int. But that is to short.

typedef struct cooccur_rec {
  voc_t word1;
  voc_t word2;
  real val;
} CREC;

typedef struct cooccur_rec_id {
  voc_t word1;
  voc_t word2;
  real val;
  voc_t id;
} CRECID;

typedef struct hashrec {
  char *word;
  voc_t id;
  struct hashrec *next;
} HASHREC;

/* Efficient string comparison */
inline int scmp( const char *s1, const char *s2 ) {
  while (*s1 != '\0' && *s1 == *s2) {s1++; s2++;}
  return(*s1 - *s2);
}

#endif
