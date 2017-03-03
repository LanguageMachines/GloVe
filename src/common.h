#ifndef COMMON_H
#define COMMON_H

#define HASHFN  bitwisehash

static const int MAX_STRING_LENGTH = 1000;
static const int SEED =	1159241;
static const int TSIZE = 1048576;

typedef double real;

typedef struct cooccur_rec {
  long long word1;
  long long word2;
  real val;
} CREC;

typedef struct cooccur_rec_id {
  long long word1;
  long long word2;
  real val;
  long long id;
} CRECID;

typedef struct hashrec {
  char *word;
  long long id;
  struct hashrec *next;
} HASHREC;

/* Efficient string comparison */
inline int scmp( const char *s1, const char *s2 ) {
  while (*s1 != '\0' && *s1 == *s2) {s1++; s2++;}
  return(*s1 - *s2);
}

#endif
