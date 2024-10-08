#ifndef _MAIN_HH_
#define _MAIN_HH_

#include <stdio.h>
#include <string>

#include "common.hh"

#define VER_MAJ 4
#define VER_MIN 0

#ifndef GIT_COMMIT_HASH
#define GIT_COMMIT_HASH "?"
#endif

#ifndef GIT_BRANCH
#define GIT_BRANCH "?"
#endif

#define VERT_SEP "----------------------------------------------------------------------------------"

int ReduceAngle(double angle);
double LonDiff(double lon1, double lon2);
void *dec2dms(double decimal, char *string);
int PutMask(double lat, double lon, int value);
int OrMask(double lat, double lon, int value);
int GetMask(double lat, double lon);
void PutSignal(double lat, double lon, unsigned char signal);
unsigned char GetSignal(double lat, double lon);
double GetElevation(struct site location);
int AddElevation(double lat, double lon, double height, int size);
double Distance(struct site site1, struct site site2);
double Azimuth(struct site source, struct site destination);
double ElevationAngle(struct site source, struct site destination);
void ReadPath(struct site source, struct site destination);
double ElevationAngle2(struct site source, struct site destination, double er);
double ReadBearing(char *input);
void ObstructionAnalysis(struct site xmtr, struct site rcvr, double f, FILE *outfile);
void free_elev(void);
void free_path(void);
void free_dem(void);
void alloc_elev(void);
void alloc_path(void);
void alloc_dem(void);
void do_allocs(void);

#endif /* _MAIN_HH_ */
